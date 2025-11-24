#include "loginpage.h"
#include "ui_loginpage.h"
#include "dashboard.h"
#include <QMessageBox>
#include "databasemanager.h"

extern DatabaseManager* db;

LoginPage::LoginPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
}

LoginPage::~LoginPage()
{
    delete ui;
}

// Create Account button (no logic yet)
void LoginPage::on_createAccountButton_clicked()
{
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    if(username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill all fields.");
        return;
    }

    if(db->createUser(username, password)) {
        QMessageBox::information(this, "Success", "Account created successfully!");
    } else {
        QMessageBox::critical(this, "Error", "Failed to create account. Username may already exist.");
    }
}

// Login button (no logic yet)
void LoginPage::on_loginButton_clicked()
{
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    if(username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter username and password.");
        return;
    }

    if(db->checkUser(username, password)) {
        dashboard *d = new dashboard();
        d->show();
        this->close(); // close login page
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
    }
}
