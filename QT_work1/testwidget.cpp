#include "testwidget.h"
#include "ui_testwidget.h"
#include <QStyleOption>
#include <QDebug>
#include <QPainter>
#include <QPen>
#include <QToolButton>
TestWidget::TestWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWidget)
{
    ui->setupUi(this);
    //ui->spacer1->sizePolicy();
    //this->setFixedWidth(2000);
    //ui->spacer1->
    ui->btn1->setMinimumSize(100,50);
    ui->btn2->setMinimumSize(100,50);

    QPixmap pixmap;
    pixmap.load("url(:/resource/images/bg_2.jpg);");
    ui->btn1->resize(pixmap.size());
    ui->btn1->setIcon(pixmap);
    ui->btn1->setIconSize(pixmap.size());


    //ui->btn1->setStyleSheet(QString("border-image:url(:/resource/images/bg_2.jpg);\
    //    border:0px;"));

    QRegion region;
    region += QRect(0,0,40,40);
    region += QRect(20,20,30,30);
    //ui->btn1->setMask(pixmap.mask());


    connect(ui->btn1, &QPushButton::clicked, [=](){
        qDebug()<<"1";
    });



}

TestWidget::~TestWidget()
{
    delete ui;
}

void TestWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.drawPixmap(0, 0, QPixmap("../Image/sunny.png"));
    //不规则按键
    QPixmap pix;
    pix.load("../Image/face.png");
    ui->btn1->setFixedSize(pix.size());//在Designer中定义一噶按键
    ui->btn1->move(10,10);
    //ui->btn1->setMask(pix.mask());
    //ui->btn1->setStyleSheet("background-image: url(../Image/face.png)");
    QPixmap pixmap;
    pix.load(":/new/prefix1/201409091359143092.png");
    QToolButton *tool_btn = new QToolButton(this);
    tool_btn->setFixedSize(200,100);
    tool_btn->show();
    tool_btn->setMask(pix.mask(1));
   //再设置背景图片， ui->pushbutton->setstylesheet(”background-image: url(:/new/prefix1/201409091359143092.png)“);
}

