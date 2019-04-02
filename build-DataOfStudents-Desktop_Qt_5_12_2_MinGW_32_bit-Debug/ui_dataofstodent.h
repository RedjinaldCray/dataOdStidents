/********************************************************************************
** Form generated from reading UI file 'dataofstodent.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAOFSTODENT_H
#define UI_DATAOFSTODENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataOfStodent
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayoutMainWindow;
    QPushButton *btnShedule;
    QPushButton *btnAuth;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DataOfStodent)
    {
        if (DataOfStodent->objectName().isEmpty())
            DataOfStodent->setObjectName(QString::fromUtf8("DataOfStodent"));
        DataOfStodent->resize(419, 176);
        centralWidget = new QWidget(DataOfStodent);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 371, 71));
        gridLayoutMainWindow = new QGridLayout(widget);
        gridLayoutMainWindow->setSpacing(0);
        gridLayoutMainWindow->setContentsMargins(11, 11, 11, 11);
        gridLayoutMainWindow->setObjectName(QString::fromUtf8("gridLayoutMainWindow"));
        gridLayoutMainWindow->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayoutMainWindow->setContentsMargins(0, 0, 0, 0);
        btnShedule = new QPushButton(widget);
        btnShedule->setObjectName(QString::fromUtf8("btnShedule"));

        gridLayoutMainWindow->addWidget(btnShedule, 0, 3, 1, 1);

        btnAuth = new QPushButton(widget);
        btnAuth->setObjectName(QString::fromUtf8("btnAuth"));

        gridLayoutMainWindow->addWidget(btnAuth, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutMainWindow->addItem(verticalSpacer, 0, 1, 1, 1);

        gridLayoutMainWindow->setColumnStretch(0, 5);
        gridLayoutMainWindow->setColumnStretch(1, 2);
        gridLayoutMainWindow->setColumnStretch(3, 5);
        DataOfStodent->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DataOfStodent);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 419, 21));
        DataOfStodent->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DataOfStodent);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DataOfStodent->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DataOfStodent);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DataOfStodent->setStatusBar(statusBar);

        retranslateUi(DataOfStodent);

        QMetaObject::connectSlotsByName(DataOfStodent);
    } // setupUi

    void retranslateUi(QMainWindow *DataOfStodent)
    {
        DataOfStodent->setWindowTitle(QApplication::translate("DataOfStodent", "DataOfStodent", nullptr));
        btnShedule->setText(QApplication::translate("DataOfStodent", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        btnAuth->setText(QApplication::translate("DataOfStodent", "\320\220\321\203\321\202\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataOfStodent: public Ui_DataOfStodent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAOFSTODENT_H
