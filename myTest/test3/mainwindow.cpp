#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // treeWidget 树控件的使用
    // 设置水平头
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄介绍");

    ui->treeWidget->columnWidth(100);

    QTreeWidgetItem * liItem = new QTreeWidgetItem(QStringList()<<"力量");
    QTreeWidgetItem * minItem = new QTreeWidgetItem(QStringList()<<"敏捷");
    QTreeWidgetItem * zhiItem = new QTreeWidgetItem(QStringList()<<"智力");



    // 加载顶层的节点
    ui->treeWidget->addTopLevelItem(liItem);
    ui->treeWidget->addTopLevelItem(minItem);
    ui->treeWidget->addTopLevelItem(zhiItem);

    // 追加子节点
    QStringList heroL1, heroL2, heroM1, heroM2, heroZ1, heroZ2;
    heroL1 << "刚被猪" << "前排坦克，很肉";
    heroL2 << "船长" << "前排战士，很强";
    QTreeWidgetItem * l1 = new QTreeWidgetItem(heroL1);
    liItem->addChild(l1);
    QTreeWidgetItem * l2 = new QTreeWidgetItem(heroL2);
    liItem->addChild(l2);

    heroM1 << "月骑" << "输出";
    heroM2 << "小鱼人" << "输出";
    QTreeWidgetItem * m1 = new QTreeWidgetItem(heroM1);
    minItem->addChild(m1);
    QTreeWidgetItem * m2 = new QTreeWidgetItem(heroM2);
    minItem->addChild(m2);

    heroZ1 << "死灵法师" << "法师";
    heroZ2 << "巫医" << "辅助";
    QTreeWidgetItem * z1 = new QTreeWidgetItem(heroZ1);
    zhiItem->addChild(z1);
    QTreeWidgetItem * z2 = new QTreeWidgetItem(heroZ2);
    zhiItem->addChild(z2);


    connect(ui->btnGetValue, &QPushButton::clicked, [=](){
        qDebug()<< ui->QSmallWidgit->getNum();

    });
    connect(ui->btnSetToHalf, &QPushButton::clicked, [=](){
        ui->QSmallWidgit->setNum(50);
    });



}

MainWindow::~MainWindow()
{
    delete ui;
}

