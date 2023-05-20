#include "mainwindow.hpp"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QString>
#include <vector>
#include <sstream>
#include <string>

MainWindow::MainWindow(Repository & repo, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), _repo(repo)
{
    ui->setupUi(this);
    connect(ui->addStudentButton, SIGNAL(clicked(bool)), this, SLOT(addStudentClick()));
    connect(ui->loadListButton, SIGNAL(clicked(bool)), this, SLOT(loadListClick()));
    connect(ui->deleteStudentButton, SIGNAL(clicked(bool)), this, SLOT(deleteStudentClick()));
    connect(ui->groupByLastNameButton, SIGNAL(clicked(bool)), this, SLOT(groupByLastNameClick()));
    connect(ui->analGroupButton, SIGNAL(clicked(bool)), this, SLOT(analGroupClick()));
    connect(ui->analRatingButton, SIGNAL(clicked(bool)), this, SLOT(analRatingClick()));
    connect(ui->averageRatingButton, SIGNAL(clicked(bool)), this, SLOT(averageRatingClick()));
}

void MainWindow::loadListClick() {
    std::vector<Student> students = _repo.getStudents();
    ui->list->clear();
    for (unsigned int i = 0; i < students.size(); ++i) {
        ui->list->addItem(QString::fromStdString(std::to_string(i+1) + " " + students[i].toString()));
    }
}

void MainWindow::addStudentClick() {
    QMessageBox msg(QMessageBox::Information, "hello!", "hello!",QMessageBox::Ok);
    msg.exec();
}

void MainWindow::deleteStudentClick() {
    std::stringstream ss(ui->list->currentItem()->text().toStdString());
    int i;
    ss >> i;
    _repo.remove(i-1);
    loadListClick();
}

void MainWindow::groupByLastNameClick() {

}

void MainWindow::analGroupClick() {

}

void MainWindow::analRatingClick() {

}

void MainWindow::averageRatingClick() {

}
