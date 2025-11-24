#include "databasemanager.h"

DatabaseManager::DatabaseManager(const QString& path) {
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    if(!m_db.open()) {
        qDebug() << "Error: Cannot open database:" << m_db.lastError().text();
    } else {
        qDebug() << "Database opened successfully.";
        createBooksTable();
        createUsersTable();
    }
}

DatabaseManager::~DatabaseManager() {
    if(m_db.isOpen()) {
        m_db.close();
    }
}

// ================= Books Table =================
bool DatabaseManager::createBooksTable() {
    QSqlQuery query;
    QString createTableQuery =
        "CREATE TABLE IF NOT EXISTS books ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT, "
        "title TEXT NOT NULL, "
        "author TEXT NOT NULL, "
        "genre TEXT, "
        "isbn TEXT, "
        "availability TEXT DEFAULT 'Available')";

    if(!query.exec(createTableQuery)) {
        qDebug() << "Failed to create books table:" << query.lastError().text();
        return false;
    }
    return true;
}

bool DatabaseManager::addBook(const QString &title, const QString &author,
                              const QString &genre, const QString &isbn, const QString &availability)
{
    QSqlQuery query;
    query.prepare("INSERT INTO books (title, author, genre, isbn, availability) "
                  "VALUES (:title, :author, :genre, :isbn, :availability)");
    query.bindValue(":title", title);
    query.bindValue(":author", author);
    query.bindValue(":genre", genre);
    query.bindValue(":isbn", isbn);
    query.bindValue(":availability", availability);

    if(!query.exec()) {
        qDebug() << "Insert book failed:" << query.lastError().text();
        return false;
    }
    return true;
}

bool DatabaseManager::deleteBook(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM books WHERE id = :id");
    query.bindValue(":id", id);
    if(!query.exec()) {
        qDebug() << "Delete book failed:" << query.lastError().text();
        return false;
    }
    return true;
}

// ✅ Fixed searchBooks to avoid parameter count mismatch
QSqlQuery DatabaseManager::searchBooksByColumn(const QString& column, const QString& keyword) {
    QSqlQuery query;
    QString sql = QString("SELECT * FROM books WHERE %1 LIKE ?").arg(column);
    query.prepare(sql);
    query.addBindValue("%" + keyword + "%");

    if(!query.exec()) {
        qDebug() << "Search books failed:" << query.lastError().text();
    }
    return query;
}

QSqlQuery DatabaseManager::getAllBooks() {
    QSqlQuery query("SELECT * FROM books");
    if(!query.exec()) {
        qDebug() << "Get all books failed:" << query.lastError().text();
    }
    return query;
}

// ================= Users Table =================
bool DatabaseManager::createUsersTable() {
    QSqlQuery query;
    QString createTableQuery =
        "CREATE TABLE IF NOT EXISTS users ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT, "
        "username TEXT UNIQUE NOT NULL, "
        "password TEXT NOT NULL)";

    if(!query.exec(createTableQuery)) {
        qDebug() << "Failed to create users table:" << query.lastError().text();
        return false;
    }
    return true;
}

bool DatabaseManager::createUser(const QString& username, const QString& password) {
    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    if(!query.exec()) {
        qDebug() << "Create user failed:" << query.lastError().text();
        return false;
    }
    return true;
}

bool DatabaseManager::checkUser(const QString& username, const QString& password) {
    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    if(!query.exec()) {
        qDebug() << "Check user failed:" << query.lastError().text();
        return false;
    }
    return query.next();
}
bool DatabaseManager::borrowBook(const QString& isbn) {
    QSqlQuery query;

    // Check availability
    query.prepare("SELECT availability FROM books WHERE isbn = :isbn");
    query.bindValue(":isbn", isbn);

    if (!query.exec() || !query.next()) {
        qDebug() << "Book not found:" << query.lastError().text();
        return false;
    }

    QString availability = query.value(0).toString();

    if (availability == "Not Available") {
        qDebug() << "Book is already borrowed!";
        return false;
    }

    // Update availability
    query.prepare("UPDATE books SET availability = 'Not Available' WHERE isbn = :isbn");
    query.bindValue(":isbn", isbn);

    if (!query.exec()) {
        qDebug() << "Borrow update failed:" << query.lastError().text();
        return false;
    }

    return true;
}
bool DatabaseManager::returnBook(int id) {
    QSqlQuery query;
    query.prepare("UPDATE books SET availability = 'Available' WHERE id = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Return book failed:" << query.lastError().text();
        return false;
    }

    // لو مفيش ولا صف اتعدل، يبقى ID غلط
    if (query.numRowsAffected() == 0) {
        qDebug() << "Return failed: Book not found!";
        return false;
    }

    return true;
}
int DatabaseManager::getBookIdByISBN(const QString &isbn) {
    QSqlQuery query;
    query.prepare("SELECT id FROM books WHERE isbn = :isbn");
    query.bindValue(":isbn", isbn);

    if (!query.exec()) {
        qDebug() << "ISBN search failed:" << query.lastError().text();
        return -1;
    }

    if (query.next()) {
        return query.value("id").toInt();
    }

    return -1;
}

