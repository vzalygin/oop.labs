#include "diagrammsform.hpp"
#include "ui_diagrammsform.h"

#include <vector>
#include <utility>
#include <string>

#include <QBarSet>
#include <QChart>
#include <QBarSeries>
#include <QValueAxis>

using namespace QtCharts;

DiagrammsForm1::DiagrammsForm1(Repository & repo, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DiagrammsForm), _repo(repo)
{
    ui->setupUi(this);
}

DiagrammsForm1::~DiagrammsForm1()
{
    delete ui;
}

bool sameGroup(const Student & lhs, const Student & rhs) { return lhs.getGroup() == rhs.getGroup(); }

void DiagrammsForm1::show()
{
    QBarSeries * series = new QBarSeries(this);
    for (const auto & group : _repo.groupBy(sameGroup)) {
        int average = 0;
        for (const auto & student : group) { average += student.getRating(); }
        average /= group.size();
        QBarSet * bar = new QBarSet(QString::fromStdString(group[0].getGroup()));
        *bar << average;
        series->append(bar);
    }
    QChart * chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Средний рейтинг по группам");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,100);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
}
