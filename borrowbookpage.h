#ifndef BORROWBOOKPAGE_H
#define BORROWBOOKPAGE_H

#include <QDialog>

namespace Ui {
class BorrowBookPage;
}

class BorrowBookPage : public QDialog
{
    Q_OBJECT

public:
    explicit BorrowBookPage(QWidget *parent = nullptr);
    ~BorrowBookPage();

private slots:
    void on_BorrowButton_clicked();

    void on_cancel_clicked();

private:
    Ui::BorrowBookPage *ui;
};

#endif // BORROWBOOKPAGE_H
