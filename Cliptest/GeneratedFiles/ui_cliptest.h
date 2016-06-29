/********************************************************************************
** Form generated from reading UI file 'cliptest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPTEST_H
#define UI_CLIPTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CliptestClass
{
public:
    QWidget *centralWidget;
    QTextEdit *TestText;
    QPushButton *pushButton1;
    QLabel *label1;
    QPushButton *pushButton2;
    QWidget *widget;
    QLabel *imagelabel;
    QWidget *widget2;
    QLabel *imagelabel2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CliptestClass)
    {
        if (CliptestClass->objectName().isEmpty())
            CliptestClass->setObjectName(QStringLiteral("CliptestClass"));
        CliptestClass->resize(1116, 779);
        centralWidget = new QWidget(CliptestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TestText = new QTextEdit(centralWidget);
        TestText->setObjectName(QStringLiteral("TestText"));
        TestText->setGeometry(QRect(0, 10, 431, 241));
        pushButton1 = new QPushButton(centralWidget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setGeometry(QRect(130, 290, 75, 23));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(320, 300, 56, 12));
        pushButton2 = new QPushButton(centralWidget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setGeometry(QRect(210, 290, 75, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(450, 10, 581, 241));
        imagelabel = new QLabel(widget);
        imagelabel->setObjectName(QStringLiteral("imagelabel"));
        imagelabel->setGeometry(QRect(0, 0, 581, 241));
        imagelabel->setAlignment(Qt::AlignCenter);
        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(0, 340, 1031, 351));
        imagelabel2 = new QLabel(widget2);
        imagelabel2->setObjectName(QStringLiteral("imagelabel2"));
        imagelabel2->setGeometry(QRect(0, 0, 581, 351));
        CliptestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CliptestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1116, 21));
        CliptestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CliptestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CliptestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CliptestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CliptestClass->setStatusBar(statusBar);

        retranslateUi(CliptestClass);
        QObject::connect(pushButton1, SIGNAL(clicked()), CliptestClass, SLOT(on_pushButton1_clicked()));

        QMetaObject::connectSlotsByName(CliptestClass);
    } // setupUi

    void retranslateUi(QMainWindow *CliptestClass)
    {
        CliptestClass->setWindowTitle(QApplication::translate("CliptestClass", "Cliptest", 0));
        pushButton1->setText(QApplication::translate("CliptestClass", "Set", 0));
        label1->setText(QString());
        pushButton2->setText(QApplication::translate("CliptestClass", "Clear", 0));
        imagelabel->setText(QString());
        imagelabel2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CliptestClass: public Ui_CliptestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPTEST_H
