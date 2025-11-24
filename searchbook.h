#ifndef SEARCHBOOK_H
#define SEARCHBOOK_H

#include <QDialog>

namespace Ui {
class SearchBook;
}

class SearchBook : public QDialog
{
    Q_OBJECT

public:
    explicit SearchBook(QWidget *parent = nullptr);
    ~SearchBook();

private slots:
    void on_Searchbutton_clicked();

private:
    Ui::SearchBook *ui;
};

#endif // SEARCHBOOK_H
