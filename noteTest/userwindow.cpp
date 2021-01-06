#include "userwindow.h"

UserWindow::UserWindow(QWidget *parent) : QMainWindow(parent),
    ui()
{

}

UserWindow::UserWindow(QString str):ui(new Ui::UserWindow)
{
    ui->setupUi(this);

}
