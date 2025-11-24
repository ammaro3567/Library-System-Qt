#include "searchbook.h"
#include "ui_searchbook.h"
#include "databasemanager.h"
#include <QMessageBox>

extern DatabaseManager* db;

SearchBook::SearchBook(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchBook)
{
    ui->setupUi(this);
}

SearchBook::~SearchBook()
{
    delete ui;
}

void SearchBook::on_Searchbutton_clicked()
{
    QString column;
    QString value = ui->ValueInput->text().trimmed();

    if(value.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter a value to search!");
        return;
    }

    // تحديد العمود حسب الـ ComboBox
    QString choice = ui->SearchbyBox->currentText();
    if(choice == "Title") column = "title";
    else if(choice == "Author") column = "author";
    else if(choice == "ISBN") column = "isbn";

    QSqlQuery result = db->searchBooksByColumn(column, value);

    ui->ResultTable->setRowCount(0); // مسح النتائج القديمة
    int row = 0;
    while(result.next()) {
        ui->ResultTable->insertRow(row);
        ui->ResultTable->setItem(row, 0, new QTableWidgetItem(result.value("title").toString()));
        ui->ResultTable->setItem(row, 1, new QTableWidgetItem(result.value("author").toString()));
        ui->ResultTable->setItem(row, 2, new QTableWidgetItem(result.value("genre").toString()));
        ui->ResultTable->setItem(row, 3, new QTableWidgetItem(result.value("isbn").toString()));
        ui->ResultTable->setItem(row, 4, new QTableWidgetItem(result.value("availability").toString()));
        row++;
    }
}

