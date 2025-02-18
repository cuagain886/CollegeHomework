/********************************************************************************
** Form generated from reading UI file 'workmateif.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKMATEIF_H
#define UI_WORKMATEIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workmateif
{
public:
    QPushButton *surepushButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *wmnlineEdit;
    QLabel *label_2;
    QLineEdit *wmblineEdit;
    QLabel *label_3;
    QLineEdit *wmelineEdit;
    QLabel *label_4;
    QLineEdit *wmplineEdit;
    QLabel *label_5;
    QLineEdit *wmclineEdit;

    void setupUi(QWidget *workmateif)
    {
        if (workmateif->objectName().isEmpty())
            workmateif->setObjectName("workmateif");
        workmateif->resize(400, 250);
        workmateif->setMinimumSize(QSize(400, 250));
        workmateif->setMaximumSize(QSize(400, 250));
        workmateif->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QWidget#workmateif{background-color: #34495e;}\n"
"QLabel{color:white;}"));
        surepushButton = new QPushButton(workmateif);
        surepushButton->setObjectName("surepushButton");
        surepushButton->setGeometry(QRect(160, 200, 80, 30));
        surepushButton->setMinimumSize(QSize(80, 30));
        QFont font;
        font.setPointSize(12);
        surepushButton->setFont(font);
        widget = new QWidget(workmateif);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 40, 361, 153));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(11);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        wmnlineEdit = new QLineEdit(widget);
        wmnlineEdit->setObjectName("wmnlineEdit");
        wmnlineEdit->setMinimumSize(QSize(250, 25));
        wmnlineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(0, QFormLayout::FieldRole, wmnlineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        wmblineEdit = new QLineEdit(widget);
        wmblineEdit->setObjectName("wmblineEdit");
        wmblineEdit->setMinimumSize(QSize(250, 25));
        wmblineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(1, QFormLayout::FieldRole, wmblineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        wmelineEdit = new QLineEdit(widget);
        wmelineEdit->setObjectName("wmelineEdit");
        wmelineEdit->setMinimumSize(QSize(250, 25));
        wmelineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(2, QFormLayout::FieldRole, wmelineEdit);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        wmplineEdit = new QLineEdit(widget);
        wmplineEdit->setObjectName("wmplineEdit");
        wmplineEdit->setMinimumSize(QSize(250, 25));
        wmplineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(3, QFormLayout::FieldRole, wmplineEdit);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        wmclineEdit = new QLineEdit(widget);
        wmclineEdit->setObjectName("wmclineEdit");
        wmclineEdit->setMinimumSize(QSize(250, 25));
        wmclineEdit->setMaximumSize(QSize(250, 25));

        formLayout->setWidget(4, QFormLayout::FieldRole, wmclineEdit);


        retranslateUi(workmateif);

        QMetaObject::connectSlotsByName(workmateif);
    } // setupUi

    void retranslateUi(QWidget *workmateif)
    {
        workmateif->setWindowTitle(QCoreApplication::translate("workmateif", "\345\220\214\344\272\213", nullptr));
        surepushButton->setText(QCoreApplication::translate("workmateif", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("workmateif", "\345\247\223\345\220\215\357\274\232", nullptr));
        wmnlineEdit->setPlaceholderText(QCoreApplication::translate("workmateif", "\350\257\267\350\276\223\345\205\245\345\220\214\344\272\213\347\232\204\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("workmateif", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        wmblineEdit->setPlaceholderText(QCoreApplication::translate("workmateif", "\350\257\267\346\214\211xxxx-xx-xx\346\240\274\345\274\217\350\276\223\345\205\245", nullptr));
        label_3->setText(QCoreApplication::translate("workmateif", "\351\202\256\344\273\266\357\274\232", nullptr));
        wmelineEdit->setPlaceholderText(QCoreApplication::translate("workmateif", "\350\257\267\350\276\223\345\205\245\345\220\214\344\272\213\347\232\204\351\202\256\344\273\266\345\234\260\345\235\200", nullptr));
        label_4->setText(QCoreApplication::translate("workmateif", "\347\224\265\350\257\235\357\274\232", nullptr));
        wmplineEdit->setPlaceholderText(QCoreApplication::translate("workmateif", "\350\257\267\350\276\223\345\205\245\345\220\214\344\272\213\347\232\204\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("workmateif", "\345\215\225\344\275\215\357\274\232", nullptr));
        wmclineEdit->setPlaceholderText(QCoreApplication::translate("workmateif", "\350\257\267\350\276\223\345\205\245\345\205\261\344\272\213\347\232\204\345\215\225\344\275\215\345\220\215\347\247\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workmateif: public Ui_workmateif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKMATEIF_H
