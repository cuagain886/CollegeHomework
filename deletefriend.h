#ifndef DELETEFRIEND_H
#define DELETEFRIEND_H

#include <QWidget>
#include<widget.h>
#include<Qstring>
#include<selecttyle.h>
#include<QSqlDatabase>
#include<QSqlTableModel>
#include<QSqlQueryModel>

namespace Ui {
class deletefriend;
}

class deletefriend : public QWidget
{
    Q_OBJECT

public:
    explicit deletefriend(QWidget *parent = nullptr);
    ~deletefriend();

private slots:
    void on_surepushButton_clicked();

private:
    Ui::deletefriend *ui;
    QSqlQueryModel *mo;
};

#endif // DELETEFRIEND_H
