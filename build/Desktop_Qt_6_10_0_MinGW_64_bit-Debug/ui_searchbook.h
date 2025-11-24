/********************************************************************************
** Form generated from reading UI file 'searchbook.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBOOK_H
#define UI_SEARCHBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchBook
{
public:
    QPushButton *Searchbutton;
    QComboBox *SearchbyBox;
    QLabel *Title;
    QLineEdit *ValueInput;
    QLabel *Title_2;
    QTableWidget *ResultTable;

    void setupUi(QDialog *SearchBook)
    {
        if (SearchBook->objectName().isEmpty())
            SearchBook->setObjectName("SearchBook");
        SearchBook->resize(783, 587);
        Searchbutton = new QPushButton(SearchBook);
        Searchbutton->setObjectName("Searchbutton");
        Searchbutton->setGeometry(QRect(310, 200, 161, 41));
        Searchbutton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        Searchbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1E90FF;\n"
"    border-radius: 8px;\n"
"    padding: 6px 15px;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
""));
        Searchbutton->setIconSize(QSize(16, 16));
        SearchbyBox = new QComboBox(SearchBook);
        SearchbyBox->addItem(QString());
        SearchbyBox->addItem(QString());
        SearchbyBox->addItem(QString());
        SearchbyBox->setObjectName("SearchbyBox");
        SearchbyBox->setGeometry(QRect(370, 80, 171, 24));
        SearchbyBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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
        Title = new QLabel(SearchBook);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(260, 70, 141, 41));
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
        ValueInput = new QLineEdit(SearchBook);
        ValueInput->setObjectName("ValueInput");
        ValueInput->setGeometry(QRect(340, 130, 191, 31));
        ValueInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        Title_2 = new QLabel(SearchBook);
        Title_2->setObjectName("Title_2");
        Title_2->setGeometry(QRect(260, 130, 71, 31));
        Title_2->setFont(font);
        Title_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 17px;\n"
"    font-weight: bold;\n"
"    color: #3498DB;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        ResultTable = new QTableWidget(SearchBook);
        if (ResultTable->columnCount() < 5)
            ResultTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ResultTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ResultTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ResultTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ResultTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ResultTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        ResultTable->setObjectName("ResultTable");
        ResultTable->setGeometry(QRect(140, 290, 511, 201));
        ResultTable->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    border: 1px solid #b0bec5;\n"
"    gridline-color: #e0e0e0;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #1976D2;\n"
"    color: white;\n"
"    padding: 4px;\n"
"    border: none;\n"
"}\n"
""));
        ResultTable->setDragDropOverwriteMode(true);
        ResultTable->setColumnCount(5);
        ResultTable->horizontalHeader()->setCascadingSectionResizes(false);

        retranslateUi(SearchBook);

        QMetaObject::connectSlotsByName(SearchBook);
    } // setupUi

    void retranslateUi(QDialog *SearchBook)
    {
        SearchBook->setWindowTitle(QCoreApplication::translate("SearchBook", "Search Book", nullptr));
        Searchbutton->setText(QCoreApplication::translate("SearchBook", "Search", nullptr));
        SearchbyBox->setItemText(0, QCoreApplication::translate("SearchBook", "Title", nullptr));
        SearchbyBox->setItemText(1, QCoreApplication::translate("SearchBook", "Author", nullptr));
        SearchbyBox->setItemText(2, QCoreApplication::translate("SearchBook", "ISBN", nullptr));

        Title->setText(QCoreApplication::translate("SearchBook", "Search by:", nullptr));
        Title_2->setText(QCoreApplication::translate("SearchBook", "Value:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ResultTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SearchBook", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ResultTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SearchBook", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ResultTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SearchBook", "Genre", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ResultTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SearchBook", "ISBN", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ResultTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SearchBook", "Availability", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchBook: public Ui_SearchBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBOOK_H
