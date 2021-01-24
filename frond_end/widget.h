#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
signals:
    void clicked();

protected:
    virtual void mouseReleaseEvent(QMouseEvent *ev);
private:

    QPushButton *btn1;

};

#endif // WIDGET_H
