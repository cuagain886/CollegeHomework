#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QMessageBox>
#include<mysql.h>
#include<QSqlDatabase>
#include<QKeyEvent>
#include<QCoreApplication>
#include<QFile>
#include<QString>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_loginpushButton_clicked();

    void on_outpushButton_clicked();
private:
    Ui::Widget *ui;
    QSqlDatabase db;

};
#endif // WIDGET_H
