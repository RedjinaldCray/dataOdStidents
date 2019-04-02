#include "dataofstodent.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication main_windows(argc, argv);
    DataOfStodent app;
    app.show();

    return main_windows.exec();
}
