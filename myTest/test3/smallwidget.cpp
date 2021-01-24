#include "smallwidget.h"
#include "ui_smallwidget.h"

SmallWidget::SmallWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SmallWidget)
{
    ui->setupUi(this);

    //QSpinBox 移动， QSlider跟着移动
    void (QSpinBox:: * spSignal)(int) = &QSpinBox::valueChanged;
    connect(ui->spinBox, spSignal, ui->horizontalSlider,
            &QSlider::setValue);

    connect(ui->horizontalSlider, &QSlider::valueChanged, ui->spinBox,
            &QSpinBox::setValue);

}

void SmallWidget::setNum(int num){
    ui->spinBox->setValue(num);
}

int SmallWidget::getNum(){
    return ui->spinBox->value();
}

SmallWidget::~SmallWidget()
{
    delete ui;
}
