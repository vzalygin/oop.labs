#include "addstudentdialog.hpp"
#include "ui_addstudentdialog.h"

#include <QMessageBox>

AddStudentDialog::AddStudentDialog(Repository & repo, QWidget *parent)
    : QDialog(parent), ui(new Ui::AddStudentDialog), _repo(repo)
{
    ui->setupUi(this);
}

AddStudentDialog::~AddStudentDialog()
{
    delete ui;
}

bool checkStr(std::string str) {
    for (const auto & e : str) {
        if (e == ' ') {
            return false;
        }
    }
    return true;
}

bool checkRating(std::string rating) {
    std::stringstream ss(rating);
    int a;
    if ((ss >> a).fail() || !(ss >> std::ws).eof())
        return false;
    return a >= 0 && a <= 100;
}

void AddStudentDialog::accept() {
    if (    checkStr(ui->nameEdit->text().toStdString()) &&
            checkStr(ui->lastNameEdit->text().toStdString()) &&
            checkStr(ui->groupEdit->text().toStdString()) &&
            checkRating(ui->ratingEdit->text().toStdString())) {
        int rating;
        std::stringstream ss(ui->ratingEdit->text().toStdString());
        ss >> rating;
        Student s(ui->nameEdit->text().toStdString(), ui->lastNameEdit->text().toStdString(), ui->groupEdit->text().toStdString(), rating);
        _repo.append(std::move(s));
        QDialog::accept();
    } else {
        QMessageBox msg(QMessageBox::Information, "Некорректные данные", "Некорректный формат данных.",QMessageBox::Ok);
        msg.exec();
    }
}

void AddStudentDialog::show()
{
    ui->nameEdit->clear();
    ui->lastNameEdit->clear();
    ui->groupEdit->clear();
    ui->ratingEdit->clear();
    QDialog::show();
}
