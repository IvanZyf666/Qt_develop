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
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE",QString("myDiary%1").arg(i));
        db.setDatabaseName(QString(".//qtDb%1.db").arg(i));
        if(!db.open()) qDebug()<<"database failed";
        else qDebug()<<"set up database successfully!";

        QSqlQuery query(db);
        //query.exec("create table person");
        db.close();
    }


    //QVector<User

}

MainWindow::~MainWindow()
{
    delete ui;
}

