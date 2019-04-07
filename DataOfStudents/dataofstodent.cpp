#include "dataofstodent.h"
#include "ui_dataofstodent.h"
#include "authentication.h"
#include "mainmenuapp.h"
#include <QDebug>
#include <QScreen>

DataOfStodent::DataOfStodent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DataOfStodent)
{
    ui->setupUi(this);
    connect(ui->btnTeacher, SIGNAL(clicked()),this, SLOT(call_Auth()));
    connect(ui->btnStudent, SIGNAL(clicked()), this, SLOT(call_Auth()));

    auth_form = new Authentication();
    connect(auth_form, SIGNAL(verify_true()), SLOT(work_window()));

    main_menu_form = new MainMenuApp();
}

DataOfStodent::~DataOfStodent()
{
    delete ui;
}

void DataOfStodent::call_Auth(){
    this->hide();
    auth_form->show();
}

void DataOfStodent::work_window() {
    qDebug()<<"ITS OKEY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    auth_form->close();
    main_menu_form->show();
}
