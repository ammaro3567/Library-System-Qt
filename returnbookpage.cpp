#include "returnbookpage.h"
#include "ui_returnbookpage.h"
#include "databasemanager.h"
#include <QMessageBox>

extern DatabaseManager* db;

ReturnBookPage::ReturnBookPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ReturnBookPage)
{
    ui->setupUi(this);
}

ReturnBookPage::~ReturnBookPage()
{
    delete ui;
}

void ReturnBookPage::on_ReturnButton_clicked()
{
    QString isbn = ui->isbnInput->text().trimmed();

    if (isbn.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter the ISBN!");
        return;
    }

    int id = db->getBookIdByISBN(isbn);

    if (id == -1) {
        QMessageBox::warning(this, "Error", "Book not found!");
        return;
    }

    if (db->returnBook(id)) {
        QMessageBox::information(this, "Success", "Book returned successfully!");
        this->close();
    } else {
        QMessageBox::warning(this, "Error", "Failed to return book!");
    }
}


void ReturnBookPage::on_cancel_clicked()
{
this->close();
}

