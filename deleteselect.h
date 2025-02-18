#ifndef DELETESELECT_H
#define DELETESELECT_H

#include <QWidget>
#include<deleteclassmate.h>
#include<deleteworkmate.h>
#include<deletefriend.h>
#include<deletefamily.h>

namespace Ui {
class deleteselect;
}

class deleteselect : public QWidget
{
    Q_OBJECT

public:
    explicit deleteselect(QWidget *parent = nullptr);
    ~deleteselect();

private slots:
    void on_classmatepushButton_clicked();

    void on_workmatepushButton_clicked();

    void on_friendpushButton_clicked();

    void on_familypushButton_clicked();

private:
    Ui::deleteselect *ui;
    deleteclassmate *de;
    deleteworkmate *dw;
    deletefriend *df;
    deletefamily *dfa;
};

#endif // DELETESELECT_H
