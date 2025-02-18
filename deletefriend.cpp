#include "deletefriend.h"
#include "ui_deletefriend.h"

deletefriend::deletefriend(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deletefriend)
{
    ui->setupUi(this);
}

deletefriend::~deletefriend()
{
    delete ui;
}

void deletefriend::on_surepushButton_clicked()
{
    QString name=ui->friendnamelineEdit->text();
    mo =new QSqlQueryModel;
    QString deletefa=QString("delete from allperson where name='%1';").arg(name);
    mo->setQuery(deletefa);
    QString deleteff=QString("delete from friend where name='%1';").arg(name);
    mo->setQuery(deleteff);
    this->hide();
}

