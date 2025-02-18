#ifndef SELECTTYLE_H
#define SELECTTYLE_H

#include <QWidget>
#include<classmateif.h>
#include<workmateif.h>
#include<friendif.h>
#include<family.h>

namespace Ui {
class selecttyle;
}

class selecttyle : public QWidget
{
    Q_OBJECT

public:
    explicit selecttyle(QWidget *parent = nullptr);
    ~selecttyle();

private slots:
    void on_classmatepushButton_clicked();

    void on_workmatepushButton_clicked();

    void on_friendpushButton_clicked();

    void on_familypushButton_clicked();

private:
    Ui::selecttyle *ui;
};

#endif // SELECTTYLE_H
