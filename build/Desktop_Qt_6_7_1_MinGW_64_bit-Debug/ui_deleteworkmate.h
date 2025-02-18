/********************************************************************************
** Form generated from reading UI file 'deleteworkmate.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWORKMATE_H
#define UI_DELETEWORKMATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteworkmate
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *workmatenamelineEdit;
    QPushButton *surepushButton;

    void setupUi(QWidget *deleteworkmate)
    {
        if (deleteworkmate->objectName().isEmpty())
            deleteworkmate->setObjectName("deleteworkmate");
        deleteworkmate->resize(400, 250);
        deleteworkmate->setMinimumSize(QSize(400, 250));
        deleteworkmate->setMaximumSize(QSize(400, 250));
        deleteworkmate->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#deleteworkmate{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        widget = new QWidget(deleteworkmate);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 70, 311, 34));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        workmatenamelineEdit = new QLineEdit(widget);
        workmatenamelineEdit->setObjectName("workmatenamelineEdit");
        workmatenamelineEdit->setMinimumSize(QSize(250, 25));
        workmatenamelineEdit->setMaximumSize(QSize(250, 25));

        horizontalLayout->addWidget(workmatenamelineEdit);

        surepushButton = new QPushButton(deleteworkmate);
        surepushButton->setObjectName("surepushButton");
        surepushButton->setGeometry(QRect(160, 180, 80, 30));
        surepushButton->setMinimumSize(QSize(80, 30));
        surepushButton->setMaximumSize(QSize(80, 30));
        QFont font1;
        font1.setPointSize(12);
        surepushButton->setFont(font1);

        retranslateUi(deleteworkmate);

        QMetaObject::connectSlotsByName(deleteworkmate);
    } // setupUi

    void retranslateUi(QWidget *deleteworkmate)
    {
        deleteworkmate->setWindowTitle(QCoreApplication::translate("deleteworkmate", "\345\210\240\351\231\244\345\220\214\344\272\213\344\277\241\346\201\257", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("deleteworkmate", "\345\247\223\345\220\215\357\274\232", nullptr));
        workmatenamelineEdit->setPlaceholderText(QCoreApplication::translate("deleteworkmate", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\345\220\214\344\272\213\347\232\204\345\247\223\345\220\215", nullptr));
        surepushButton->setText(QCoreApplication::translate("deleteworkmate", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteworkmate: public Ui_deleteworkmate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWORKMATE_H
