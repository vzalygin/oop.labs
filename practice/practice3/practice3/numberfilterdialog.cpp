#include "numberfilterdialog.hpp"
#include "ui_numberfilterdialog.h"

#include <QMessageBox>

#include <sstream>

NumberFilterDialog::NumberFilterDialog(std::function<void (int)> callback, QWidget *parent) :
    QDialog(parent), ui(new Ui::NumberFilterDialog), _callback(callback)
{
    ui->setupUi(this);
}

NumberFilterDialog::~NumberFilterDialog()
{
    delete ui;
}

bool parseFilter(std::string filter, int & result) {
    std::stringstream ss(filter);
    int a;
    if ((ss >> a).fail() || !(ss >> std::ws).eof())
        return false;
    result = a;
    return a >= 0;
}

void NumberFilterDialog::accept()
{
    int filter;
    if (parseFilter(ui->filterEdit->text().toStdString(), filter)) {
        _callback(filter);
        QDialog::accept();
    } else {
        QMessageBox msg(QMessageBox::Information, "Некорректные данные", "Некорректный формат данных.",QMessageBox::Ok);
        msg.exec();
    }
}

void NumberFilterDialog::show() {
    ui->filterEdit->clear();
    QDialog::show();
}
