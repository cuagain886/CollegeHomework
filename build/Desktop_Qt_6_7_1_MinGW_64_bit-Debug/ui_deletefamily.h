/********************************************************************************
** Form generated from reading UI file 'deletefamily.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEFAMILY_H
#define UI_DELETEFAMILY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletefamily
{
public:
    QPushButton *surepushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *familynamelineEdit;

    void setupUi(QWidget *deletefamily)
    {
        if (deletefamily->objectName().isEmpty())
            deletefamily->setObjectName("deletefamily");
        deletefamily->resize(400, 250);
        deletefamily->setMinimumSize(QSize(400, 250));
        deletefamily->setMaximumSize(QSize(400, 250));
        deletefamily->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#deletefamily{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        surepushButton = new QPushButton(deletefamily);
        surepushButton->setObjectName("surepushButton");
        surepushButton->setGeometry(QRect(160, 180, 80, 30));
        surepushButton->setMinimumSize(QSize(80, 30));
        surepushButton->setMaximumSize(QSize(80, 30));
        QFont font;
        font.setPointSize(11);
        surepushButton->setFont(font);
        widget = new QWidget(deletefamily);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 70, 331, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        familynamelineEdit = new QLineEdit(widget);
        familynamelineEdit->setObjectName("familynamelineEdit");
        familynamelineEdit->setMinimumSize(QSize(250, 25));
        familynamelineEdit->setMaximumSize(QSize(250, 25));

        horizontalLayout->addWidget(familynamelineEdit);


        retranslateUi(deletefamily);

        QMetaObject::connectSlotsByName(deletefamily);
    } // setupUi

    void retranslateUi(QWidget *deletefamily)
    {
        deletefamily->setWindowTitle(QCoreApplication::translate("deletefamily", "\345\210\240\351\231\244\344\272\262\346\210\232\344\277\241\346\201\257", nullptr));
        surepushButton->setText(QCoreApplication::translate("deletefamily", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("deletefamily", "\345\247\223\345\220\215\357\274\232", nullptr));
        familynamelineEdit->setPlaceholderText(QCoreApplication::translate("deletefamily", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\344\272\262\346\210\232\347\232\204\345\247\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletefamily: public Ui_deletefamily {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFAMILY_H
