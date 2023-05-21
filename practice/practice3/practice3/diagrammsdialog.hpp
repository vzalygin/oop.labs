#ifndef DIAGRAMMSDIALOG_H
#define DIAGRAMMSDIALOG_H

#include "repository.hpp"

#include <QDialog>
#include <QBarSet>
#include <QChart>
#include <QBarSeries>
#include <QValueAxis>
#include <QChartView>

using namespace QtCharts;

namespace Ui {
class DiagrammsDialog;
}

class DiagrammsDialog : public QDialog
{
    Q_OBJECT

public:
    DiagrammsDialog(Repository & repo, QWidget *parent = nullptr);
    ~DiagrammsDialog();

    void show();

private:
    QChartView * chartView;
    Repository & _repo;
};

#endif // DIAGRAMMSDIALOG_H
