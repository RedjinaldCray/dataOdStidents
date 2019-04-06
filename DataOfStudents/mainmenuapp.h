#ifndef MAINMENUAPP_H
#define MAINMENUAPP_H

#include <QWidget>

namespace Ui {
class MainMenuApp;
}

class MainMenuApp : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenuApp(QWidget *parent = nullptr);
    ~MainMenuApp();

private:
    Ui::MainMenuApp *ui;
};

#endif // MAINMENUAPP_H
