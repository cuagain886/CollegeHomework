#include "friendif.h"
#include "ui_friendif.h"

friendif::friendif(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::friendif)
{
    ui->setupUi(this);
}

friendif::~friendif()
{
    delete ui;
}

void friendif::on_surepushButton_clicked()
{
    QString name=ui->frnlineEdit->text();
    QString birthdate=ui->frblineEdit->text();
    QString email=ui->frelineEdit->text();
    QString meetaddress=ui->frmlineEdit->text();
    QString phone=ui->frplineEdit->text();
    QString sql=QString("insert into friend values('%1','%2','%3','%4','%5');").arg(name).arg(birthdate).arg(email).arg(phone).arg(meetaddress);
    QSqlQuery query;
    query.exec(sql);
    QSqlQuery q;
    QString ql=QString("insert into allperson values('%1','%2','%3','%4');").arg(name).arg(birthdate).arg(email).arg(phone);
    q.exec(ql);
    this->hide();
}

