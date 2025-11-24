#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "databasemanager.h"

extern DatabaseManager* db;  // use global database

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
