#include <QtGui/QApplication>
#include "mainprocess.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainProcess w;
    w.show();

    return a.exec();
}
