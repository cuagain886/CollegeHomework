/********************************************************************************
** Form generated from reading UI file 'deleteselect.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETESELECT_H
#define UI_DELETESELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteselect
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *classmatepushButton;
    QPushButton *workmatepushButton;
    QPushButton *friendpushButton;
    QPushButton *familypushButton;

    void setupUi(QWidget *deleteselect)
    {
        if (deleteselect->objectName().isEmpty())
            deleteselect->setObjectName("deleteselect");
        deleteselect->resize(400, 250);
        deleteselect->setMinimumSize(QSize(400, 250));
        deleteselect->setMaximumSize(QSize(400, 250));
        deleteselect->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#deleteselect{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        label = new QLabel(deleteselect);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 60, 341, 51));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        widget = new QWidget(deleteselect);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 160, 361, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        classmatepushButton = new QPushButton(widget);
        classmatepushButton->setObjectName("classmatepushButton");
        classmatepushButton->setMinimumSize(QSize(80, 30));
        classmatepushButton->setMaximumSize(QSize(80, 30));
        QFont font1;
        font1.setPointSize(12);
        classmatepushButton->setFont(font1);

        horizontalLayout->addWidget(classmatepushButton);

        workmatepushButton = new QPushButton(widget);
        workmatepushButton->setObjectName("workmatepushButton");
        workmatepushButton->setMinimumSize(QSize(80, 30));
        workmatepushButton->setMaximumSize(QSize(80, 30));
        workmatepushButton->setFont(font1);

        horizontalLayout->addWidget(workmatepushButton);

        friendpushButton = new QPushButton(widget);
        friendpushButton->setObjectName("friendpushButton");
        friendpushButton->setMinimumSize(QSize(80, 30));
        friendpushButton->setMaximumSize(QSize(80, 30));
        friendpushButton->setFont(font1);

        horizontalLayout->addWidget(friendpushButton);

        familypushButton = new QPushButton(widget);
        familypushButton->setObjectName("familypushButton");
        familypushButton->setMinimumSize(QSize(80, 30));
        familypushButton->setMaximumSize(QSize(80, 30));
        familypushButton->setFont(font1);

        horizontalLayout->addWidget(familypushButton);


        retranslateUi(deleteselect);

        QMetaObject::connectSlotsByName(deleteselect);
    } // setupUi

    void retranslateUi(QWidget *deleteselect)
    {
        deleteselect->setWindowTitle(QCoreApplication::translate("deleteselect", "\345\210\240\351\231\244", nullptr));
        label->setText(QCoreApplication::translate("deleteselect", "\350\257\267\351\200\211\346\213\251\350\246\201\345\210\240\351\231\244\351\202\243\344\270\200\347\261\273\344\270\255\347\232\204\345\257\271\350\261\241", nullptr));
        classmatepushButton->setText(QCoreApplication::translate("deleteselect", "\345\220\214\345\255\246", nullptr));
        workmatepushButton->setText(QCoreApplication::translate("deleteselect", "\345\220\214\344\272\213", nullptr));
        friendpushButton->setText(QCoreApplication::translate("deleteselect", "\346\234\213\345\217\213", nullptr));
        familypushButton->setText(QCoreApplication::translate("deleteselect", "\344\272\262\346\210\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteselect: public Ui_deleteselect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETESELECT_H
