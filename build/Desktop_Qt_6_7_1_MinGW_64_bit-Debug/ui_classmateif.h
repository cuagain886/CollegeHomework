/********************************************************************************
** Form generated from reading UI file 'classmateif.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSMATEIF_H
#define UI_CLASSMATEIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_classmateif
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *cmnamelineEdit;
    QLabel *label_2;
    QLineEdit *cmbirthlineEdit;
    QLabel *label_3;
    QLineEdit *cmemlineEdit;
    QLabel *label_4;
    QLineEdit *cmphlineEdit;
    QLabel *label_5;
    QLineEdit *cmsclineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *classmateif)
    {
        if (classmateif->objectName().isEmpty())
            classmateif->setObjectName("classmateif");
        classmateif->resize(400, 250);
        classmateif->setMinimumSize(QSize(400, 250));
        classmateif->setMaximumSize(QSize(400, 250));
        classmateif->setStyleSheet(QString::fromUtf8("QWidget#classmateif{background-color: #34495e;}"));
        widget = new QWidget(classmateif);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 30, 351, 153));
        widget->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#widget{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cmnamelineEdit = new QLineEdit(widget);
        cmnamelineEdit->setObjectName("cmnamelineEdit");
        cmnamelineEdit->setMinimumSize(QSize(250, 25));
        cmnamelineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(0, QFormLayout::FieldRole, cmnamelineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        cmbirthlineEdit = new QLineEdit(widget);
        cmbirthlineEdit->setObjectName("cmbirthlineEdit");
        cmbirthlineEdit->setMinimumSize(QSize(250, 25));
        cmbirthlineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(1, QFormLayout::FieldRole, cmbirthlineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        cmemlineEdit = new QLineEdit(widget);
        cmemlineEdit->setObjectName("cmemlineEdit");
        cmemlineEdit->setMinimumSize(QSize(250, 25));
        cmemlineEdit->setMaximumSize(QSize(250, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, cmemlineEdit);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        cmphlineEdit = new QLineEdit(widget);
        cmphlineEdit->setObjectName("cmphlineEdit");
        cmphlineEdit->setMinimumSize(QSize(250, 25));
        cmphlineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(3, QFormLayout::FieldRole, cmphlineEdit);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        cmsclineEdit = new QLineEdit(widget);
        cmsclineEdit->setObjectName("cmsclineEdit");
        cmsclineEdit->setMinimumSize(QSize(250, 25));
        cmsclineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(4, QFormLayout::FieldRole, cmsclineEdit);

        pushButton = new QPushButton(classmateif);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 200, 80, 30));
        pushButton->setMinimumSize(QSize(80, 30));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}"));

        retranslateUi(classmateif);

        QMetaObject::connectSlotsByName(classmateif);
    } // setupUi

    void retranslateUi(QWidget *classmateif)
    {
        classmateif->setWindowTitle(QCoreApplication::translate("classmateif", "\345\220\214\345\255\246", nullptr));
        label->setText(QCoreApplication::translate("classmateif", "\345\247\223\345\220\215\357\274\232", nullptr));
        cmnamelineEdit->setPlaceholderText(QCoreApplication::translate("classmateif", "\350\257\267\350\276\223\345\205\245\345\220\214\345\255\246\347\232\204\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("classmateif", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        cmbirthlineEdit->setPlaceholderText(QCoreApplication::translate("classmateif", "\350\257\267\346\214\211xxxx-xx-xx\346\240\274\345\274\217\350\276\223\345\205\245", nullptr));
        label_3->setText(QCoreApplication::translate("classmateif", "\351\202\256\344\273\266\357\274\232", nullptr));
        cmemlineEdit->setPlaceholderText(QCoreApplication::translate("classmateif", "\350\257\267\350\276\223\345\205\245\345\220\214\345\255\246\347\232\204\351\202\256\344\273\266\345\234\260\345\235\200", nullptr));
        label_4->setText(QCoreApplication::translate("classmateif", "\347\224\265\350\257\235\357\274\232", nullptr));
        cmphlineEdit->setPlaceholderText(QCoreApplication::translate("classmateif", "\350\257\267\350\276\223\345\205\245\345\220\214\345\255\246\347\232\204\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("classmateif", "\345\255\246\346\240\241\357\274\232", nullptr));
        cmsclineEdit->setPlaceholderText(QCoreApplication::translate("classmateif", "\350\257\267\350\276\223\345\205\245\344\270\216\345\220\214\345\255\246\344\270\200\350\265\267\344\270\212\345\255\246\347\232\204\345\255\246\346\240\241\345\220\215\347\247\260", nullptr));
        pushButton->setText(QCoreApplication::translate("classmateif", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class classmateif: public Ui_classmateif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSMATEIF_H
