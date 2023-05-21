#include "mainwindow.hpp"

#include <QApplication>

#include <repository.hpp>

int main(int argc, char *argv[])
{
    Repository repo("./data.dat");
    QApplication a(argc, argv);
    MainWindow w(repo);
    w.show();
    return a.exec();
}
