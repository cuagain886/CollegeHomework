#include "classmateif.h"
#include "ui_classmateif.h"
#include<QString>
#include<mysql.h>
#include<QByteArray>
#include<QMessageBox>

classmateif::classmateif(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::classmateif)
{
    ui->setupUi(this);

}

classmateif::~classmateif()
{
    delete ui;
}

void classmateif::on_pushButton_clicked()
{
    QString name=ui->cmnamelineEdit->text();
    QString birthdate=ui->cmbirthlineEdit->text();
    QString email=ui->cmemlineEdit->text();
    QString school=ui->cmsclineEdit->text();
    QString phone=ui->cmphlineEdit->text();
    QString sql=QString("insert into classmate values('%1','%2','%3','%4','%5');").arg(name).arg(birthdate).arg(email).arg(phone).arg(school);
    QSqlQuery query;
    query.exec(sql);
    QSqlQuery q;
    QString ql=QString("insert into allperson values('%1','%2','%3','%4');").arg(name).arg(birthdate).arg(email).arg(phone);
    q.exec(ql);
    this->hide();
}

