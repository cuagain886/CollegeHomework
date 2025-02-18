#ifndef WORKMATEIF_H
#define WORKMATEIF_H

#include <QWidget>
#include<QString>
#include<mysql.h>
#include<QByteArray>
#include<QMessageBox>
#include<QSqlQuery>

namespace Ui {
class workmateif;
}

class workmateif : public QWidget
{
    Q_OBJECT

public:
    explicit workmateif(QWidget *parent = nullptr);
    ~workmateif();

private slots:
    void on_surepushButton_clicked();

private:
    Ui::workmateif *ui;
};

#endif // WORKMATEIF_H
