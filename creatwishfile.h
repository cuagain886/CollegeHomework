#ifndef CREATWISHFILE_H
#define CREATWISHFILE_H

#include <QWidget>
#include<QSqlDatabase>
#include<QFile>
#include<QString>
#include<QIODevice>
#include<QByteArray>

namespace Ui {
class creatwishfile;
}

class creatwishfile : public QWidget
{
    Q_OBJECT

public:
    explicit creatwishfile(QWidget *parent = nullptr);
    ~creatwishfile();

private:
    Ui::creatwishfile *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // CREATWISHFILE_H
