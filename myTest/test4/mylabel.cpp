#include "mylabel.h"
#include <QDebug>
myLabel::myLabel(QWidget *parent) : QLabel(parent)
{

}

// 鼠标进入事件
void myLabel::enterEvent(QEvent *event){
    qDebug()<<"鼠标进入了";
}

// 鼠标离开事件
void myLabel::leaveEvent(QEvent *){
    qDebug()<<"鼠标离开";
}

// todo: 鼠标点击
