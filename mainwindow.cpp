#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_insertpushButton_clicked()
{
    selecttyle *p=new selecttyle;
    p->show();

}


void MainWindow::on_showclassmatepushButton_clicked()
{
    model =new QSqlQueryModel;
    model->setQuery("select * from classmate order by birthdate ASC");
    ui->tableView->setModel(model);
}


void MainWindow::on_showworkmatepushButton_clicked()
{
    model =new QSqlQueryModel;
    model->setQuery("select * from workmate order by birthdate ASC");
    ui->tableView->setModel(model);
}


void MainWindow::on_showfriendpushButton_clicked()
{
    model =new QSqlQueryModel;
    model->setQuery("select * from friend order by birthdate ASC");
    ui->tableView->setModel(model);
}


void MainWindow::on_showfamilypushButton_clicked()
{
    model =new QSqlQueryModel;
    model->setQuery("select * from family order by birthdate ASC");
    ui->tableView->setModel(model);
}


void MainWindow::on_showallpushButton_clicked()
{
    model =new QSqlQueryModel;
    model->setQuery("select * from allperson order by birthdate ASC");
    ui->tableView->setModel(model);

}


void MainWindow::on_findpushButton_clicked()
{
    date=QDate::currentDate();
    QString sdate=date.toString("yyyy-MM-dd");
    model=new QSqlQueryModel;
    QString finddate=QString("alter table allperson add column weekday varchar(20);");
    model->setQuery(finddate);
    QString str=QString("update allperson set weekday=DAYNAME(CONCAT(YEAR(CURDATE()), '-', MONTH(birthdate), '-', DAY(birthdate))) ;");
    model->setQuery(str);
    QString sel=QString("select * from allperson where day(birthdate)-day(now())<=5 and day(birthdate)-day(now())>=0 and month(birthdate)=month(now()) order by birthdate ASC;");
    model->setQuery(sel);
    ui->tableView->setModel(model);
    model =new QSqlQueryModel;
    QString del=QString("alter table allperson drop column weekday");
    model->setQuery(del);
}


void MainWindow::on_pushButton_2_clicked()
{
    QString n=ui->selectlineEdit->text();
    model =new QSqlQueryModel;
    QString select=QString("select * from allperson where name='%1';").arg(n);
    model->setQuery(select);
    ui->tableView->setModel(model);
}


void MainWindow::on_updatepushButton_clicked()
{
    u=new class update;
    u->show();
}


void MainWindow::on_deletepushButton_clicked()
{
    d=new deleteselect;
    d->show();
}


void MainWindow::on_countpushButton_clicked()
{
    QString count=ui->countlineEdit->text();
    model=new QSqlQueryModel;
    QString countnum=QString("select count(birthdate) from allperson where month(birthdate)=*;");
    countnum.replace("*",count);
    model->setQuery(countnum);
    ui->tableView->setModel(model);
}



void MainWindow::on_wishpushButton_clicked()
{
    cr=new creatwishfile;
    cr->show();
}
void MainWindow::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_F6){
        QFile f;
        auto str=QCoreApplication::applicationDirPath();
        f.setFileName(str+"//"+"stuqss.css");
        f.open(QIODevice::ReadOnly);
        QString strr=f.readAll();
        this->setStyleSheet(strr);

    }

}



