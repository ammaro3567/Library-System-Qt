/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QFrame *frame_2;
    QTableWidget *BookTabel;
    QPushButton *LogOutButton;
    QFrame *ReturnBook;
    QPushButton *AddBook;
    QLabel *label;
    QPushButton *SearchBook;
    QPushButton *DeleteBook;
    QPushButton *ViewAllBooks;
    QPushButton *ReturnBookButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *BorrowBookButton;
    QLabel *label_6;

    void setupUi(QDialog *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->setWindowModality(Qt::WindowModality::NonModal);
        dashboard->resize(1200, 600);
        dashboard->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/login/.qtcreator/open-book.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dashboard->setWindowIcon(icon);
        frame_2 = new QFrame(dashboard);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(330, -20, 871, 621));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        BookTabel = new QTableWidget(frame_2);
        if (BookTabel->columnCount() < 5)
            BookTabel->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        BookTabel->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        BookTabel->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        BookTabel->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        BookTabel->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        BookTabel->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        BookTabel->setObjectName("BookTabel");
        BookTabel->setGeometry(QRect(150, 30, 511, 561));
        BookTabel->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
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
        BookTabel->setColumnCount(5);
        BookTabel->horizontalHeader()->setCascadingSectionResizes(false);
        LogOutButton = new QPushButton(frame_2);
        LogOutButton->setObjectName("LogOutButton");
        LogOutButton->setGeometry(QRect(730, 30, 101, 41));
        LogOutButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        LogOutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1976D2;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 18px;\n"
"    border-radius: 6px;\n"
"	border-right:none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1565C0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/login/.qtcreator/log-out.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LogOutButton->setIcon(icon1);
        LogOutButton->setIconSize(QSize(16, 16));
        ReturnBook = new QFrame(dashboard);
        ReturnBook->setObjectName("ReturnBook");
        ReturnBook->setGeometry(QRect(0, -20, 341, 621));
        ReturnBook->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 246, 249);\n"
"border-right: 2px solid rgb(208, 208, 208);\n"
""));
        ReturnBook->setFrameShape(QFrame::Shape::StyledPanel);
        ReturnBook->setFrameShadow(QFrame::Shadow::Raised);
        AddBook = new QPushButton(ReturnBook);
        AddBook->setObjectName("AddBook");
        AddBook->setGeometry(QRect(70, 100, 161, 41));
        AddBook->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        AddBook->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1976D2;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 18px;\n"
"    border-radius: 6px;\n"
"	border-right:none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1565C0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1;\n"
"}\n"
""));
        AddBook->setIconSize(QSize(16, 16));
        label = new QLabel(ReturnBook);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 90, 41, 61));
        label->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-right:none ;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/login/.qtcreator/add.svg")));
        SearchBook = new QPushButton(ReturnBook);
        SearchBook->setObjectName("SearchBook");
        SearchBook->setGeometry(QRect(70, 190, 161, 41));
        SearchBook->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        SearchBook->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1976D2;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 18px;\n"
"    border-radius: 6px;\n"
"	border-right:none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1565C0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1;\n"
"}\n"
""));
        SearchBook->setIconSize(QSize(16, 16));
        DeleteBook = new QPushButton(ReturnBook);
        DeleteBook->setObjectName("DeleteBook");
        DeleteBook->setGeometry(QRect(70, 280, 161, 41));
        DeleteBook->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        DeleteBook->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1976D2;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 18px;\n"
"    border-radius: 6px;\n"
"	border-right:none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1565C0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1;\n"
"}\n"
""));
        DeleteBook->setIconSize(QSize(16, 16));
        ViewAllBooks = new QPushButton(ReturnBook);
        ViewAllBooks->setObjectName("ViewAllBooks");
        ViewAllBooks->setGeometry(QRect(70, 360, 161, 41));
        ViewAllBooks->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        ViewAllBooks->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1976D2;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 18px;\n"
"    border-radius: 6px;\n"
"	border-right:none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1565C0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1;\n"
"}\n"
""));
        ViewAllBooks->setIconSize(QSize(16, 16));
        ReturnBookButton = new QPushButton(ReturnBook);
        ReturnBookButton->setObjectName("ReturnBookButton");
        ReturnBookButton->setGeometry(QRect(70, 520, 161, 41));
        ReturnBookButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        ReturnBookButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1976D2;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 18px;\n"
"    border-radius: 6px;\n"
"	border-right:none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1565C0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1;\n"
"}\n"
""));
        ReturnBookButton->setIconSize(QSize(16, 16));
        label_2 = new QLabel(ReturnBook);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 180, 31, 61));
        label_2->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-right:none ;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/login/.qtcreator/search.svg")));
        label_3 = new QLabel(ReturnBook);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 280, 31, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-right:none ;"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/login/.qtcreator/trash.svg")));
        label_4 = new QLabel(ReturnBook);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 370, 91, 21));
        label_4->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-right:none ;"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/login/.qtcreator/list.svg")));
        label_5 = new QLabel(ReturnBook);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 520, 61, 41));
        label_5->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-right:none ;"));
        label_5->setTextFormat(Qt::TextFormat::MarkdownText);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/login/.qtcreator/edit.svg")));
        BorrowBookButton = new QPushButton(ReturnBook);
        BorrowBookButton->setObjectName("BorrowBookButton");
        BorrowBookButton->setGeometry(QRect(70, 440, 161, 41));
        BorrowBookButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        BorrowBookButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1976D2;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px 18px;\n"
"    border-radius: 6px;\n"
"	border-right:none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1565C0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0D47A1;\n"
"}\n"
""));
        BorrowBookButton->setIconSize(QSize(16, 16));
        label_6 = new QLabel(ReturnBook);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 440, 21, 41));
        label_6->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-right:none ;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/login/.qtcreator/borrow.svg")));

        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QDialog *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "Library Management System Dashboard", nullptr));
        QTableWidgetItem *___qtablewidgetitem = BookTabel->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("dashboard", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = BookTabel->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("dashboard", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = BookTabel->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("dashboard", "Genre", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = BookTabel->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("dashboard", "ISBN", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = BookTabel->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("dashboard", "Availability", nullptr));
        LogOutButton->setText(QCoreApplication::translate("dashboard", "Logout", nullptr));
        AddBook->setText(QCoreApplication::translate("dashboard", "Add Book", nullptr));
        label->setText(QString());
        SearchBook->setText(QCoreApplication::translate("dashboard", "Search Book", nullptr));
        DeleteBook->setText(QCoreApplication::translate("dashboard", "Delete Book", nullptr));
        ViewAllBooks->setText(QCoreApplication::translate("dashboard", "View All Books", nullptr));
        ReturnBookButton->setText(QCoreApplication::translate("dashboard", "Return Book", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        BorrowBookButton->setText(QCoreApplication::translate("dashboard", "Borrow Book", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
