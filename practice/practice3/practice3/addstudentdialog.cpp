#include "addstudentdialog.hpp"
#include "ui_addstudentdialog.h"

AddStudentDialog::AddStudentDialog(Repository & repo, QWidget *parent)
    : QDialog(parent), ui(new Ui::AddStudentDialog), _repo(repo)
{
    ui->setupUi(this);
}

AddStudentDialog::~AddStudentDialog()
{
    delete ui;
}
