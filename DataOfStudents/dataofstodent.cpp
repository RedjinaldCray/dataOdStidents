#include "dataofstodent.h"
#include "ui_dataofstodent.h"
#include "authentication.h"

DataOfStodent::DataOfStodent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataOfStodent)
{
    ui->setupUi(this);
    connect(ui->btnAuth, SIGNAL(clicked()),this, SLOT(call_Auth()));
}

DataOfStodent::~DataOfStodent()
{
    delete ui;
}

void DataOfStodent::call_Auth(){
    Authentication *auth_window = new Authentication;
    this->hide();
    auth_window->show();
}
