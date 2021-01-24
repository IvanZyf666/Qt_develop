#include "userwindow.h"
#include "ui_userwindow.h"
#include <QDebug>
#include <QPainter>

UserWindow::UserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserWindow)
{

}

UserWindow::UserWindow(QString str):ui(new Ui::UserWindow)
{

}

UserWindow::~UserWindow()
{
    //delete ui;
}

void UserWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/images/IMG_10.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
}
