/**
 * @file main.cpp
 * @author Damian Pobrotyn , Kamil Rostecki
 * @brief Function main.
 */

#include "MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
