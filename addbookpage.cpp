#include "addbookpage.h"
#include "ui_addbookpage.h"
#include "databasemanager.h"
#include <QMessageBox>

extern DatabaseManager* db;  // use the global database pointer

AddBookPage::AddBookPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddBookPage)
{
    ui->setupUi(this);
}

AddBookPage::~AddBookPage()
{
    delete ui;
}

void AddBookPage::on_AddBook_clicked()
{
    QString title = ui->TitleInput->text();
    QString author = ui->AuthorInput->text();
    QString genre = ui->Generbox->currentText().trimmed();
    QString isbn = ui->ISBNInput->text();
    QString availability = ui->Avalibiltybox->currentText().trimmed();


    if(title.isEmpty() || author.isEmpty() || isbn.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill all required fields!");
        return;
    }
    if(db->getISBN(isbn)){QMessageBox::critical(this, "Error", "This Book is Found");}
    else{
    if(db->addBook(title, author, genre, isbn, availability)) {
        QMessageBox::information(this, "Success", "Book added successfully!");
        ui->TitleInput->clear();
        ui->AuthorInput->clear();
        ui->ISBNInput->clear();

    } else {
        QMessageBox::critical(this, "Error", "Failed to add book!");
    }
    }
}


void AddBookPage::on_cancel_clicked()
{
    this->close();
}
