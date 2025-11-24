/********************************************************************************
** Form generated from reading UI file 'deletebook.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEBOOK_H
#define UI_DELETEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteBook
{
public:
    QLabel *Title_2;
    QPushButton *DeleteButton;
    QLineEdit *Value;
    QComboBox *DeleteBox;
    QLabel *DeletLabel;
    QPushButton *cancel;

    void setupUi(QDialog *DeleteBook)
    {
        if (DeleteBook->objectName().isEmpty())
            DeleteBook->setObjectName("DeleteBook");
        DeleteBook->resize(485, 461);
        Title_2 = new QLabel(DeleteBook);
        Title_2->setObjectName("Title_2");
        Title_2->setGeometry(QRect(70, 190, 71, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setBold(true);
        Title_2->setFont(font);
        Title_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 17px;\n"
"    font-weight: bold;\n"
"    color: #3498DB;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        DeleteButton = new QPushButton(DeleteBook);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setGeometry(QRect(70, 270, 161, 41));
        DeleteButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        DeleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;\n"
"    border-radius: 8px;\n"
"    padding: 6px 15px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
""));
        DeleteButton->setIconSize(QSize(16, 16));
        Value = new QLineEdit(DeleteBook);
        Value->setObjectName("Value");
        Value->setGeometry(QRect(160, 190, 191, 31));
        Value->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        DeleteBox = new QComboBox(DeleteBook);
        DeleteBox->addItem(QString());
        DeleteBox->addItem(QString());
        DeleteBox->setObjectName("DeleteBox");
        DeleteBox->setGeometry(QRect(180, 130, 171, 24));
        DeleteBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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
        DeletLabel = new QLabel(DeleteBook);
        DeletLabel->setObjectName("DeletLabel");
        DeletLabel->setGeometry(QRect(70, 120, 141, 41));
        DeletLabel->setFont(font);
        DeletLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 17px;\n"
"    font-weight: bold;\n"
"    color: #3498DB;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        cancel = new QPushButton(DeleteBook);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(260, 270, 161, 41));
        cancel->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #cccccc;\n"
"    border-radius: 10px;\n"
"    padding: 8px 15px;\n"
"    color: black;\n"
"}\n"
""));
        cancel->setIconSize(QSize(16, 16));

        retranslateUi(DeleteBook);

        QMetaObject::connectSlotsByName(DeleteBook);
    } // setupUi

    void retranslateUi(QDialog *DeleteBook)
    {
        DeleteBook->setWindowTitle(QCoreApplication::translate("DeleteBook", "Delete Book", nullptr));
        Title_2->setText(QCoreApplication::translate("DeleteBook", "Value:", nullptr));
        DeleteButton->setText(QCoreApplication::translate("DeleteBook", "Delete", nullptr));
        DeleteBox->setItemText(0, QCoreApplication::translate("DeleteBook", "Title", nullptr));
        DeleteBox->setItemText(1, QCoreApplication::translate("DeleteBook", "ISBN", nullptr));

        DeletLabel->setText(QCoreApplication::translate("DeleteBook", "Delete by:", nullptr));
        cancel->setText(QCoreApplication::translate("DeleteBook", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteBook: public Ui_DeleteBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEBOOK_H
