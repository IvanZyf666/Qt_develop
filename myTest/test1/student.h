#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

// 函数可以写到public下，或者全局
// 需要声明和实现
// 可以有参数和重载
    void treat();

    void treat(QString foodName);

signals:

};

#endif // STUDENT_H
