#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include <QTableWidgetItem>
#include <QMessageBox>
#include "databasemanager.h"

namespace Ui {
class dashboard;
}

class dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();

private slots:
    void on_AddBook_clicked();
    void on_SearchBook_clicked();
    void on_DeleteBook_clicked();
    void on_ViewAllBooks_clicked();
    void on_ReturnBookButton_clicked();
    void on_BorrowBookButton_clicked();

    void on_LogOutButton_clicked();

private:
    Ui::dashboard *ui;
};

#endif // DASHBOARD_H
