#ifndef ADDBOOKPAGE_H
#define ADDBOOKPAGE_H

#include <QDialog>

namespace Ui {
class AddBookPage;
}

class AddBookPage : public QDialog
{
    Q_OBJECT

public:
    explicit AddBookPage(QWidget *parent = nullptr);
    ~AddBookPage();

private slots:
    void on_AddBook_clicked();

    void on_cancel_clicked();

private:
    Ui::AddBookPage *ui;
};

#endif // ADDBOOKPAGE_H
