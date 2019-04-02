#include "authentication.h"
#include "ui_authentication.h"
#include "dataofstodent.h"
#include <QDebug>

Authentication::Authentication(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authentication)
{
    ui->setupUi(this);
    connect(ui->btnEnterVerify, SIGNAL(clicked()), this, SLOT(setData()));
}

Authentication::~Authentication()
{
    delete ui;
}

void Authentication::setData() {
    QString user_password = ui->lineUserPassword->text();
    if (user_password == "qwerty") {
        emit verify_true();
        this->close();
    } else {
        qDebug() <<"ERROR!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
        close();
    }
}
