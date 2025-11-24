#ifndef RETURNBOOKPAGE_H
#define RETURNBOOKPAGE_H

#include <QDialog>

namespace Ui {
class ReturnBookPage;
}

class ReturnBookPage : public QDialog
{
    Q_OBJECT

public:
    explicit ReturnBookPage(QWidget *parent = nullptr);
    ~ReturnBookPage();

private slots:
    void on_ReturnButton_clicked();

    void on_cancel_clicked();

private:
    Ui::ReturnBookPage *ui;
};

#endif // RETURNBOOKPAGE_H
