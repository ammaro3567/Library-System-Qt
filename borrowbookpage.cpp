#include "borrowbookpage.h"
#include "ui_borrowbookpage.h"
#include "databasemanager.h"
#include <QMessageBox>

extern DatabaseManager* db;

BorrowBookPage::BorrowBookPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BorrowBookPage)
{
    ui->setupUi(this);
}

BorrowBookPage::~BorrowBookPage()
{
    delete ui;
}

void BorrowBookPage::on_BorrowButton_clicked()
{
    QString isbn = ui->isbnInput->text().trimmed();

    if (isbn.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter an ISBN!");
        return;
    }

    if (db->borrowBook(isbn)) {
        QMessageBox::information(this, "Success", "Book borrowed successfully!");
    } else {
        QMessageBox::warning(this, "Failed", "Book not available or not found!");
    }
}


void BorrowBookPage::on_cancel_clicked()
{
    this->close();
}

