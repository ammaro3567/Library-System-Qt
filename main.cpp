#include "loginpage.h"
#include <QApplication>
#include "databasemanager.h"

DatabaseManager* db;  // global pointer

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Initialize database once
    db = new DatabaseManager("library.db");

    LoginPage l;
    l.show();

    return a.exec();
}
