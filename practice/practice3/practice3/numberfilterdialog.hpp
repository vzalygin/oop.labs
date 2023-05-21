#ifndef NUMBERFILTERDIALOG_H
#define NUMBERFILTERDIALOG_H

#include <QDialog>
#include <functional>

namespace Ui {
class NumberFilterDialog;
}

class NumberFilterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NumberFilterDialog(std::function<void (int)> callback, QWidget *parent = nullptr);
    ~NumberFilterDialog();

    virtual void accept() override;
    void show();
private:
    Ui::NumberFilterDialog *ui;

    std::function<void (int)> _callback;
};

#endif // NUMBERFILTERDIALOG_H
