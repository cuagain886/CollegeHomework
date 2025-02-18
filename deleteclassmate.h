#ifndef DELETECLASSMATE_H
#define DELETECLASSMATE_H

#include <QWidget>
#include<widget.h>
#include<Qstring>
#include<selecttyle.h>
#include<QSqlDatabase>
#include<QSqlTableModel>
#include<QSqlQueryModel>

namespace Ui {
class deleteclassmate;
}

class deleteclassmate : public QWidget
{
    Q_OBJECT

public:
    explicit deleteclassmate(QWidget *parent = nullptr);
    ~deleteclassmate();

private slots:
    void on_surepushButton_clicked();

private:
    Ui::deleteclassmate *ui;
    QSqlQueryModel *mo;
};

#endif // DELETECLASSMATE_H
