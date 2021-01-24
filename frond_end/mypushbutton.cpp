#include "mypushbutton.h"
#include <QDebug>
MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
{

}


MyPushButton::MyPushButton(QString normalImg, QString pressImg)
{
    this->normalImgPath = normalImg;
    this->pressImgPath = pressImg;

    QPixmap pix;
    bool ret = pix.load(normalImg);

    if(!ret){
        qDebug()<<"图片加载失败";
        return;
    }

    pix = pix.scaled(pix.width()*0.5, pix.height()*0.5);
    // 设置固定大小
    this->setFixedSize(pix.width(), pix.height());

    this->setStyleSheet("QPushButton{border:0px}");

    // 设置图标

    this->setIcon(pix);

    this->setIconSize(QSize(pix.width(), pix.height()));

}
MyPushButton::~MyPushButton()
{

}
