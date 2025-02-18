#ifndef FRIENDIF_H
#define FRIENDIF_H

#include <QWidget>
#include<QString>
#include<mysql.h>
#include<QByteArray>
#include<QMessageBox>
#include<QSqlQuery>
namespace Ui {
class friendif;
}

class friendif : public QWidget
{
    Q_OBJECT

public:
    explicit friendif(QWidget *parent = nullptr);
    ~friendif();

private slots:
    void on_surepushButton_clicked();

private:
    Ui::friendif *ui;
};

#endif // FRIENDIF_H
