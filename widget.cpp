#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(pokazivalka()));
}

Widget::~Widget()
{
    delete ui;


}

void Widget::pokazivalka()
{
    QString mas[] = {"Труд человека кормит, а лень портит", "Без труда не вытащить и рыбки из пруда","закинуться насваем"};
    ui->label->setText(mas[rand()%3]);
}
