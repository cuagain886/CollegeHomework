#include "deleteworkmate.h"
#include "ui_deleteworkmate.h"

deleteworkmate::deleteworkmate(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deleteworkmate)
{
    ui->setupUi(this);
}

deleteworkmate::~deleteworkmate()
{
    delete ui;
}

void deleteworkmate::on_surepushButton_clicked()
{
    QString name=ui->workmatenamelineEdit->text();
    mo =new QSqlQueryModel;
    QString deletefa=QString("delete from allperson where name='%1';").arg(name);
    mo->setQuery(deletefa);
    QString deletefw=QString("delete from workmate where name='%1';").arg(name);
    mo->setQuery(deletefw);
    this->hide();
}

