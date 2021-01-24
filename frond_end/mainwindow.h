#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QComboBox>
#include <QToolBar>
#include <QMenu>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void showChatWidget3();
private:
    Ui::MainWindow *ui;

    QLabel *listLabel;
    QComboBox *listComboBox;
    QToolBar *listToolBar;

    QMenu * menu, * menu_2;

    QWidget * widget;

};
#endif // MAINWINDOW_H
