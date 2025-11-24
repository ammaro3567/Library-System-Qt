/********************************************************************************
** Form generated from reading UI file 'returnbookpage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOKPAGE_H
#define UI_RETURNBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReturnBookPage
{
public:
    QPushButton *cancel;
    QLineEdit *isbnInput;
    QLabel *ISBNTitle;
    QPushButton *ReturnButton;

    void setupUi(QDialog *ReturnBookPage)
    {
        if (ReturnBookPage->objectName().isEmpty())
            ReturnBookPage->setObjectName("ReturnBookPage");
        ReturnBookPage->resize(426, 352);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/login/.qtcreator/edit.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ReturnBookPage->setWindowIcon(icon);
        cancel = new QPushButton(ReturnBookPage);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(230, 210, 161, 41));
        cancel->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #cccccc;\n"
"    border-radius: 10px;\n"
"    padding: 8px 15px;\n"
"    color: black;\n"
"}\n"
""));
        cancel->setIconSize(QSize(16, 16));
        isbnInput = new QLineEdit(ReturnBookPage);
        isbnInput->setObjectName("isbnInput");
        isbnInput->setGeometry(QRect(140, 110, 191, 31));
        isbnInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        ISBNTitle = new QLabel(ReturnBookPage);
        ISBNTitle->setObjectName("ISBNTitle");
        ISBNTitle->setGeometry(QRect(70, 110, 71, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setBold(true);
        ISBNTitle->setFont(font);
        ISBNTitle->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 17px;\n"
"    font-weight: bold;\n"
"    color: #3498DB;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        ReturnButton = new QPushButton(ReturnBookPage);
        ReturnButton->setObjectName("ReturnButton");
        ReturnButton->setGeometry(QRect(40, 210, 161, 41));
        ReturnButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        ReturnButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;\n"
"    border-radius: 8px;\n"
"    padding: 6px 15px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
""));
        ReturnButton->setIconSize(QSize(16, 16));

        retranslateUi(ReturnBookPage);

        QMetaObject::connectSlotsByName(ReturnBookPage);
    } // setupUi

    void retranslateUi(QDialog *ReturnBookPage)
    {
        ReturnBookPage->setWindowTitle(QCoreApplication::translate("ReturnBookPage", "Return Book", nullptr));
        cancel->setText(QCoreApplication::translate("ReturnBookPage", "cancel", nullptr));
        ISBNTitle->setText(QCoreApplication::translate("ReturnBookPage", "ISBN:", nullptr));
        ReturnButton->setText(QCoreApplication::translate("ReturnBookPage", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReturnBookPage: public Ui_ReturnBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOKPAGE_H
