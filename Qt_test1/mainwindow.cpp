#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    label = new QLabel("我是QLabel<br/>第二行",this);
    label->setGeometry(QRect(100,100,200,80));
    label->setStyleSheet("font-size:20px;color:red;font-weight:bold;font-style:italic");
    lineEdit = new QLineEdit("我是QLineEdit",this);
    lineEdit->setGeometry(QRect(100,200,200,25));
    lineEdit->setStyleSheet("font-size:20px;color:red;font-weight:bold;font-style:italic");

    btn_exit = new QPushButton(this);
    btn_exit->move(300,200);
    // 关机程序
    connect(btn_exit, &QPushButton::clicked, this, &QWidget::close);

}

MainWindow::~MainWindow()
{
    delete ui;
}

