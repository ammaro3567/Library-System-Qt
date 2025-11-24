#include "deletebook.h"
#include "ui_deletebook.h"
#include "databasemanager.h"
#include <QMessageBox>

extern DatabaseManager* db;

DeleteBook::DeleteBook(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeleteBook)
{
    ui->setupUi(this);
}

DeleteBook::~DeleteBook()
{
    delete ui;
}

void DeleteBook::on_DeleteButton_clicked()
{
    QString value = ui->Value->text().trimmed();
    QString method = ui->DeleteBox->currentText();

    if(value.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter a value!");
        return;
    }

    QSqlQuery query;

    // البحث عن الـ id حسب الطريقة
    if(method == "Title") {
        query.prepare("SELECT id FROM books WHERE title = :value");
    } else if(method == "ISBN") {
        query.prepare("SELECT id FROM books WHERE isbn = :value");
    } else {
        QMessageBox::critical(this, "Error", "Unknown delete method!");
        return;
    }

    query.bindValue(":value", value);

    if(!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to find book: " + query.lastError().text());
        return;
    }

    if(query.next()) {
        int id = query.value("id").toInt();
        if(db->deleteBook(id)) {
            QMessageBox::information(this, "Success", "Book deleted successfully!");
            this->close();
        } else {
            QMessageBox::critical(this, "Error", "Failed to delete book!");
        }
    } else {
        QMessageBox::warning(this, "Not Found", "Book not found!");
    }
}


void DeleteBook::on_cancel_clicked()
{
    this->close();
}

