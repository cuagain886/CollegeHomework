/********************************************************************************
** Form generated from reading UI file 'creatwishfile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATWISHFILE_H
#define UI_CREATWISHFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_creatwishfile
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *tradelineEdit;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *creatwishfile)
    {
        if (creatwishfile->objectName().isEmpty())
            creatwishfile->setObjectName("creatwishfile");
        creatwishfile->resize(450, 250);
        creatwishfile->setMinimumSize(QSize(450, 250));
        creatwishfile->setMaximumSize(QSize(450, 250));
        creatwishfile->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#creatwishfile{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        widget = new QWidget(creatwishfile);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 50, 401, 112));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label = new QLabel(widget);
        label->setObjectName("label");

        formLayout->setWidget(3, QFormLayout::FieldRole, label);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        tradelineEdit = new QLineEdit(widget);
        tradelineEdit->setObjectName("tradelineEdit");
        tradelineEdit->setMinimumSize(QSize(250, 25));
        tradelineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(2, QFormLayout::FieldRole, tradelineEdit);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(250, 25));
        lineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit);

        pushButton = new QPushButton(creatwishfile);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 180, 80, 30));
        pushButton->setMinimumSize(QSize(80, 30));
        pushButton->setMaximumSize(QSize(80, 30));
        pushButton->setFont(font1);

        retranslateUi(creatwishfile);

        QMetaObject::connectSlotsByName(creatwishfile);
    } // setupUi

    void retranslateUi(QWidget *creatwishfile)
    {
        creatwishfile->setWindowTitle(QCoreApplication::translate("creatwishfile", "\347\245\235\347\246\217", nullptr));
        label_2->setText(QCoreApplication::translate("creatwishfile", "\350\257\267\350\276\223\345\205\245\346\226\207\346\234\254\350\267\257\345\276\204\357\274\232", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("creatwishfile", "\345\247\223\345\220\215\357\274\232", nullptr));
        tradelineEdit->setText(QCoreApplication::translate("creatwishfile", "D://Qtproject//wish01.txt", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("creatwishfile", "\350\257\267\350\276\223\345\205\245\350\246\201\347\245\235\347\246\217\347\232\204\344\272\272\347\232\204\345\247\223\345\220\215", nullptr));
        pushButton->setText(QCoreApplication::translate("creatwishfile", "\347\224\237\346\210\220\347\245\235\347\246\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creatwishfile: public Ui_creatwishfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATWISHFILE_H
