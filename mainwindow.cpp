#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"Hello world!";

    qDebug()<<"Hello world!";
    qDebug()<<"Hello world!";
    qDebug()<<"Hello world!";
    qDebug()<<"Hello world!";
    qDebug()<<"Hello world!";
}

MainWindow::~MainWindow()
{
    delete ui;
}
