/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QLabel *titleLabel_;
    QLabel *Username;
    QLabel *Password;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *loginButton;
    QPushButton *createAccountButton;
    QLabel *label;

    void setupUi(QDialog *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(1200, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        LoginPage->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/login/.qtcreator/open-book.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LoginPage->setWindowIcon(icon);
        LoginPage->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #F4F6F8;\n"
"\n"
"}"));
        titleLabel_ = new QLabel(LoginPage);
        titleLabel_->setObjectName("titleLabel_");
        titleLabel_->setGeometry(QRect(430, 70, 351, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Script")});
        font1.setWeight(QFont::ExtraBold);
        titleLabel_->setFont(font1);
        titleLabel_->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    font-size: 28px;\n"
"    font-weight: 800;\n"
"    color: #3498DB; \n"
"}"));
        Username = new QLabel(LoginPage);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(560, 240, 101, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe Script")});
        font2.setBold(true);
        Username->setFont(font2);
        Username->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 17px;\n"
"    font-weight: bold;\n"
"    color: #3498DB;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        Password = new QLabel(LoginPage);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(570, 320, 101, 51));
        Password->setFont(font2);
        Password->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 17px;\n"
"    font-weight: bold;\n"
"    color: #3498DB;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        usernameInput = new QLineEdit(LoginPage);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(710, 230, 251, 54));
        usernameInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FAFAFA;\n"
"    border: 2px solid #F0F0F0;\n"
"    border-radius: 8px;\n"
"    padding: 0 15px;\n"
"    min-height: 50px;\n"
"    font-size: 14px;\n"
"    color: #2C3E50;\n"
"}\n"
"QLineEdit:focus {\n"
"    background-color: #FFFFFF;\n"
"    border: 2px solid #2980B9;\n"
"}\n"
""));
        passwordInput = new QLineEdit(LoginPage);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(710, 320, 251, 54));
        passwordInput->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        passwordInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FAFAFA;\n"
"    border: 2px solid #F0F0F0;\n"
"    border-radius: 8px;\n"
"    padding: 0 15px;\n"
"    min-height: 50px;\n"
"    font-size: 14px;\n"
"    color: #2C3E50;\n"
"}\n"
"QLineEdit:focus {\n"
"    background-color: #FFFFFF;\n"
"    border: 2px solid #2980B9;\n"
"}\n"
""));
        passwordInput->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);
        loginButton = new QPushButton(LoginPage);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(560, 430, 121, 50));
        loginButton->setFont(font2);
        loginButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #3498DB;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 12px;\n"
"    font-weight: bold;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980B9;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1F618D;\n"
"}\n"
""));
        createAccountButton = new QPushButton(LoginPage);
        createAccountButton->setObjectName("createAccountButton");
        createAccountButton->setGeometry(QRect(840, 430, 141, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe Script")});
        font3.setWeight(QFont::DemiBold);
        createAccountButton->setFont(font3);
        createAccountButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        createAccountButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: transparent;\n"
"    color: #3498DB;\n"
"    border: 1px solid #3498DB;\n"
"    border-radius: 6px;\n"
"    padding: 10px;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #EBF5FB;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #D6EAF8;\n"
"}\n"
""));
        label = new QLabel(LoginPage);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 210, 341, 281));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/login/.qtcreator/libraryimage.jpg")));

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QDialog *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Library System \342\200\223 Login", nullptr));
        titleLabel_->setText(QCoreApplication::translate("LoginPage", "Library System Login", nullptr));
        Username->setText(QCoreApplication::translate("LoginPage", "Username:", nullptr));
        Password->setText(QCoreApplication::translate("LoginPage", "Password:", nullptr));
        passwordInput->setText(QString());
        loginButton->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
        createAccountButton->setText(QCoreApplication::translate("LoginPage", "Create Account", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
