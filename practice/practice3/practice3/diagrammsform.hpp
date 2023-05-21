#ifndef DIAGRAMMSFORM_H
#define DIAGRAMMSFORM_H

#include <QWidget>
#include <QChartView>
#include <QBarSet>
#include <QChart>
#include <QBarSeries>
#include <QValueAxis>

#include <repository.hpp>

namespace Ui {
class DiagrammsForm;
}

class DiagrammsForm1 : public QWidget
{
    Q_OBJECT

public:
    explicit DiagrammsForm1(Repository & repo, QWidget *parent = nullptr);
    ~DiagrammsForm1();

    void show();

    QtCharts::QChartView * chartView;

private:
    Ui::DiagrammsForm *ui;
    Repository & _repo;
};

#endif // DIAGRAMMSFORM_H
