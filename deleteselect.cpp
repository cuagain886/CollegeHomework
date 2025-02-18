#include "deleteselect.h"
#include "ui_deleteselect.h"

deleteselect::deleteselect(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deleteselect)
{
    ui->setupUi(this);
}

deleteselect::~deleteselect()
{
    delete ui;
}

void deleteselect::on_classmatepushButton_clicked()
{
    de=new deleteclassmate;
    de->show();
    this->hide();
}


void deleteselect::on_workmatepushButton_clicked()
{
    dw=new deleteworkmate;
    dw->show();
    this->hide();
}


void deleteselect::on_friendpushButton_clicked()
{
    df=new deletefriend;
    df->show();
    this->hide();
}


void deleteselect::on_familypushButton_clicked()
{
    dfa=new deletefamily;
    dfa->show();
    this->hide();
}

