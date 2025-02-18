#include "deletefamily.h"
#include "ui_deletefamily.h"

deletefamily::deletefamily(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deletefamily)
{
    ui->setupUi(this);
}

deletefamily::~deletefamily()
{
    delete ui;
}

void deletefamily::on_surepushButton_clicked()
{
    QString name=ui->familynamelineEdit->text();
    mo =new QSqlQueryModel;
    QString deletefa=QString("delete from allperson where name='%1';").arg(name);
    mo->setQuery(deletefa);
    QString deleteffa=QString("delete from family where name='%1';").arg(name);
    mo->setQuery(deleteffa);
    this->hide();
}

