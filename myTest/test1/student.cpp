#include "student.h"
#include<QDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::treat()
{
    qDebug()<<"请老师吃饭";
}

void Student::treat(QString foodName)
{
    // 普通打印foodName会有引号，需要转换
    // QString -> char * 先转成QByteArray (.toUtf8()) 再转char * (.data())
    qDebug()<<"请老师吃饭，老师要吃"<<foodName.toUtf8().data();
}
