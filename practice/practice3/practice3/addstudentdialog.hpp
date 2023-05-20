#ifndef ADDSTUDENTDIALOG_H
#define ADDSTUDENTDIALOG_H

#include <QDialog>
#include <QValidator>
#include <sstream>
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

private:
    Ui::AddStudentDialog *ui;
    Repository & _repo;
};

class StrValidator : public QValidator {
public:
    StrValidator(QObject * parent) : QValidator(parent) {};

    virtual State validate(QString & str, int &) const override {
        for (const auto & e : str) {
            if (e == ' ') {
                return Invalid;
            }
        }
        return Acceptable;
    }
};

class RatingValidator : public QValidator {
public:
    RatingValidator(QObject * parent) : QValidator(parent) {};

    virtual State validate(QString & str, int &) const override {
        std::stringstream ss(str.toStdString());
        int a;
        ss >> a;
        if (a >= 0 && a <= 100 ) {
            return Acceptable;
        } else {
            return Invalid;
        }
    }
};

#endif // ADDSTUDENTDIALOG_H
