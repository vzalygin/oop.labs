#include "mainwindow.hpp"

#include <QApplication>

#include <repository.hpp>

int main(int argc, char *argv[])
{
    Repository repo("D:/repos/oop.labs/practice/practice3/build-practice3-Desktop_Qt_5_12_12_MinGW_32_bit-Debug/debug/data.dat");
    QApplication a(argc, argv);
    MainWindow w(repo);
    w.show();
    return a.exec();
}
