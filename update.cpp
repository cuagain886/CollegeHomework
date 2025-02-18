#include "update.h"
#include "ui_update.h"

update::update(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::update)
{
    ui->setupUi(this);
}

update::~update()
{
    delete ui;
}



void update::on_updateclassmatepushButton_clicked()
{
    QString name=ui->updatenamelineEdit->text();
    QString email=ui->updateemaillineEdit->text();
    QString inf=ui->updateiflineEdit->text();
    QString phone=ui->updatephonelineEdit->text();
    model=new QSqlQueryModel;
    QString sql=QString("update classmate set email='%1',phone='%2',school='%3' where name='%4';").arg(email).arg(phone).arg(inf).arg(name);
    model->setQuery(sql);
    QString ql=QString("update allperson set email='%1',phone='%2' where name='%3';").arg(email).arg(phone).arg(name);
    model->setQuery(ql);
    this->hide();
}


void update::on_workmatepushButton_clicked()
{
    QString name=ui->updatenamelineEdit->text();
    QString email=ui->updateemaillineEdit->text();
    QString inf=ui->updateiflineEdit->text();
    QString phone=ui->updatephonelineEdit->text();
    model=new QSqlQueryModel;
    QString sql=QString("update workmate set email='%1',phone='%2',company='%3' where name='%4';").arg(email).arg(phone).arg(inf).arg(name);
    model->setQuery(sql);
    QString ql=QString("update allperson set email='%1',phone='%2' where name='%3';").arg(email).arg(phone).arg(name);
    model->setQuery(ql);
    this->hide();
}


void update::on_friendpushButton_clicked()
{
    QString name=ui->updatenamelineEdit->text();
    QString email=ui->updateemaillineEdit->text();
    QString inf=ui->updateiflineEdit->text();
    QString phone=ui->updatephonelineEdit->text();
    model=new QSqlQueryModel;
    QString sql=QString("update friend set email='%1',phone='%2',meetaddress='%3' where name='%4';").arg(email).arg(phone).arg(inf).arg(name);
    model->setQuery(sql);
    QString ql=QString("update allperson set email='%1',phone='%2' where name='%3';").arg(email).arg(phone).arg(name);
    model->setQuery(ql);
    this->hide();
}


void update::on_familypushButton_clicked()
{
    QString name=ui->updatenamelineEdit->text();
    QString email=ui->updateemaillineEdit->text();
    QString inf=ui->updateiflineEdit->text();
    QString phone=ui->updatephonelineEdit->text();
    model=new QSqlQueryModel;
    QString sql=QString("update family set email='%1',phone='%2',callname='%3' where name='%4';").arg(email).arg(phone).arg(inf).arg(name);
    model->setQuery(sql);
    QString ql=QString("update allperson set email='%1',phone='%2' where name='%3';").arg(email).arg(phone).arg(name);
    model->setQuery(ql);
    this->hide();
}

