#include "mainvidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainVidget w;
    w.show();
    return a.exec();
}
