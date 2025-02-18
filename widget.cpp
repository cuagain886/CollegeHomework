#include "widget.h"
#include "ui_widget.h"
#include <mysql.h>
#include<main.cpp>
#include<QDebug>
#include<mainwindow.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("address_manage");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("123456");
    db.open();
}

Widget::~Widget()
{
    delete ui;

    db.close();
}

void Widget::on_loginpushButton_clicked()
{
    this->hide();
    MainWindow *c=new MainWindow;
    if(db.open()){
        QMessageBox::information(this,"连接提示","连接成功");
    }
    else{
        QMessageBox::information(this,"连接提示","连接失败");
    }
    c->show();
}

void Widget::on_outpushButton_clicked()
{
    exit(0);
}


