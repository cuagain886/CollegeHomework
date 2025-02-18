#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<selecttyle.h>
#include<QSqlDatabase>
#include<QSqlQueryModel>
#include<deleteselect.h>
#include<update.h>
#include<QDate>
#include<QFile>
#include<creatwishfile.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    virtual void keyPressEvent(QKeyEvent *event);
    ~MainWindow();

private slots:
    void on_insertpushButton_clicked();

    void on_showclassmatepushButton_clicked();

    void on_showworkmatepushButton_clicked();

    void on_showfriendpushButton_clicked();

    void on_showfamilypushButton_clicked();

    void on_showallpushButton_clicked();

    void on_findpushButton_clicked();

    void on_pushButton_2_clicked();

    void on_updatepushButton_clicked();

    void on_deletepushButton_clicked();

    void on_countpushButton_clicked();

    void on_wishpushButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model;
    deleteselect *d;
    class update *u;
    QDate date;
    creatwishfile *cr;
};

#endif // MAINWINDOW_H
