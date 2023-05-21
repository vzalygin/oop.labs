#ifndef ADDSTUDENTDIALOG_H
#define ADDSTUDENTDIALOG_H

#include <QDialog>
#include <sstream>
#include <memory>
#include "repository.hpp"

namespace Ui {
class AddStudentDialog;
}

class AddStudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddStudentDialog(Repository & repo, QWidget *parent = nullptr);
    ~AddStudentDialog();

    virtual void accept() override;
    void show();

private:
    Ui::AddStudentDialog *ui;
    Repository & _repo;
};

#endif // ADDSTUDENTDIALOG_H
