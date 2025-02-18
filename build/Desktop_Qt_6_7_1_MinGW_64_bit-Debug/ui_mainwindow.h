/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *countlineEdit;
    QPushButton *countpushButton;
    QPushButton *findpushButton;
    QPushButton *wishpushButton;
    QLineEdit *selectlineEdit;
    QPushButton *pushButton_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *insertpushButton;
    QPushButton *updatepushButton;
    QPushButton *deletepushButton;
    QPushButton *showallpushButton;
    QPushButton *showclassmatepushButton;
    QPushButton *showworkmatepushButton;
    QPushButton *showfriendpushButton;
    QPushButton *showfamilypushButton;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 570);
        MainWindow->setMinimumSize(QSize(800, 570));
        MainWindow->setMaximumSize(QSize(800, 570));
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{background-color: #34495e;}\n"
"QPushButton{border-radius:6;color:white;background-color:rgb(85, 237, 187);}\n"
"QLineEdit{border:2px solid #bdc3c7;border-radius: 6;}\n"
"QTableView{background-color: white;}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 10, 731, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        countlineEdit = new QLineEdit(widget);
        countlineEdit->setObjectName("countlineEdit");
        countlineEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(countlineEdit);

        countpushButton = new QPushButton(widget);
        countpushButton->setObjectName("countpushButton");
        countpushButton->setMinimumSize(QSize(80, 30));
        QFont font;
        font.setPointSize(12);
        countpushButton->setFont(font);

        horizontalLayout->addWidget(countpushButton);

        findpushButton = new QPushButton(widget);
        findpushButton->setObjectName("findpushButton");
        findpushButton->setMinimumSize(QSize(80, 30));
        findpushButton->setMaximumSize(QSize(80, 30));
        findpushButton->setFont(font);

        horizontalLayout->addWidget(findpushButton);

        wishpushButton = new QPushButton(widget);
        wishpushButton->setObjectName("wishpushButton");
        wishpushButton->setMinimumSize(QSize(80, 30));
        wishpushButton->setMaximumSize(QSize(80, 30));
        wishpushButton->setFont(font);

        horizontalLayout->addWidget(wishpushButton);

        selectlineEdit = new QLineEdit(widget);
        selectlineEdit->setObjectName("selectlineEdit");
        selectlineEdit->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(selectlineEdit);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(80, 30));
        pushButton_2->setMaximumSize(QSize(80, 30));
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(30, 30, 92, 521));
        widget_2->setStyleSheet(QString::fromUtf8("QPushButton:pressed{border-radius:6;color:white;background-color:rgb(191, 240, 224);}QWidget#centralwidget{background-color: #34495e;}"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
        insertpushButton = new QPushButton(widget_2);
        insertpushButton->setObjectName("insertpushButton");
        insertpushButton->setMinimumSize(QSize(80, 30));
        insertpushButton->setMaximumSize(QSize(80, 30));
        insertpushButton->setFont(font);

        verticalLayout->addWidget(insertpushButton);

        updatepushButton = new QPushButton(widget_2);
        updatepushButton->setObjectName("updatepushButton");
        updatepushButton->setMinimumSize(QSize(80, 30));
        updatepushButton->setMaximumSize(QSize(80, 30));
        updatepushButton->setFont(font);

        verticalLayout->addWidget(updatepushButton);

        deletepushButton = new QPushButton(widget_2);
        deletepushButton->setObjectName("deletepushButton");
        deletepushButton->setMinimumSize(QSize(80, 30));
        deletepushButton->setMaximumSize(QSize(80, 29));
        deletepushButton->setFont(font);

        verticalLayout->addWidget(deletepushButton);

        showallpushButton = new QPushButton(widget_2);
        showallpushButton->setObjectName("showallpushButton");
        showallpushButton->setMinimumSize(QSize(80, 30));
        showallpushButton->setMaximumSize(QSize(80, 30));
        showallpushButton->setFont(font);

        verticalLayout->addWidget(showallpushButton);

        showclassmatepushButton = new QPushButton(widget_2);
        showclassmatepushButton->setObjectName("showclassmatepushButton");
        showclassmatepushButton->setMinimumSize(QSize(80, 30));
        showclassmatepushButton->setMaximumSize(QSize(80, 30));
        showclassmatepushButton->setFont(font);

        verticalLayout->addWidget(showclassmatepushButton);

        showworkmatepushButton = new QPushButton(widget_2);
        showworkmatepushButton->setObjectName("showworkmatepushButton");
        showworkmatepushButton->setMinimumSize(QSize(80, 30));
        showworkmatepushButton->setMaximumSize(QSize(80, 30));
        showworkmatepushButton->setFont(font);

        verticalLayout->addWidget(showworkmatepushButton);

        showfriendpushButton = new QPushButton(widget_2);
        showfriendpushButton->setObjectName("showfriendpushButton");
        showfriendpushButton->setMinimumSize(QSize(80, 30));
        showfriendpushButton->setMaximumSize(QSize(80, 30));
        showfriendpushButton->setFont(font);

        verticalLayout->addWidget(showfriendpushButton);

        showfamilypushButton = new QPushButton(widget_2);
        showfamilypushButton->setObjectName("showfamilypushButton");
        showfamilypushButton->setMinimumSize(QSize(80, 30));
        showfamilypushButton->setMaximumSize(QSize(80, 30));
        showfamilypushButton->setFont(font);

        verticalLayout->addWidget(showfamilypushButton);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(140, 70, 621, 441));
        tableView->horizontalHeader()->setMinimumSectionSize(20);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\351\200\232\344\277\241\345\275\225\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        countlineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\246\201\347\273\237\350\256\241\346\234\210\344\273\275", nullptr));
        countpushButton->setText(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241", nullptr));
        findpushButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        wishpushButton->setText(QCoreApplication::translate("MainWindow", "\347\245\235\347\246\217", nullptr));
        selectlineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\246\201\346\220\234\347\264\242\347\232\204\350\201\224\347\263\273\344\272\272\347\232\204\345\247\223\345\220\215", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
#if QT_CONFIG(tooltip)
        widget_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:19px; background-color:#1f1f1f;\"><span style=\" font-family:'Consolas','Courier New','monospace'; font-size:14px; color:#cccccc;\">QWidget</span><span style=\" font-family:'Consolas','Courier New','monospace'; font-size:14px; color:#d7ba7d;\">#centralwidget</span><span style=\" font-family:'Consolas','Courier New','monospace'; font-size:14px; color:#cccccc;\">{</span><span style=\" font-family:'Consolas','Courier New','monospace'; font-size:14px; color:#9cdcfe;\">background-color</span><span style=\" font-family:'Consolas','Courier New','monospace'; font-size:14px; color:#cccccc;\">: </span><span style=\" font-family:'Consolas','Courier New','monospace'; font-size:14px; color:#ce9178;\">#34495e</span><span style=\" font-family:'Consolas','Courier New','monospace'; font-size:14px; color:#cccccc;\">;}</span></pre></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        insertpushButton->setText(QCoreApplication::translate("MainWindow", "\345\275\225\345\205\245", nullptr));
        updatepushButton->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        deletepushButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        showallpushButton->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\205\250\344\275\223", nullptr));
        showclassmatepushButton->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\220\214\345\255\246", nullptr));
        showworkmatepushButton->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\220\214\344\272\213", nullptr));
        showfriendpushButton->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\234\213\345\217\213", nullptr));
        showfamilypushButton->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\344\272\262\346\210\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
