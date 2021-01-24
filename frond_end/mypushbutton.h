#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent = nullptr);

    // 参1 正常路径， 参2 按下路径
    MyPushButton(QString normalImg, QString pressImg = "");
    ~MyPushButton();

    QString normalImgPath;
    QString pressImgPath;


signals:

};

#endif // MYPUSHBUTTON_H
