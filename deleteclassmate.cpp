#include "deleteclassmate.h"
#include "ui_deleteclassmate.h"

deleteclassmate::deleteclassmate(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deleteclassmate)
{
    ui->setupUi(this);
}

deleteclassmate::~deleteclassmate()
{
    delete ui;
}

void deleteclassmate::on_surepushButton_clicked()
{
    QString name=ui->classmatenamelineEdit->text();
    mo =new QSqlQueryModel;
    QString deletefa=QString("delete from allperson where name='%1';").arg(name);
    mo->setQuery(deletefa);
    QString deletefc=QString("delete from classmate where name='%1';").arg(name);
    mo->setQuery(deletefc);
    this->hide();
}

