#include "dataofstodent.h"
#include "ui_dataofstodent.h"
#include "authentication.h"
#include <QDebug>

DataOfStodent::DataOfStodent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataOfStodent)
{
    ui->setupUi(this);
    connect(ui->btnAuth, SIGNAL(clicked()),this, SLOT(call_Auth()));
    connect(this, SIGNAL(verify_true()), SLOT(work_window()));
}

DataOfStodent::~DataOfStodent()
{
    delete ui;
}

void DataOfStodent::call_Auth(){
    Authentication *auth_window = new Authentication;
    auth_window->show();
}

void DataOfStodent::work_window() {
    qDebug()<<"ITS OKEY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
}
