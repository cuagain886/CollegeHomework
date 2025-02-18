#ifndef DELETEFAMILY_H
#define DELETEFAMILY_H

#include <QWidget>
#include<widget.h>
#include<Qstring>
#include<selecttyle.h>
#include<QSqlDatabase>
#include<QSqlTableModel>
#include<QSqlQueryModel>
namespace Ui {
class deletefamily;
}

class deletefamily : public QWidget
{
    Q_OBJECT

public:
    explicit deletefamily(QWidget *parent = nullptr);
    ~deletefamily();

private slots:
    void on_surepushButton_clicked();

private:
    Ui::deletefamily *ui;
    QSqlQueryModel *mo;
};

#endif // DELETEFAMILY_H
