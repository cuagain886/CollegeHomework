#ifndef CLASSMATEIF_H
#define CLASSMATEIF_H

#include <QWidget>
#include<QSqlQuery>


namespace Ui {
class classmateif;
}

class classmateif : public QWidget
{
    Q_OBJECT

public:
    explicit classmateif(QWidget *parent = nullptr);
    ~classmateif();

private slots:
    void on_pushButton_clicked();

private:
    Ui::classmateif *ui;
};

#endif // CLASSMATEIF_H
