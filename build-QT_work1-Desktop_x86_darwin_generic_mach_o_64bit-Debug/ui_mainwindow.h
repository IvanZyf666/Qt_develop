/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QPushButton *menu_1;
    QPushButton *menu_2;
    QPushButton *menu_3;
    QWidget *widget_1;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *model_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 20, 801, 81));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 60, 255);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 151, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Wawati SC"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(195, 255, 89);"));
        menu_1 = new QPushButton(widget);
        menu_1->setObjectName(QString::fromUtf8("menu_1"));
        menu_1->setGeometry(QRect(190, 30, 131, 41));
        menu_1->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#menu_1{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
" \n"
"QPushButton#menu_1:hover{ \n"
"background-color: rgba(255, 255, 255, 150);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
" \n"
"QPushButton#menu_1:pressed{\n"
"background-color: rgba(255, 255, 255, 150);\n"
"border:2px solid white;border-radius:10px;\n"
"}"));
        menu_1->setFlat(true);
        menu_2 = new QPushButton(widget);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_2->setGeometry(QRect(340, 30, 131, 41));
        menu_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#menu_2{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
" \n"
"QPushButton#menu_2:hover{ \n"
"background-color: rgba(255, 255, 255, 150);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
" \n"
"QPushButton#menu_2:pressed{\n"
"background-color: rgba(255, 255, 255, 150);\n"
"border:2px solid white;border-radius:10px;\n"
"}"));
        menu_2->setFlat(true);
        menu_3 = new QPushButton(widget);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_3->setGeometry(QRect(490, 30, 131, 41));
        menu_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton#menu_3{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
" \n"
"QPushButton#menu_3:hover{ \n"
"background-color: rgba(255, 255, 255, 150);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
" \n"
"QPushButton#menu_3:pressed{\n"
"background-color: rgba(255, 255, 255, 150);\n"
"border:2px solid white;border-radius:10px;\n"
"}"));
        menu_3->setFlat(true);
        widget_1 = new QWidget(centralwidget);
        widget_1->setObjectName(QString::fromUtf8("widget_1"));
        widget_1->setGeometry(QRect(190, 100, 120, 301));
        widget_1->setStyleSheet(QString::fromUtf8("\n"
"QWidget#widget_1{\n"
"background-color: rgba(200, 200, 200);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
""));
        pushButton_1 = new QPushButton(widget_1);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 40, 113, 32));
        pushButton_2 = new QPushButton(widget_1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 80, 113, 32));
        pushButton_3 = new QPushButton(widget_1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 120, 113, 32));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(350, 100, 120, 301));
        widget_2->setStyleSheet(QString::fromUtf8("\n"
"QWidget#widget_2{\n"
"background-color: rgba(200, 200, 200);\n"
"border:2px solid white;border-radius:10px;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 40, 113, 32));
        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 80, 113, 32));
        pushButton_6 = new QPushButton(widget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 120, 113, 32));
        model_btn = new QPushButton(centralwidget);
        model_btn->setObjectName(QString::fromUtf8("model_btn"));
        model_btn->setGeometry(QRect(50, 190, 111, 91));
        model_btn->setStyleSheet(QString::fromUtf8(""));
        model_btn->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\267\245\344\275\234\350\275\257\344\273\266", nullptr));
        menu_1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        menu_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        menu_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        model_btn->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
