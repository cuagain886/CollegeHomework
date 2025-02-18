/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginpushButton;
    QPushButton *outpushButton;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(500, 300);
        Widget->setMinimumSize(QSize(500, 300));
        Widget->setMaximumSize(QSize(500, 300));
        Widget->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QWidget#Widget{background-color: #34495e;}\n"
"QLabel{color:white;}\n"
"QMessageBox{background-color:#34495e;}"));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 170, 351, 91));
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(1000, 1000));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        loginpushButton = new QPushButton(widget);
        loginpushButton->setObjectName("loginpushButton");
        loginpushButton->setMaximumSize(QSize(120, 30));
        QFont font;
        font.setPointSize(14);
        loginpushButton->setFont(font);

        horizontalLayout->addWidget(loginpushButton);

        outpushButton = new QPushButton(widget);
        outpushButton->setObjectName("outpushButton");
        outpushButton->setMaximumSize(QSize(120, 30));
        outpushButton->setFont(font);

        horizontalLayout->addWidget(outpushButton);

        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 60, 281, 91));
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(true);
        label->setFont(font1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\344\270\252\344\272\272\351\200\232\344\277\241\345\275\225\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        loginpushButton->setText(QCoreApplication::translate("Widget", "\350\277\233\345\205\245", nullptr));
        outpushButton->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\344\270\252\344\272\272\351\200\232\344\277\241\345\275\225\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
