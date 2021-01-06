#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->actionNew->setIcon(QIcon("G:/wsl/wallpaper/icon.png"));

    // 使用添加Qt资源"：+前缀名+文件名"
    ui->actionNew->setIcon(QIcon(":/new/prefix1/icon.png"));
    ui->actionOpen->setIcon(QIcon(":/new/prefix1/221228-15574975489aa1.jpg"));

    // 设置单选按钮 男默认选中
    ui->rBtnMan->setChecked(true);

    // 选中女 打印信息
    connect(ui->rBtnWoman, &QRadioButton::clicked, [=](){
       qDebug()<<"性别女";
    });

    // 利用listWidget写诗
    QListWidgetItem * item = new QListWidgetItem("锄禾日当午");
    // 将一行诗放入到listWidget控件中
    ui->listWidget->addItem(item);



}

MainWindow::~MainWindow()
{
    delete ui;
}

