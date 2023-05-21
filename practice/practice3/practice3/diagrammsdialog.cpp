#include "diagrammsdialog.hpp"

DiagrammsDialog::DiagrammsDialog(Repository & repo, QWidget *parent) :
    QDialog(parent), _repo(repo)
{
    resize(400, 400);
}

DiagrammsDialog::~DiagrammsDialog() { }

bool sameGroup(const Student & lhs, const Student & rhs) { return lhs.getGroup() == rhs.getGroup(); }

void DiagrammsDialog::show()
{
    QBarSeries * series = new QBarSeries(this);
    for (const auto & group : _repo.groupBy(sameGroup)) {
        int average = 0;
        for (const auto & student : group) { average += student.getRating(); }
        average /= group.size();
        average += 1;
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

    chartView = new QChartView(chart, this);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->resize(400, 400);
    QDialog::show();
}
