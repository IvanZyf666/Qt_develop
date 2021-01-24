/********************************************************************************
** Form generated from reading UI file 'testwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWIDGET_H
#define UI_TESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestWidget
{
public:
    QPushButton *btn2;
    QPushButton *btn1;

    void setupUi(QWidget *TestWidget)
    {
        if (TestWidget->objectName().isEmpty())
            TestWidget->setObjectName(QString::fromUtf8("TestWidget"));
        TestWidget->resize(508, 295);
        TestWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 255, 202);"));
        btn2 = new QPushButton(TestWidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(180, 50, 51, 101));
        btn2->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/images/bg_1.jpg);"));
        btn2->setFlat(true);
        btn1 = new QPushButton(TestWidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(200, 110, 113, 81));
        btn1->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/images/bg_2.jpg);"));
        btn1->setFlat(true);

        retranslateUi(TestWidget);

        QMetaObject::connectSlotsByName(TestWidget);
    } // setupUi

    void retranslateUi(QWidget *TestWidget)
    {
        TestWidget->setWindowTitle(QCoreApplication::translate("TestWidget", "Form", nullptr));
        btn2->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
        btn1->setText(QCoreApplication::translate("TestWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestWidget: public Ui_TestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIDGET_H
