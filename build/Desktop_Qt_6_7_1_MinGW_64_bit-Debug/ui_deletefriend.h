/********************************************************************************
** Form generated from reading UI file 'deletefriend.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEFRIEND_H
#define UI_DELETEFRIEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletefriend
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *friendnamelineEdit;
    QPushButton *surepushButton;

    void setupUi(QWidget *deletefriend)
    {
        if (deletefriend->objectName().isEmpty())
            deletefriend->setObjectName("deletefriend");
        deletefriend->resize(400, 250);
        deletefriend->setMinimumSize(QSize(400, 250));
        deletefriend->setMaximumSize(QSize(400, 250));
        deletefriend->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#deletefriend{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        widget = new QWidget(deletefriend);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 70, 331, 34));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        friendnamelineEdit = new QLineEdit(widget);
        friendnamelineEdit->setObjectName("friendnamelineEdit");
        friendnamelineEdit->setMinimumSize(QSize(250, 25));
        friendnamelineEdit->setMaximumSize(QSize(250, 25));

        horizontalLayout->addWidget(friendnamelineEdit);

        surepushButton = new QPushButton(deletefriend);
        surepushButton->setObjectName("surepushButton");
        surepushButton->setGeometry(QRect(150, 170, 80, 30));
        surepushButton->setMinimumSize(QSize(80, 30));
        surepushButton->setMaximumSize(QSize(80, 30));
        QFont font1;
        font1.setPointSize(12);
        surepushButton->setFont(font1);

        retranslateUi(deletefriend);

        QMetaObject::connectSlotsByName(deletefriend);
    } // setupUi

    void retranslateUi(QWidget *deletefriend)
    {
        deletefriend->setWindowTitle(QCoreApplication::translate("deletefriend", "\345\210\240\351\231\244\346\234\213\345\217\213\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("deletefriend", "\345\247\223\345\220\215\357\274\232", nullptr));
        friendnamelineEdit->setPlaceholderText(QCoreApplication::translate("deletefriend", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\346\234\213\345\217\213\347\232\204\345\247\223\345\220\215", nullptr));
        surepushButton->setText(QCoreApplication::translate("deletefriend", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletefriend: public Ui_deletefriend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFRIEND_H
