#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // set up default database
    usernameList<<"1"<<"ivan";
    password<<"1"<<"zhangyifan";

    for(int i=0;i<usernameList.length();i++){
      // set up database
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", QString("myDiary%1").arg(i));
        if(!db.open()) qDebug()<<"database failed";
        else qDebug()<<"set up database successfully!";

        QSqlQuery query(db);
        query.exec("create table person");
        db.close();
    }
    setUpUi();
    connect(btn_exit, &QPushButton::clicked, this, &MainWindow::close);

    connect(login, &QPushButton::clicked, this, [=](){
       int index;

       QString username = line_username->text();
       index = this->findUsernameIndex(username, usernameList);
       if(index != -1){
           if(line_password->text()==password.at(index)){
               qDebug()<<"成功";
               this->hide();
               UserWindow * userWindow = new UserWindow();
               userWindow->show();

           }
           else{
               qDebug()<<"密码错误!";
           }
       }else{
           qDebug()<<"账号不存在!";
       }

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setUpUi(){
    label_1 = new QLabel(this);
    QFont font_label1;
    font_label1.setPointSize(24);//字体大小
    font_label1.setFamily("");//微软雅黑字体
    label_1->move(350,30);
    label_1->resize(400,100);
    label_1->setText("记录管理系统");
    label_1->setFont(font_label1);

    label_2 = new QLabel(this);
    label_2->move(200,150);
    label_2->setText("用户名:");
    label_3 = new QLabel(this);
    label_3->move(200,250);
    label_3->setText("密码:");

    line_username = new QLineEdit(this);
    line_password = new QLineEdit(this);
    line_username->move(300,150);
    line_password->move(300,250);
    line_username->setFixedWidth(300);
    line_password->setFixedWidth(300);


    login = new QPushButton(this);
    login->move(300, 320);
    login->resize(100,40);
    login->setText("登录");
    QFont font_login;
    font_login.setPointSize(16);//字体大小
    login->setFont(font_login);

    btn_exit = new QPushButton(this);
    btn_exit->move(440, 320);
    btn_exit->resize(100,40);
    btn_exit->setText("退出");
    btn_exit->setFont(font_login);

}

int MainWindow::findUsernameIndex(QString str, QStringList usernameList){
    for(int i=0;i<usernameList.size();i++){
        if(str == usernameList.at(i)){
            return i;
        }
    }
    return -1;
}


