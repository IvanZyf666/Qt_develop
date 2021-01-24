#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{

    btn1->move(100,100);
    btn1->resize(100,100);
    qDebug()<<"ha";

}

Widget::~Widget()
{
}

void Widget::mouseReleaseEvent(QMouseEvent *ev)
{
    emit clicked();
}

