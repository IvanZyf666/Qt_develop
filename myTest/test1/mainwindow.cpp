#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include<QDebug>
#include<QMenuBar>
#include<QToolBar>
#include<QStatusBar>
#include<QLabel>
#include<QDockWidget>
#include<QTextEdit>
#include"mypushbutton.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QPushButton * btn = new QPushButton;
//    btn->setParent(this);
//    btn->setText("第一个按钮");
//    btn->setFixedSize(100,30); // btn->resize(100,30);

//    QPushButton * btn2 = new QPushButton("第二个按钮", this);

//    //移动btn2按钮
//    btn2->move(100,100);

//    // 重置窗口大小
//    resize(800,600);

//    // 设置窗口标题
//    setWindowTitle("第一个窗口");

//    // 设置固定窗口大小
//    setFixedSize(800,600);

//    // 创建一个自己按钮的对象
//    MyPushButton * myBtn = new MyPushButton;
//    myBtn->setText("我自己的按钮-关闭");
//    myBtn->move(200,0);
//    myBtn->setParent(this);
//    myBtn->resize(120,30);
//    connect(myBtn, &MyPushButton::clicked, this, &MainWindow::close);
//    //connect(myBtn, &QPushButton::clicked, this, &QWidget::close); // 一样

//    // 例子2，老师饿了，学生请吃饭
    this->zt = new Teacher(this);
    this->st = new Student(this);

//    connect(zt, &Teacher::hungry, st, &Student::treat);

//    // 调用下课函数
//    classIsOver();



    // 用指针处理 重载的情况*
    void(Teacher::*teacherSignal)(QString) = &Teacher::hungry;
    void(Student::*studentSlot)(QString) = &Student::treat;

    // 无参数的信号和槽
    void(Teacher::*teacherDefaultSignal)(void) = &Teacher::hungry;
    void(Student::*studentDefaultSlot)(void) = &Student::treat;

    // 连接带参数的 信号和槽 连接
    connect(zt, teacherSignal, st, studentSlot); // 一样
    // 注释: 信号的参数个数可以大于槽的参数个数， 类型一致
    connect(zt, teacherDefaultSignal, st, studentDefaultSlot);
    //classIsOver();


    // 点击按钮 调用下课
    QPushButton * btn_class_over = new QPushButton("下课", this);
    btn_class_over->move(0,30);
    // 重置窗口大小
    this->resize(600,400);
    connect(btn_class_over, &QPushButton::clicked, this, &MainWindow::classIsOver);

    // 信号连接信号 (不通过classIsOver 调用吃饭)
    connect(btn_class_over, &QPushButton::clicked, zt, teacherDefaultSignal);

    // 把上一个信号连接断开 (上一句就失效了)
    disconnect(btn_class_over, &QPushButton::clicked, zt, teacherDefaultSignal);

    // lambda 写法
    [=](){ // = 值传递， & 引用传递，但写[btn]仅能看见btn
        //btn_class_over->setText("aaaa");
    }(); // 最后一个() 是运行， 前面的是在声明

    QPushButton * myBtn2 = new QPushButton(this);
    myBtn2->move(100,30);
    myBtn2->setText("累加");
    int m = 10;
    connect(myBtn2, &QPushButton::clicked, this, [=]()mutable{
        m++; // 加上mutable 可以修改m，不加的话 m为只读
        qDebug()<<m;
    });

    int ret_1000 = []()->int{return 1000;}();
    // qDebug()<<"ret ="<<ret_1000;

    QPushButton * btn3 = new QPushButton(this);
    btn3->setText("关闭");
    btn3->move(200,30);
    connect(btn3, &QPushButton::clicked, this, [=](){
        MainWindow::close();
    });

    // 用connect连接信号
    QPushButton * btn4 = new QPushButton(this);
    btn4->setText("饿了,炒饭");
    btn4->move(300,30);
    connect(btn4, &QPushButton::clicked, this, [=](){
        emit zt->hungry("蛋炒饭");
    });


    // MainWindow 教程
    // 菜单栏创建 最多一个
    QMenuBar * bar = menuBar();
    // 将菜单栏放入窗口中
    setMenuBar(bar);

    // 创建菜单
    //bar->addMenu("文件");
    QMenu * fileMenu = bar->addMenu("文件");
    QMenu * editMenu = bar->addMenu("编辑");

    // 创建菜单项
    fileMenu->addAction("新建");
    // 添加分隔符
    fileMenu->addSeparator();
    fileMenu->addAction("打开");

    // 工具栏 可以有多个
    QToolBar * toolBar = new QToolBar(this);
    addToolBar(Qt::RightToolBarArea,toolBar);

    // 允许工具栏左右停靠
    toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);

    // 工具栏中添加控件
    QPushButton * btn_1 = new QPushButton("工具栏控件", this);
    toolBar->addWidget(btn_1);

    //状态栏
    QStatusBar * stBar = statusBar();
    setStatusBar(stBar);
    // 放标签控件
    QLabel * label = new QLabel("提示信息",this);
    stBar->addWidget(label);

    QLabel * label2 = new QLabel("右侧提示信息",this);
    stBar->addPermanentWidget(label2);

    // 铆接部件(浮动窗口)可以有多个
    QDockWidget * dockWidget = new QDockWidget("浮动",this);
    addDockWidget(Qt::BottomDockWidgetArea,dockWidget);

    // 设置中心部件 只能有一个
    QTextEdit * edit = new QTextEdit(this);
    setCentralWidget(edit);


}

void MainWindow::classIsOver()
{
    emit zt->hungry();
    emit zt->hungry("宫保鸡丁");
}

MainWindow::~MainWindow(){
    delete ui;
}

