#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
    class UserWindow;
}
class UserWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit UserWindow(QWidget *parent = nullptr);
    UserWindow(QString);
    ~UserWindow();

    void paintEvent(QPaintEvent *);

    QSqlDatabase db;
    void databaseInit(QString str);
    int getUserIndex(QString str);

    int numberOfRows = 0;

private:
    Ui::UserWindow *ui;

signals:
    //void ChooseBackSignal();
};

#endif // USERWINDOW_H
