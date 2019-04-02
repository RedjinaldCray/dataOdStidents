/********************************************************************************
** Form generated from reading UI file 'authentication.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTICATION_H
#define UI_AUTHENTICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authentication
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineUserName;
    QSpacerItem *horizontalSpacer;
    QLabel *label_user_password;
    QLineEdit *lineUserPassword;
    QLabel *label_user_name;
    QLabel *labelAuthentication;
    QPushButton *btnEnterVerify;

    void setupUi(QWidget *Authentication)
    {
        if (Authentication->objectName().isEmpty())
            Authentication->setObjectName(QString::fromUtf8("Authentication"));
        Authentication->resize(479, 158);
        QFont font;
        font.setPointSize(7);
        Authentication->setFont(font);
        widget = new QWidget(Authentication);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 451, 131));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineUserName = new QLineEdit(widget);
        lineUserName->setObjectName(QString::fromUtf8("lineUserName"));

        gridLayout->addWidget(lineUserName, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_user_password = new QLabel(widget);
        label_user_password->setObjectName(QString::fromUtf8("label_user_password"));
        QFont font1;
        font1.setPointSize(9);
        label_user_password->setFont(font1);

        gridLayout->addWidget(label_user_password, 3, 0, 1, 1);

        lineUserPassword = new QLineEdit(widget);
        lineUserPassword->setObjectName(QString::fromUtf8("lineUserPassword"));

        gridLayout->addWidget(lineUserPassword, 3, 1, 1, 1);

        label_user_name = new QLabel(widget);
        label_user_name->setObjectName(QString::fromUtf8("label_user_name"));
        label_user_name->setFont(font1);

        gridLayout->addWidget(label_user_name, 2, 0, 1, 1);

        labelAuthentication = new QLabel(widget);
        labelAuthentication->setObjectName(QString::fromUtf8("labelAuthentication"));
        QFont font2;
        font2.setPointSize(12);
        labelAuthentication->setFont(font2);
        labelAuthentication->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelAuthentication, 1, 0, 1, 2);

        btnEnterVerify = new QPushButton(widget);
        btnEnterVerify->setObjectName(QString::fromUtf8("btnEnterVerify"));
        QFont font3;
        font3.setPointSize(8);
        btnEnterVerify->setFont(font3);

        gridLayout->addWidget(btnEnterVerify, 4, 1, 1, 1);


        retranslateUi(Authentication);

        QMetaObject::connectSlotsByName(Authentication);
    } // setupUi

    void retranslateUi(QWidget *Authentication)
    {
        Authentication->setWindowTitle(QApplication::translate("Authentication", "Form", nullptr));
        label_user_password->setText(QApplication::translate("Authentication", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_user_name->setText(QApplication::translate("Authentication", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        labelAuthentication->setText(QApplication::translate("Authentication", "\320\220\320\243\320\242\320\225\320\235\320\242\320\230\320\244\320\230\320\232\320\220\320\246\320\230\320\257", nullptr));
        btnEnterVerify->setText(QApplication::translate("Authentication", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authentication: public Ui_Authentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATION_H
