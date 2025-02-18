#ifndef DELETEWORKMATE_H
#define DELETEWORKMATE_H

#include <QWidget>
#include<widget.h>
#include<Qstring>
#include<selecttyle.h>
#include<QSqlDatabase>
#include<QSqlTableModel>
#include<QSqlQueryModel>
namespace Ui {
class deleteworkmate;
}

class deleteworkmate : public QWidget
{
    Q_OBJECT

public:
    explicit deleteworkmate(QWidget *parent = nullptr);
    ~deleteworkmate();

private slots:
    void on_surepushButton_clicked();

private:
    Ui::deleteworkmate *ui;
    QSqlQueryModel *mo;
};

#endif // DELETEWORKMATE_H
