#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QString>
#include <QVariant>

class DatabaseManager {
public:
    explicit DatabaseManager(const QString& path);
    ~DatabaseManager();


    bool addBook(const QString &title, const QString &author,
                 const QString &genre, const QString &isbn, const QString &availability);
    bool deleteBook(int id);
    QSqlQuery searchBooksByColumn(const QString& column, const QString& keyword);
    QSqlQuery  getAllBooks();

    // User operations
    bool createUser(const QString& username, const QString& password);
    bool checkUser(const QString& username, const QString& password);

    bool borrowBook(const QString& isbn);
    bool returnBook(int id);
    int getBookIdByISBN(const QString &isbn);


private:
    QSqlDatabase m_db;

    bool createBooksTable();
    bool createUsersTable();
};

#endif // DATABASEMANAGER_H
