#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->widget_1->hide();
    ui->widget_2->hide();


    menuListState.resize(3);

    connect(ui->menu_1, &QPushButton::clicked, [=](){
       menuControl(1);
    });
    connect(ui->menu_2, &QPushButton::clicked, [=](){
        menuControl(2);
    });

    ui->model_btn->setStyleSheet(QStringLiteral("QPushButton#model_btn{border-image: url(:/resource/images/bg_1.jpg);\
        border: 3px solid black;border-radius:8px;}"));

    ui->model_btn->setFlat(true);




    QString button_style="QPushButton{background-color:yellow;\
                                          color: white;   border-radius: 10px;  border: 2px groove gray;\
                                          border-style: outset;\
                                          border-image: url(:/resource/images/bg_1.jpg);}"

                                         "QPushButton:hover{background-color:white; color: red;\
                                        border-image: url(:/resource/images/FINAL_info_-_product_manangement.png)}"

                                        "QPushButton:pressed{background-color:rgb(85, 170, 255);\
                                                         border-style: inset; color: green; }";
    ui->model_btn->setStyleSheet(button_style);

    TestWidget *btn_row = new TestWidget(this);
    //btn_row->setFixedSize(1000,400);
    btn_row->show();
    btn_row->move(0,400);
    //btn_row->setFixedSize(1000,400);
    //btn_row->setFixedWidth(this->width());




}

void MainWindow::paintEvent(QPaintEvent *)
{
    //QPainter p(this);
    //p.drawPixMap
}


void MainWindow::menuControl(int i)
{
    menuListState[i] = !menuListState[i];
    switch (i) {
    case 1:
        if(menuListState[1] == false){
            ui->widget_1->hide();
        }
        else{
            ui->widget_1->show();
        }
        break;
    case 2:
        if(menuListState[2] == false){
            ui->widget_2->hide();
        }
        else{
            ui->widget_2->show();
        }
        break;
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

