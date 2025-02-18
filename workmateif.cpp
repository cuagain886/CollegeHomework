#include "workmateif.h"
#include "ui_workmateif.h"

workmateif::workmateif(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::workmateif)
{
    ui->setupUi(this);
}

workmateif::~workmateif()
{
    delete ui;
}

void workmateif::on_surepushButton_clicked()
{
    QString name=ui->wmnlineEdit->text();
    QString birthdate=ui->wmblineEdit->text();
    QString email=ui->wmelineEdit->text();
    QString company=ui->wmclineEdit->text();
    QString phone=ui->wmplineEdit->text();
    QString sql=QString("insert into workmate values('%1','%2','%3','%4','%5');").arg(name).arg(birthdate).arg(email).arg(phone).arg(company);
    QSqlQuery query;
    query.exec(sql);
    QSqlQuery q;
    QString ql=QString("insert into allperson values('%1','%2','%3','%4');").arg(name).arg(birthdate).arg(email).arg(phone);
    q.exec(ql);
    this->hide();
}

