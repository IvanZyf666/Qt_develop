#include "widget.h"
#include "ui_widget.h"
#include <QHBoxLayout>
#include <QWidget>
#include <QPushButton>
#include <QSpacerItem>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QWidget* mWidget = new QWidget(this);
    QHBoxLayout *layout = new QHBoxLayout(mWidget);
    mWidget->setStyleSheet(QString("background-color: yellow"));

    mWidget->resize(this->width(), 200);
    for(int i=1;i<=4;i++){
        QPushButton *btn = new QPushButton(mWidget);
        btn->setText("buton");
        btn->setFixedSize(50,50);
        QFont font;
        font.setPointSize(28);

        btn->setFont(font);
        btn->setStyleSheet(QString("color: red"));
        layout->addWidget(btn);


    }
    QSpacerItem* spacer1 = new QSpacerItem(200,20,QSizePolicy::Minimum, QSizePolicy::Minimum);
    layout->addSpacerItem(spacer1);
    //layout->addSpacerItem()


}

Widget::~Widget()
{
    delete ui;
}

