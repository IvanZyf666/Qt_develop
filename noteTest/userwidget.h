#ifndef USERWIDGET_H
#define USERWIDGET_H

#include <QWidget>

namespace Ui {
class UserWidget;
}
class UserWidget : public QWidget
{
    Q_OBJECT
public:
    explicit UserWidget(QWidget *parent = nullptr);
    UserWidget();
    UserWidget(QString);
    ~UserWidget();

private:
    Ui::UserWidget *ui;

signals:
    void chooseBackSignal();
};

#endif // USERWIDGET_H
