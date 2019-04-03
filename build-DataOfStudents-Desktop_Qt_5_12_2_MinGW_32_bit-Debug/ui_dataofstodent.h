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
    QWidget *layoutWidget;
    QGridLayout *gridLayoutMainWindow;
    QPushButton *btnStudent;
    QPushButton *btnTeacher;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DataOfStodent)
    {
        if (DataOfStodent->objectName().isEmpty())
            DataOfStodent->setObjectName(QString::fromUtf8("DataOfStodent"));
        DataOfStodent->resize(450, 143);
        centralWidget = new QWidget(DataOfStodent);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 371, 71));
        gridLayoutMainWindow = new QGridLayout(layoutWidget);
        gridLayoutMainWindow->setSpacing(0);
        gridLayoutMainWindow->setContentsMargins(11, 11, 11, 11);
        gridLayoutMainWindow->setObjectName(QString::fromUtf8("gridLayoutMainWindow"));
        gridLayoutMainWindow->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayoutMainWindow->setContentsMargins(0, 0, 0, 0);
        btnStudent = new QPushButton(layoutWidget);
        btnStudent->setObjectName(QString::fromUtf8("btnStudent"));

        gridLayoutMainWindow->addWidget(btnStudent, 0, 3, 1, 1);

        btnTeacher = new QPushButton(layoutWidget);
        btnTeacher->setObjectName(QString::fromUtf8("btnTeacher"));

        gridLayoutMainWindow->addWidget(btnTeacher, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutMainWindow->addItem(verticalSpacer, 0, 1, 1, 1);

        gridLayoutMainWindow->setColumnStretch(0, 5);
        gridLayoutMainWindow->setColumnStretch(1, 2);
        gridLayoutMainWindow->setColumnStretch(3, 5);
        DataOfStodent->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DataOfStodent);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 450, 21));
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
        btnStudent->setText(QApplication::translate("DataOfStodent", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202", nullptr));
        btnTeacher->setText(QApplication::translate("DataOfStodent", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataOfStodent: public Ui_DataOfStodent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAOFSTODENT_H
