#ifndef DATAOFSTODENT_H
#define DATAOFSTODENT_H

#include <QMainWindow>
#include "authentication.h"

namespace Ui {
class DataOfStodent;
}

class DataOfStodent : public QMainWindow
{
    Q_OBJECT

public:
    explicit DataOfStodent(QWidget *parent = nullptr);
    ~DataOfStodent();

protected:
    QString set_password, password;

private:
    Ui::DataOfStodent *ui;

private slots:
    void call_Auth();
    void work_window();

signals:
    void call_auth_windows();
    void show_main_menu();

private:
    Authentication *auth_form = nullptr;
};

#endif // DATAOFSTODENT_H
