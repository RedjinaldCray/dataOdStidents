#include "authentication.h"
#include "ui_authentication.h"
#include "dataofstodent.h"
#include <QDebug>

Authentication::Authentication(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authentication)
{
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint | Qt::Popup);

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
        qDebug() << "NICE";
        close();
    } else {
        qDebug() <<"ERROR!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
        close();
    }
}
