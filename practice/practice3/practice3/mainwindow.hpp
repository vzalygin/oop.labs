#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <repository.hpp>
#include "addstudentdialog.hpp"
#include "numberfilterdialog.hpp"
#include "diagrammsdialog.hpp"

#include <memory>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Repository & repo, QWidget *parent = nullptr);
    ~MainWindow() {
        delete ui;
    };

public slots:
    void loadListClick();
    void addStudentClick();
    void deleteStudentClick();
    void groupByLastNameClick();
    void analGroupClick();
    void analRatingClick();
    void averageRatingClick();
    void analGroupCallback(int);

private:
    Ui::MainWindow * ui;
    Repository & _repo;
    AddStudentDialog _addStudentDialog;
    NumberFilterDialog _filterDialog;
    DiagrammsDialog _diagrammsDialog;
    bool _isNormalMode;
};
#endif // MAINWINDOW_H
