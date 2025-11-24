#include "dashboard.h"
#include "ui_dashboard.h"
#include "addbookpage.h"
#include "searchbook.h"
#include "deletebook.h"
#include "returnbookpage.h"
#include "borrowbookpage.h"
#include "loginpage.h"

extern DatabaseManager* db;  // use global database object

dashboard::dashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard)
{
    ui->setupUi(this);

    // Optional: set table headers
    ui->BookTabel->setColumnCount(5);
    ui->BookTabel->setHorizontalHeaderLabels({"Title", "Author", "Genre", "ISBN", "Availability"});
}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::on_AddBook_clicked()
{
    AddBookPage addPage;
    if(addPage.exec() == QDialog::Accepted) {
        on_ViewAllBooks_clicked(); // refresh table after adding
    }
}

void dashboard::on_SearchBook_clicked()
{
    SearchBook searchPage;
    if(searchPage.exec() == QDialog::Accepted) {
        on_ViewAllBooks_clicked(); // optional: refresh table with search results
    }
}

void dashboard::on_DeleteBook_clicked()
{
    DeleteBook deletePage;
    if(deletePage.exec() == QDialog::Accepted) {
        on_ViewAllBooks_clicked(); // refresh table after deletion
    }
}

void dashboard::on_ViewAllBooks_clicked()
{
    ui->BookTabel->setRowCount(0);
    QSqlQuery query = db->getAllBooks();

    int row = 0;
    while(query.next()) {
        ui->BookTabel->insertRow(row);
        ui->BookTabel->setItem(row, 0, new QTableWidgetItem(query.value("title").toString()));
        ui->BookTabel->setItem(row, 1, new QTableWidgetItem(query.value("author").toString()));
        ui->BookTabel->setItem(row, 2, new QTableWidgetItem(query.value("genre").toString()));
        ui->BookTabel->setItem(row, 3, new QTableWidgetItem(query.value("isbn").toString()));
        ui->BookTabel->setItem(row, 4, new QTableWidgetItem(query.value("availability").toString()));
        row++;
    }
}

void dashboard::on_ReturnBookButton_clicked()
{
    ReturnBookPage returnPage;
    if(returnPage.exec() == QDialog::Accepted) {
        on_ViewAllBooks_clicked(); // refresh table
    }
}

void dashboard::on_BorrowBookButton_clicked()
{
    BorrowBookPage borrowPage;
    if(borrowPage.exec() == QDialog::Accepted) {
        on_ViewAllBooks_clicked(); // refresh table
    }
}

void dashboard::on_LogOutButton_clicked()
{
    this->close();

}

