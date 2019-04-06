#include "mainmenuapp.h"
#include "ui_mainmenuapp.h"

MainMenuApp::MainMenuApp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainMenuApp)
{
    ui->setupUi(this);
}

MainMenuApp::~MainMenuApp()
{
    delete ui;
}
