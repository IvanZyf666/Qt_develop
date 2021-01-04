#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "userwindow.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QStringList usernameList;
    QStringList password;

    QLineEdit * line_username;
    QLineEdit * line_password;
    QPushButton * login;
    QPushButton * btn_exit;

    void setUpUi();
    int findUsernameIndex(QString str, QStringList usernameList);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
