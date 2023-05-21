#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "numberfilterdialog.hpp"

#include <QMessageBox>
#include <QString>
#include <vector>
#include <sstream>
#include <string>

MainWindow::MainWindow(Repository & repo, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), _repo(repo), _addStudentDialog(_repo, this), _isNormalMode(false),
      _filterDialog([this](int filter) { this->analGroupCallback(filter); }, this), _diagrammsDialog(_repo, this)
{
    ui->setupUi(this);
    connect(ui->addStudentButton, SIGNAL(clicked(bool)),        this, SLOT(addStudentClick()));
    connect(ui->loadListButton, SIGNAL(clicked(bool)),          this, SLOT(loadListClick()));
    connect(ui->deleteStudentButton, SIGNAL(clicked(bool)),     this, SLOT(deleteStudentClick()));
    connect(ui->groupByLastNameButton, SIGNAL(clicked(bool)),   this, SLOT(groupByLastNameClick()));
    connect(ui->analGroupButton, SIGNAL(clicked(bool)),         this, SLOT(analGroupClick()));
    connect(ui->analRatingButton, SIGNAL(clicked(bool)),        this, SLOT(analRatingClick()));
    connect(ui->averageRatingButton, SIGNAL(clicked(bool)),     this, SLOT(averageRatingClick()));
}

void MainWindow::loadListClick() {
    std::vector<Student> students = _repo.getStudents();
    ui->list->clear();
    for (unsigned int i = 0; i < students.size(); ++i) {
        ui->list->addItem(QString::fromStdString(std::to_string(i+1) + " " + students[i].toString()));
    }
    _isNormalMode = true;
}

void MainWindow::addStudentClick() {
    _addStudentDialog.show();
}

void MainWindow::deleteStudentClick() {
    if (_isNormalMode) {
        std::stringstream ss(ui->list->currentItem()->text().toStdString());
        int i;
        ss >> i;
        _repo.remove(i-1);
        loadListClick();
    }
}

bool equalsByLastName(const Student & lhs, const Student & rhs) { return lhs.getLastName() == rhs.getLastName(); }

void MainWindow::groupByLastNameClick() {
    _isNormalMode = false;
    std::vector<std::vector<Student>> groups = _repo.groupBy(equalsByLastName);
    ui->list->clear();
    for (const auto & group : groups) {
        ui->list->addItem(QString::fromStdString("Фамилия: " + group[0].getLastName()));
        for (const auto & student : group) {
            ui->list->addItem(QString::fromStdString("\t" + student.toString()));
        }
    }
}

void MainWindow::analGroupClick() {
    _filterDialog.show();
}

bool equalsByGroup(const Student & lhs, const Student & rhs) { return lhs.getGroup() == rhs.getGroup(); }

void MainWindow::analGroupCallback(int filter)
{
    _isNormalMode = false;
    std::vector<std::vector<Student>> groups = _repo.groupBy(equalsByGroup);
    ui->list->clear();
    ui->list->addItem(QString::fromStdString("Группы, где человек больше " + std::to_string(filter)));
    for (const auto & group : groups) {
        if (group.size() > filter) {
            ui->list->addItem(QString::fromStdString("Группа: " + group[0].getGroup()));
            for (const auto & student : group) {
                ui->list->addItem(QString::fromStdString("\t" + student.toString()));
            }
        }
    }
}

void MainWindow::analRatingClick() {
    _isNormalMode = false;
    ui->list->clear();
    ui->list->addItem(QString::fromStdString("Студенты, у которых меньше 60 баллов:"));
    for (const auto & student : _repo.getStudents()) {
        if (student.getRating() < 60) {
            ui->list->addItem(QString::fromStdString(student.toString()));
        }
    }
}

void MainWindow::averageRatingClick() {
    _diagrammsDialog.show();
}


