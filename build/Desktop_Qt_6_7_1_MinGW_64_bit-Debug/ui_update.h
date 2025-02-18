/********************************************************************************
** Form generated from reading UI file 'update.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_H
#define UI_UPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_update
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLineEdit *updatenamelineEdit;
    QLabel *label_2;
    QLineEdit *updateemaillineEdit;
    QLabel *label_3;
    QLineEdit *updatephonelineEdit;
    QLabel *label_4;
    QLineEdit *updateiflineEdit;
    QLabel *label_6;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *updateclassmatepushButton;
    QPushButton *workmatepushButton;
    QPushButton *friendpushButton;
    QPushButton *familypushButton;

    void setupUi(QWidget *update)
    {
        if (update->objectName().isEmpty())
            update->setObjectName("update");
        update->resize(500, 400);
        update->setMinimumSize(QSize(500, 400));
        update->setMaximumSize(QSize(500, 400));
        update->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#update{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        widget = new QWidget(update);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 60, 281, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        QFont font;
        font.setPointSize(11);
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        updatenamelineEdit = new QLineEdit(widget);
        updatenamelineEdit->setObjectName("updatenamelineEdit");
        updatenamelineEdit->setMinimumSize(QSize(250, 25));
        updatenamelineEdit->setMaximumSize(QSize(250, 25));

        verticalLayout->addWidget(updatenamelineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        updateemaillineEdit = new QLineEdit(widget);
        updateemaillineEdit->setObjectName("updateemaillineEdit");
        updateemaillineEdit->setMinimumSize(QSize(250, 25));
        updateemaillineEdit->setMaximumSize(QSize(250, 25));

        verticalLayout->addWidget(updateemaillineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        updatephonelineEdit = new QLineEdit(widget);
        updatephonelineEdit->setObjectName("updatephonelineEdit");
        updatephonelineEdit->setMinimumSize(QSize(250, 25));
        updatephonelineEdit->setMaximumSize(QSize(250, 25));

        verticalLayout->addWidget(updatephonelineEdit);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        updateiflineEdit = new QLineEdit(widget);
        updateiflineEdit->setObjectName("updateiflineEdit");
        updateiflineEdit->setMinimumSize(QSize(250, 25));
        updateiflineEdit->setMaximumSize(QSize(250, 25));
        QFont font1;
        font1.setPointSize(9);
        updateiflineEdit->setFont(font1);

        verticalLayout->addWidget(updateiflineEdit);

        label_6 = new QLabel(update);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 20, 291, 41));
        widget_2 = new QWidget(update);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(80, 330, 344, 51));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        updateclassmatepushButton = new QPushButton(widget_2);
        updateclassmatepushButton->setObjectName("updateclassmatepushButton");
        updateclassmatepushButton->setMinimumSize(QSize(80, 30));
        updateclassmatepushButton->setMaximumSize(QSize(80, 30));
        QFont font2;
        font2.setPointSize(12);
        updateclassmatepushButton->setFont(font2);

        horizontalLayout->addWidget(updateclassmatepushButton);

        workmatepushButton = new QPushButton(widget_2);
        workmatepushButton->setObjectName("workmatepushButton");
        workmatepushButton->setMinimumSize(QSize(80, 30));
        workmatepushButton->setMaximumSize(QSize(80, 30));
        workmatepushButton->setFont(font2);

        horizontalLayout->addWidget(workmatepushButton);

        friendpushButton = new QPushButton(widget_2);
        friendpushButton->setObjectName("friendpushButton");
        friendpushButton->setMinimumSize(QSize(80, 30));
        friendpushButton->setMaximumSize(QSize(80, 30));
        friendpushButton->setFont(font2);

        horizontalLayout->addWidget(friendpushButton);

        familypushButton = new QPushButton(widget_2);
        familypushButton->setObjectName("familypushButton");
        familypushButton->setMinimumSize(QSize(80, 30));
        familypushButton->setMaximumSize(QSize(80, 30));
        familypushButton->setFont(font2);

        horizontalLayout->addWidget(familypushButton);


        retranslateUi(update);

        QMetaObject::connectSlotsByName(update);
    } // setupUi

    void retranslateUi(QWidget *update)
    {
        update->setWindowTitle(QCoreApplication::translate("update", "\344\277\256\346\224\271", nullptr));
        label_5->setText(QCoreApplication::translate("update", "\345\247\223\345\220\215\357\274\232", nullptr));
        updatenamelineEdit->setPlaceholderText(QCoreApplication::translate("update", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204\344\272\272\347\232\204\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("update", "\351\202\256\344\273\266\357\274\232", nullptr));
        updateemaillineEdit->setPlaceholderText(QCoreApplication::translate("update", "\350\257\267\350\276\223\345\205\245\344\277\256\346\224\271\345\220\216\347\232\204\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("update", "\347\224\265\350\257\235\357\274\232", nullptr));
        updatephonelineEdit->setPlaceholderText(QCoreApplication::translate("update", "\350\257\267\350\276\223\345\205\245\344\277\256\346\224\271\345\220\216\347\232\204\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("update", "\345\255\246\346\240\241/\345\215\225\344\275\215/\350\256\244\350\257\206\345\234\260\347\202\271/\347\247\260\345\221\274", nullptr));
        updateiflineEdit->setPlaceholderText(QCoreApplication::translate("update", "\350\257\267\346\214\211\347\205\247\347\233\270\345\272\224\347\261\273\350\276\223\345\205\245\344\277\256\346\224\271\345\220\216\347\232\204\344\277\241\346\201\257", nullptr));
        label_6->setText(QCoreApplication::translate("update", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204\344\277\241\346\201\257</span></p></body></html>", nullptr));
        updateclassmatepushButton->setText(QCoreApplication::translate("update", "\345\220\214\345\255\246", nullptr));
        workmatepushButton->setText(QCoreApplication::translate("update", "\345\220\214\344\272\213", nullptr));
        friendpushButton->setText(QCoreApplication::translate("update", "\346\234\213\345\217\213", nullptr));
        familypushButton->setText(QCoreApplication::translate("update", "\344\272\262\346\210\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class update: public Ui_update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_H
