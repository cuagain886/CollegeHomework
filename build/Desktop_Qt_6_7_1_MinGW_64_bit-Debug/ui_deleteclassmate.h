/********************************************************************************
** Form generated from reading UI file 'deleteclassmate.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECLASSMATE_H
#define UI_DELETECLASSMATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteclassmate
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *classmatenamelineEdit;
    QPushButton *surepushButton;

    void setupUi(QWidget *deleteclassmate)
    {
        if (deleteclassmate->objectName().isEmpty())
            deleteclassmate->setObjectName("deleteclassmate");
        deleteclassmate->resize(400, 250);
        deleteclassmate->setMinimumSize(QSize(400, 250));
        deleteclassmate->setMaximumSize(QSize(400, 250));
        deleteclassmate->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#deleteclassmate{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        widget = new QWidget(deleteclassmate);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 70, 301, 34));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        classmatenamelineEdit = new QLineEdit(widget);
        classmatenamelineEdit->setObjectName("classmatenamelineEdit");
        classmatenamelineEdit->setMinimumSize(QSize(250, 25));
        classmatenamelineEdit->setMaximumSize(QSize(250, 25));

        horizontalLayout->addWidget(classmatenamelineEdit);

        surepushButton = new QPushButton(deleteclassmate);
        surepushButton->setObjectName("surepushButton");
        surepushButton->setGeometry(QRect(150, 190, 80, 30));
        surepushButton->setMinimumSize(QSize(80, 30));
        surepushButton->setMaximumSize(QSize(80, 30));
        QFont font1;
        font1.setPointSize(12);
        surepushButton->setFont(font1);

        retranslateUi(deleteclassmate);

        QMetaObject::connectSlotsByName(deleteclassmate);
    } // setupUi

    void retranslateUi(QWidget *deleteclassmate)
    {
        deleteclassmate->setWindowTitle(QCoreApplication::translate("deleteclassmate", "\345\210\240\351\231\244\345\220\214\345\255\246\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("deleteclassmate", "\345\247\223\345\220\215\357\274\232", nullptr));
        classmatenamelineEdit->setPlaceholderText(QCoreApplication::translate("deleteclassmate", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\345\220\214\345\255\246\347\232\204\345\247\223\345\220\215", nullptr));
        surepushButton->setText(QCoreApplication::translate("deleteclassmate", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteclassmate: public Ui_deleteclassmate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECLASSMATE_H
