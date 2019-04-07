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

private slots:
    void schedule();
    void performance();

signals:
    void show_schedule();
    void show_performance();
};

#endif // MAINMENUAPP_H
