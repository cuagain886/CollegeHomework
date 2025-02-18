#include "creatwishfile.h"
#include "ui_creatwishfile.h"

creatwishfile::creatwishfile(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::creatwishfile)
{
    ui->setupUi(this);
}

creatwishfile::~creatwishfile()
{
    delete ui;
}

void creatwishfile::on_pushButton_clicked()
{
    QFile file(ui->tradelineEdit->text());
    file.open(QIODevice::ReadWrite|QIODevice::Text);
    QByteArray name=ui->lineEdit->text().toUtf8();
    QString str=QString("%1:\n   祝生日快乐，健康幸福。\n                             饶小峰").arg(name);
    QByteArray content=str.toUtf8();
    file.write(content);
    file.close();
    this->hide();
}

