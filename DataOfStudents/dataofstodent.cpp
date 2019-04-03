#include "dataofstodent.h"
#include "ui_dataofstodent.h"
#include "authentication.h"
#include <QDebug>

DataOfStodent::DataOfStodent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataOfStodent)
{
    ui->setupUi(this);
    connect(ui->btnTeacher, SIGNAL(clicked()),this, SLOT(call_Auth()));
    connect(ui->btnStudent, SIGNAL(clicked()), this, SLOT(call_Auth()));

    auth_form = new Authentication(this);
    auth_form->hide();
    connect(auth_form, SIGNAL(verify_true()), SLOT(work_window()));
}

DataOfStodent::~DataOfStodent()
{
    delete ui;
}

void DataOfStodent::call_Auth(){
    auth_form->show();
}

void DataOfStodent::work_window() {
    qDebug()<<"ITS OKEY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    this->show();
}
