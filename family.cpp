#include "family.h"
#include "ui_family.h"

family::family(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::family)
{
    ui->setupUi(this);
}

family::~family()
{
    delete ui;
}

void family::on_surepushButton_clicked()
{
    QString name=ui->fanlineEdit->text();
    QString birthdate=ui->fablineEdit->text();
    QString email=ui->faelineEdit->text();
    QString callname=ui->faclineEdit->text();
    QString phone=ui->faplineEdit->text();
    QString sql=QString("insert into family values('%1','%2','%3','%4','%5');").arg(name).arg(birthdate).arg(email).arg(phone).arg(callname);
    QSqlQuery query;
    query.exec(sql);
    QSqlQuery q;
    QString ql=QString("insert into allperson values('%1','%2','%3','%4');").arg(name).arg(birthdate).arg(email).arg(phone);
    q.exec(ql);
    this->hide();
}

