#ifndef FAMILY_H
#define FAMILY_H

#include <QWidget>
#include<QString>
#include<mysql.h>
#include<QByteArray>
#include<QMessageBox>
#include<QSqlQuery>
namespace Ui {
class family;
}

class family : public QWidget
{
    Q_OBJECT

public:
    explicit family(QWidget *parent = nullptr);
    ~family();

private slots:
    void on_surepushButton_clicked();

private:
    Ui::family *ui;
};

#endif // FAMILY_H
