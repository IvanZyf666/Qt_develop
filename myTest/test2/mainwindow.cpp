#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->actionNew->setIcon(QIcon("G:/wsl/wallpaper/icon.png"));

    // 使用添加Qt资源"：+前缀名+文件名"
    ui->actionNew->setIcon(QIcon(":/new/prefix1/icon.png"));
    ui->actionOpen->setIcon(QIcon(":/new/prefix1/221228-15574975489aa1.jpg"));

    //QSqlDatabase
}

MainWindow::~MainWindow()
{
    delete ui;
}

