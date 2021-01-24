#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>
#include <QDebug>
#include <QLabel>
#include <QComboBox>
#include <QAction>
#include <QDir>
#include "mypushbutton.h"
#include "widget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->btn_1->setText("按钮1");

    connect(ui->btn_1, &QPushButton::clicked, this, &QWidget::close);

    //font.setFamily("\345\215\216\346\226\207\346\226\260\351\255\217");
    //ui->btn_1->setFont(font);

    // 开始按钮
    MyPushButton * startBtn = new MyPushButton(":/images/IMG_3.jpeg");
    startBtn->move(300,50);
    startBtn->resize(100,100);
    startBtn->setText("Menu button");



    // 重点: 开始按钮 生成在界面上*
    startBtn->setParent(this);


    // 下拉菜单
    listLabel =new QLabel(tr("排序"));
    listComboBox =new QComboBox;
    listComboBox->addItem("Standard");

    listToolBar =addToolBar("list");
    listToolBar->addWidget(listLabel);
    listToolBar->addWidget(listComboBox);
    listToolBar->addSeparator();


    QAction *action = new QAction(this);
    QAction *action_2 = new QAction(this);
    action->setText("功能1");
    action_2->setText("功能2_1");

    //
    menu = new QMenu(this);
    menu->resize(100,100);
    menu->move(300,100);
    menu->addAction(action);
    menu->setParent(this);

    menu_2 = new QMenu(this);
    menu_2->addAction(action_2);
    menu_2->setTitle("二级");

    menu->addAction(menu_2->menuAction());

    ui->btn_3->setMenu(menu);
    ui->btn_3->setText("下拉菜单");
    //menu->

    //this->hide();


    //
    connect(ui->btn_4, SIGNAL(clicked()),this,SLOT(showChatWidget3()));
    //connect(ui->background_wd, &QWidget::press)
    //connect(ui->background_wd, SIGNAL(clicked()), this, SLOT(showChatWidget3()));

    QLabel *lb1 = new QLabel(this);
    lb1->setParent(this);
    lb1->setText("hhahhah");
    lb1->resize(100,100);
    lb1->move(200,100);
    connect(lb1, SIGNAL(clicked()), this, SLOT(showChatWidget3()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showChatWidget3()
{
    qDebug()<<"show widget";
    // 这个不能成功添加widget
    widget = new QWidget(this);
    widget->move(200,200);
    widget->setFixedSize(100,100);
    widget->show();
}

