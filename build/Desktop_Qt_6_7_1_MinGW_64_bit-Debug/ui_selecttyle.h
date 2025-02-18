/********************************************************************************
** Form generated from reading UI file 'selecttyle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTTYLE_H
#define UI_SELECTTYLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selecttyle
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *classmatepushButton;
    QPushButton *workmatepushButton;
    QPushButton *friendpushButton;
    QPushButton *familypushButton;

    void setupUi(QWidget *selecttyle)
    {
        if (selecttyle->objectName().isEmpty())
            selecttyle->setObjectName("selecttyle");
        selecttyle->resize(500, 300);
        selecttyle->setMinimumSize(QSize(500, 300));
        selecttyle->setMaximumSize(QSize(500, 300));
        selecttyle->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#selecttyle{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        label = new QLabel(selecttyle);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 70, 321, 51));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        widget = new QWidget(selecttyle);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 170, 461, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        classmatepushButton = new QPushButton(widget);
        classmatepushButton->setObjectName("classmatepushButton");
        classmatepushButton->setMinimumSize(QSize(100, 40));
        classmatepushButton->setMaximumSize(QSize(100, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(20);
        classmatepushButton->setFont(font1);

        horizontalLayout->addWidget(classmatepushButton);

        workmatepushButton = new QPushButton(widget);
        workmatepushButton->setObjectName("workmatepushButton");
        workmatepushButton->setMinimumSize(QSize(100, 40));
        workmatepushButton->setMaximumSize(QSize(100, 40));
        workmatepushButton->setFont(font1);

        horizontalLayout->addWidget(workmatepushButton);

        friendpushButton = new QPushButton(widget);
        friendpushButton->setObjectName("friendpushButton");
        friendpushButton->setMinimumSize(QSize(100, 40));
        friendpushButton->setMaximumSize(QSize(100, 40));
        friendpushButton->setFont(font1);

        horizontalLayout->addWidget(friendpushButton);

        familypushButton = new QPushButton(widget);
        familypushButton->setObjectName("familypushButton");
        familypushButton->setMinimumSize(QSize(100, 40));
        familypushButton->setMaximumSize(QSize(100, 40));
        familypushButton->setFont(font1);

        horizontalLayout->addWidget(familypushButton);


        retranslateUi(selecttyle);

        QMetaObject::connectSlotsByName(selecttyle);
    } // setupUi

    void retranslateUi(QWidget *selecttyle)
    {
        selecttyle->setWindowTitle(QCoreApplication::translate("selecttyle", "\345\275\225\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("selecttyle", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:700;\">\350\257\267\351\200\211\346\213\251\345\275\225\345\205\245\347\232\204\344\272\272\347\232\204\350\272\253\344\273\275</span></p></body></html>", nullptr));
        classmatepushButton->setText(QCoreApplication::translate("selecttyle", "\345\220\214\345\255\246", nullptr));
        workmatepushButton->setText(QCoreApplication::translate("selecttyle", "\345\220\214\344\272\213", nullptr));
        friendpushButton->setText(QCoreApplication::translate("selecttyle", "\346\234\213\345\217\213", nullptr));
        familypushButton->setText(QCoreApplication::translate("selecttyle", "\344\272\262\346\210\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selecttyle: public Ui_selecttyle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTTYLE_H
