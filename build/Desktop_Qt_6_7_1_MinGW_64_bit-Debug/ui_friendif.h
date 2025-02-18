/********************************************************************************
** Form generated from reading UI file 'friendif.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDIF_H
#define UI_FRIENDIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_friendif
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *frnlineEdit;
    QLabel *label_2;
    QLineEdit *frblineEdit;
    QLabel *label_3;
    QLineEdit *frelineEdit;
    QLabel *label_4;
    QLineEdit *frplineEdit;
    QLabel *label_6;
    QLineEdit *frmlineEdit;
    QLabel *label_5;
    QPushButton *surepushButton;

    void setupUi(QWidget *friendif)
    {
        if (friendif->objectName().isEmpty())
            friendif->setObjectName("friendif");
        friendif->resize(400, 250);
        friendif->setMinimumSize(QSize(400, 250));
        friendif->setMaximumSize(QSize(400, 250));
        friendif->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#friendif{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        widget = new QWidget(friendif);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 30, 351, 168));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        frnlineEdit = new QLineEdit(widget);
        frnlineEdit->setObjectName("frnlineEdit");
        frnlineEdit->setMinimumSize(QSize(250, 25));
        frnlineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(0, QFormLayout::FieldRole, frnlineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        frblineEdit = new QLineEdit(widget);
        frblineEdit->setObjectName("frblineEdit");
        frblineEdit->setMinimumSize(QSize(250, 25));
        frblineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(1, QFormLayout::FieldRole, frblineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        frelineEdit = new QLineEdit(widget);
        frelineEdit->setObjectName("frelineEdit");
        frelineEdit->setMinimumSize(QSize(250, 25));
        frelineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(2, QFormLayout::FieldRole, frelineEdit);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        frplineEdit = new QLineEdit(widget);
        frplineEdit->setObjectName("frplineEdit");
        frplineEdit->setMinimumSize(QSize(250, 25));
        frplineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(3, QFormLayout::FieldRole, frplineEdit);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        frmlineEdit = new QLineEdit(widget);
        frmlineEdit->setObjectName("frmlineEdit");
        frmlineEdit->setMinimumSize(QSize(250, 25));
        frmlineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(4, QFormLayout::FieldRole, frmlineEdit);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        surepushButton = new QPushButton(friendif);
        surepushButton->setObjectName("surepushButton");
        surepushButton->setGeometry(QRect(160, 200, 80, 30));
        surepushButton->setMinimumSize(QSize(80, 30));
        surepushButton->setMaximumSize(QSize(80, 30));
        QFont font1;
        font1.setPointSize(12);
        surepushButton->setFont(font1);

        retranslateUi(friendif);

        QMetaObject::connectSlotsByName(friendif);
    } // setupUi

    void retranslateUi(QWidget *friendif)
    {
        friendif->setWindowTitle(QCoreApplication::translate("friendif", "\346\234\213\345\217\213", nullptr));
        label->setText(QCoreApplication::translate("friendif", "\345\247\223\345\220\215\357\274\232", nullptr));
        frnlineEdit->setPlaceholderText(QCoreApplication::translate("friendif", "\350\257\267\350\276\223\345\205\245\346\234\213\345\217\213\347\232\204\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("friendif", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        frblineEdit->setPlaceholderText(QCoreApplication::translate("friendif", "\350\257\267\346\214\211xxxx-xx-xx\346\240\274\345\274\217\350\276\223\345\205\245", nullptr));
        label_3->setText(QCoreApplication::translate("friendif", "\351\202\256\344\273\266\357\274\232", nullptr));
        frelineEdit->setPlaceholderText(QCoreApplication::translate("friendif", "\350\257\267\350\276\223\345\205\245\346\234\213\345\217\213\347\232\204\351\202\256\344\273\266\345\234\260\345\235\200", nullptr));
        label_4->setText(QCoreApplication::translate("friendif", "\347\224\265\350\257\235\357\274\232", nullptr));
        frplineEdit->setPlaceholderText(QCoreApplication::translate("friendif", "\350\257\267\350\276\223\345\205\245\346\234\213\345\217\213\347\232\204\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label_6->setText(QCoreApplication::translate("friendif", "\350\256\244\350\257\206\345\234\260\347\202\271\357\274\232", nullptr));
        frmlineEdit->setPlaceholderText(QCoreApplication::translate("friendif", "\350\257\267\350\276\223\345\205\245\344\270\216\346\234\213\345\217\213\347\233\270\350\257\206\347\232\204\345\234\260\347\202\271", nullptr));
        label_5->setText(QString());
        surepushButton->setText(QCoreApplication::translate("friendif", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class friendif: public Ui_friendif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDIF_H
