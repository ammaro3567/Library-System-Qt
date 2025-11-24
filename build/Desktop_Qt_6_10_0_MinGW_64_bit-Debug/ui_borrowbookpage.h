/********************************************************************************
** Form generated from reading UI file 'borrowbookpage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWBOOKPAGE_H
#define UI_BORROWBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BorrowBookPage
{
public:
    QLabel *ISBNTitle;
    QLineEdit *isbnInput;
    QPushButton *BorrowButton;
    QPushButton *cancel;

    void setupUi(QDialog *BorrowBookPage)
    {
        if (BorrowBookPage->objectName().isEmpty())
            BorrowBookPage->setObjectName("BorrowBookPage");
        BorrowBookPage->resize(400, 300);
        ISBNTitle = new QLabel(BorrowBookPage);
        ISBNTitle->setObjectName("ISBNTitle");
        ISBNTitle->setGeometry(QRect(60, 60, 71, 31));
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
        isbnInput = new QLineEdit(BorrowBookPage);
        isbnInput->setObjectName("isbnInput");
        isbnInput->setGeometry(QRect(120, 60, 191, 31));
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
        BorrowButton = new QPushButton(BorrowBookPage);
        BorrowButton->setObjectName("BorrowButton");
        BorrowButton->setGeometry(QRect(30, 160, 161, 41));
        BorrowButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        BorrowButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;\n"
"    border-radius: 8px;\n"
"    padding: 6px 15px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
""));
        BorrowButton->setIconSize(QSize(16, 16));
        cancel = new QPushButton(BorrowBookPage);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(210, 160, 161, 41));
        cancel->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #cccccc;\n"
"    border-radius: 10px;\n"
"    padding: 8px 15px;\n"
"    color: black;\n"
"}\n"
""));
        cancel->setIconSize(QSize(16, 16));

        retranslateUi(BorrowBookPage);

        QMetaObject::connectSlotsByName(BorrowBookPage);
    } // setupUi

    void retranslateUi(QDialog *BorrowBookPage)
    {
        BorrowBookPage->setWindowTitle(QCoreApplication::translate("BorrowBookPage", "BorrowBook", nullptr));
        ISBNTitle->setText(QCoreApplication::translate("BorrowBookPage", "ISBN:", nullptr));
        BorrowButton->setText(QCoreApplication::translate("BorrowBookPage", "Borrow", nullptr));
        cancel->setText(QCoreApplication::translate("BorrowBookPage", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BorrowBookPage: public Ui_BorrowBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWBOOKPAGE_H
