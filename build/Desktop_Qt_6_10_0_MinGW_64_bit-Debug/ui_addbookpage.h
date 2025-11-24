/********************************************************************************
** Form generated from reading UI file 'addbookpage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKPAGE_H
#define UI_ADDBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddBookPage
{
public:
    QLabel *Title;
    QLineEdit *TitleInput;
    QLineEdit *AuthorInput;
    QLineEdit *ISBNInput;
    QLabel *Author;
    QLabel *Genre;
    QLabel *ISBN;
    QLabel *ISBN_2;
    QComboBox *Generbox;
    QComboBox *Avalibiltybox;
    QPushButton *AddBook;
    QPushButton *cancel;

    void setupUi(QDialog *AddBookPage)
    {
        if (AddBookPage->objectName().isEmpty())
            AddBookPage->setObjectName("AddBookPage");
        AddBookPage->resize(436, 520);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/login/.qtcreator/add.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AddBookPage->setWindowIcon(icon);
        Title = new QLabel(AddBookPage);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(40, 50, 61, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setBold(true);
        Title->setFont(font);
        Title->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 17px;\n"
"    font-weight: bold;\n"
"    color: #3498DB;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        TitleInput = new QLineEdit(AddBookPage);
        TitleInput->setObjectName("TitleInput");
        TitleInput->setGeometry(QRect(130, 50, 171, 31));
        TitleInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #357ABD;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    background: #ffffff;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #1E90FF;\n"
"    background: #f2f9ff;\n"
"}\n"
""));
        AuthorInput = new QLineEdit(AddBookPage);
        AuthorInput->setObjectName("AuthorInput");
        AuthorInput->setGeometry(QRect(130, 120, 171, 31));
        AuthorInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #357ABD;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    background: #ffffff;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #1E90FF;\n"
"    background: #f2f9ff;\n"
"}\n"
""));
        ISBNInput = new QLineEdit(AddBookPage);
        ISBNInput->setObjectName("ISBNInput");
        ISBNInput->setGeometry(QRect(110, 260, 191, 31));
        ISBNInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #357ABD;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    font-size: 14px;\n"
"    background: #ffffff;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #1E90FF;\n"
"    background: #f2f9ff;\n"
"}\n"
""));
        Author = new QLabel(AddBookPage);
        Author->setObjectName("Author");
        Author->setGeometry(QRect(40, 120, 101, 31));
        Author->setFont(font);
        Author->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 17px;\n"
"    font-weight: bold;\n"
"    color: #3498DB;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        Genre = new QLabel(AddBookPage);
        Genre->setObjectName("Genre");
        Genre->setGeometry(QRect(40, 180, 61, 31));
        Genre->setFont(font);
        Genre->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 17px;\n"
"    font-weight: bold;\n"
"    color: #3498DB;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        ISBN = new QLabel(AddBookPage);
        ISBN->setObjectName("ISBN");
        ISBN->setGeometry(QRect(40, 260, 101, 31));
        ISBN->setFont(font);
        ISBN->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 17px;\n"
"    font-weight: bold;\n"
"    color: #3498DB;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        ISBN_2 = new QLabel(AddBookPage);
        ISBN_2->setObjectName("ISBN_2");
        ISBN_2->setGeometry(QRect(30, 330, 161, 41));
        ISBN_2->setFont(font);
        ISBN_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 17px;\n"
"    font-weight: bold;\n"
"    color: #3498DB;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        Generbox = new QComboBox(AddBookPage);
        Generbox->addItem(QString());
        Generbox->addItem(QString());
        Generbox->addItem(QString());
        Generbox->addItem(QString());
        Generbox->addItem(QString());
        Generbox->addItem(QString());
        Generbox->addItem(QString());
        Generbox->addItem(QString());
        Generbox->addItem(QString());
        Generbox->addItem(QString());
        Generbox->setObjectName("Generbox");
        Generbox->setGeometry(QRect(130, 190, 171, 24));
        Generbox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid #357ABD;\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    font-size: 14px;\n"
"    background: #ffffff;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #1E90FF;\n"
"}\n"
""));
        Avalibiltybox = new QComboBox(AddBookPage);
        Avalibiltybox->addItem(QString());
        Avalibiltybox->addItem(QString());
        Avalibiltybox->setObjectName("Avalibiltybox");
        Avalibiltybox->setGeometry(QRect(180, 340, 121, 24));
        Avalibiltybox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid #357ABD;\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    font-size: 14px;\n"
"    background: #ffffff;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 2px solid #1E90FF;\n"
"}\n"
""));
        AddBook = new QPushButton(AddBookPage);
        AddBook->setObjectName("AddBook");
        AddBook->setGeometry(QRect(20, 420, 161, 41));
        AddBook->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        AddBook->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;\n"
"    border-radius: 10px;\n"
"    padding: 8px 15px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0F7AE5;\n"
"}\n"
""));
        AddBook->setIconSize(QSize(16, 16));
        cancel = new QPushButton(AddBookPage);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(240, 420, 161, 41));
        cancel->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #cccccc;\n"
"    border-radius: 10px;\n"
"    padding: 8px 15px;\n"
"    color: black;\n"
"}\n"
""));
        cancel->setIconSize(QSize(16, 16));

        retranslateUi(AddBookPage);

        QMetaObject::connectSlotsByName(AddBookPage);
    } // setupUi

    void retranslateUi(QDialog *AddBookPage)
    {
        AddBookPage->setWindowTitle(QCoreApplication::translate("AddBookPage", "Add Book", nullptr));
        Title->setText(QCoreApplication::translate("AddBookPage", "Title:", nullptr));
        Author->setText(QCoreApplication::translate("AddBookPage", "Author:", nullptr));
        Genre->setText(QCoreApplication::translate("AddBookPage", "Genre:", nullptr));
        ISBN->setText(QCoreApplication::translate("AddBookPage", "ISBN:", nullptr));
        ISBN_2->setText(QCoreApplication::translate("AddBookPage", "Availability:", nullptr));
        Generbox->setItemText(0, QCoreApplication::translate("AddBookPage", "Fiction", nullptr));
        Generbox->setItemText(1, QCoreApplication::translate("AddBookPage", "Non-Fiction", nullptr));
        Generbox->setItemText(2, QCoreApplication::translate("AddBookPage", "Novel", nullptr));
        Generbox->setItemText(3, QCoreApplication::translate("AddBookPage", "Science", nullptr));
        Generbox->setItemText(4, QCoreApplication::translate("AddBookPage", "Fantasy", nullptr));
        Generbox->setItemText(5, QCoreApplication::translate("AddBookPage", "Dystopian", nullptr));
        Generbox->setItemText(6, QCoreApplication::translate("AddBookPage", "Classic", nullptr));
        Generbox->setItemText(7, QCoreApplication::translate("AddBookPage", "Self Help", nullptr));
        Generbox->setItemText(8, QCoreApplication::translate("AddBookPage", "Finance", nullptr));
        Generbox->setItemText(9, QCoreApplication::translate("AddBookPage", "Other", nullptr));

        Avalibiltybox->setItemText(0, QCoreApplication::translate("AddBookPage", "Available", nullptr));
        Avalibiltybox->setItemText(1, QCoreApplication::translate("AddBookPage", "Borrowed", nullptr));

        AddBook->setText(QCoreApplication::translate("AddBookPage", "Add Book", nullptr));
        cancel->setText(QCoreApplication::translate("AddBookPage", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBookPage: public Ui_AddBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKPAGE_H
