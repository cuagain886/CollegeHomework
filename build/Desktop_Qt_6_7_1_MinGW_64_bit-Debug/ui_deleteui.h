/********************************************************************************
** Form generated from reading UI file 'deleteui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEUI_H
#define UI_DELETEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteui
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *deletenamelineEdit;
    QPushButton *surepushButton;

    void setupUi(QWidget *deleteui)
    {
        if (deleteui->objectName().isEmpty())
            deleteui->setObjectName("deleteui");
        deleteui->resize(532, 283);
        widget = new QWidget(deleteui);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 70, 281, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        deletenamelineEdit = new QLineEdit(widget);
        deletenamelineEdit->setObjectName("deletenamelineEdit");

        horizontalLayout->addWidget(deletenamelineEdit);

        surepushButton = new QPushButton(deleteui);
        surepushButton->setObjectName("surepushButton");
        surepushButton->setGeometry(QRect(200, 170, 80, 18));

        retranslateUi(deleteui);

        QMetaObject::connectSlotsByName(deleteui);
    } // setupUi

    void retranslateUi(QWidget *deleteui)
    {
        deleteui->setWindowTitle(QCoreApplication::translate("deleteui", "Form", nullptr));
        label->setText(QCoreApplication::translate("deleteui", "\345\247\223\345\220\215\357\274\232", nullptr));
        surepushButton->setText(QCoreApplication::translate("deleteui", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteui: public Ui_deleteui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEUI_H
