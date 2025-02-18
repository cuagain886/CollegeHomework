#ifndef UPDATE_H
#define UPDATE_H

#include <QWidget>
#include<QString>
#include<mysql.h>
#include<QByteArray>
#include<QMessageBox>
#include<QSqlQuery>
#include<QSqlQueryModel>
namespace Ui {
class update;
}

class update : public QWidget
{
    Q_OBJECT

public:
    explicit update(QWidget *parent = nullptr);
    ~update();

private slots:


    void on_updateclassmatepushButton_clicked();

    void on_workmatepushButton_clicked();

    void on_friendpushButton_clicked();

    void on_familypushButton_clicked();

private:
    Ui::update *ui;
    QSqlQueryModel *model;
};

#endif // UPDATE_H
