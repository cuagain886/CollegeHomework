#include "selecttyle.h"
#include "ui_selecttyle.h"

selecttyle::selecttyle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::selecttyle)
{
    ui->setupUi(this);
}

selecttyle::~selecttyle()
{
    delete ui;
}

void selecttyle::on_classmatepushButton_clicked()
{
    classmateif *c=new classmateif;
    c->show();
    this->hide();
}


void selecttyle::on_workmatepushButton_clicked()
{
    workmateif *w=new workmateif;
    w->show();
    this->hide();
}


void selecttyle::on_friendpushButton_clicked()
{
    friendif *f=new friendif;
    f->show();
    this->hide();
}


void selecttyle::on_familypushButton_clicked()
{
    family *fa=new family;
    fa->show();
    this->hide();
}

