/********************************************************************************
** Form generated from reading UI file 'family.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAMILY_H
#define UI_FAMILY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_family
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *fanlineEdit;
    QLabel *label_2;
    QLineEdit *fablineEdit;
    QLabel *label_3;
    QLineEdit *faelineEdit;
    QLabel *label_4;
    QLineEdit *faplineEdit;
    QLabel *label_5;
    QLineEdit *faclineEdit;
    QPushButton *surepushButton;

    void setupUi(QWidget *family)
    {
        if (family->objectName().isEmpty())
            family->setObjectName("family");
        family->resize(400, 250);
        family->setMinimumSize(QSize(400, 250));
        family->setMaximumSize(QSize(400, 250));
        family->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#family{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        widget = new QWidget(family);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 30, 351, 153));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        fanlineEdit = new QLineEdit(widget);
        fanlineEdit->setObjectName("fanlineEdit");
        fanlineEdit->setMinimumSize(QSize(250, 25));
        fanlineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(0, QFormLayout::FieldRole, fanlineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        fablineEdit = new QLineEdit(widget);
        fablineEdit->setObjectName("fablineEdit");
        fablineEdit->setMinimumSize(QSize(250, 25));
        fablineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(1, QFormLayout::FieldRole, fablineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        faelineEdit = new QLineEdit(widget);
        faelineEdit->setObjectName("faelineEdit");
        faelineEdit->setMinimumSize(QSize(250, 25));
        faelineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(2, QFormLayout::FieldRole, faelineEdit);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        faplineEdit = new QLineEdit(widget);
        faplineEdit->setObjectName("faplineEdit");
        faplineEdit->setMinimumSize(QSize(250, 25));
        faplineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(3, QFormLayout::FieldRole, faplineEdit);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        faclineEdit = new QLineEdit(widget);
        faclineEdit->setObjectName("faclineEdit");
        faclineEdit->setMinimumSize(QSize(250, 25));
        faclineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(4, QFormLayout::FieldRole, faclineEdit);

        surepushButton = new QPushButton(family);
        surepushButton->setObjectName("surepushButton");
        surepushButton->setGeometry(QRect(160, 200, 80, 30));
        surepushButton->setMinimumSize(QSize(80, 30));
        surepushButton->setMaximumSize(QSize(80, 30));
        QFont font1;
        font1.setPointSize(12);
        surepushButton->setFont(font1);

        retranslateUi(family);

        QMetaObject::connectSlotsByName(family);
    } // setupUi

    void retranslateUi(QWidget *family)
    {
        family->setWindowTitle(QCoreApplication::translate("family", "\344\272\262\346\210\232", nullptr));
        label->setText(QCoreApplication::translate("family", "\345\247\223\345\220\215\357\274\232", nullptr));
        fanlineEdit->setPlaceholderText(QCoreApplication::translate("family", "\350\257\267\350\276\223\345\205\245\344\272\262\346\210\232\347\232\204\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("family", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        fablineEdit->setPlaceholderText(QCoreApplication::translate("family", "\350\257\267\346\214\211xxxx-xx-xx\346\240\274\345\274\217\350\276\223\345\205\245", nullptr));
        label_3->setText(QCoreApplication::translate("family", "\351\202\256\344\273\266\357\274\232", nullptr));
        faelineEdit->setPlaceholderText(QCoreApplication::translate("family", "\350\257\267\350\276\223\345\205\245\344\272\262\346\210\232\347\232\204\351\202\256\344\273\266\345\234\260\345\235\200", nullptr));
        label_4->setText(QCoreApplication::translate("family", "\347\224\265\350\257\235\357\274\232", nullptr));
        faplineEdit->setPlaceholderText(QCoreApplication::translate("family", "\350\257\267\350\276\223\345\205\245\344\272\262\346\210\232\347\232\204\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("family", "\347\247\260\345\221\274\357\274\232", nullptr));
        faclineEdit->setPlaceholderText(QCoreApplication::translate("family", "\350\257\267\350\276\223\345\205\245\345\257\271\350\257\245\344\272\262\346\210\232\347\232\204\347\247\260\345\221\274", nullptr));
        surepushButton->setText(QCoreApplication::translate("family", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class family: public Ui_family {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAMILY_H
