#ifndef DATAOFSTODENT_H
#define DATAOFSTODENT_H

#include <QMainWindow>

namespace Ui {
class DataOfStodent;
}

class DataOfStodent : public QMainWindow
{
    Q_OBJECT

public:
    explicit DataOfStodent(QWidget *parent = nullptr);
    ~DataOfStodent();

private:
    Ui::DataOfStodent *ui;

private slots:
    void call_Auth();

signals:
    void call_auth_windows();
};

#endif // DATAOFSTODENT_H
