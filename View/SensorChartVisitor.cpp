#include "SensorChartVisitor.h"
#include <QLabel>
#include <QString>
#include <QChartView>
#include <QLineSeries>
#include <QDateTimeAxis>
#include <QValueAxis>
#include "../TemperatureSensor.h"
#include "../MotionSensor.h"
#include "../LuminositySensor.h"

namespace Sensor{
namespace View {

QChartView* SensorChartVisitor::getChartView() {
    return chartView;
}

void SensorChartVisitor::visitLuminositySensor(LuminositySensor& lum_sensor) {
    QLineSeries* series = new QLineSeries();
    std::vector<int> values = lum_sensor.generateRandomHistory(lum_sensor.getMinLuminosity(), lum_sensor.getMaxLuminosity());
    for(unsigned int i = 0; i < values.size(); ++i){
        series->append(i, values[i]);
    }
    QChart* chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->setTitle("Simulazione Luminosità");
    QValueAxis *axisX = new QValueAxis;
    axisX->setTickCount(24);
    axisX->setLabelFormat("%.2f");
    axisX->setTitleText("Ore");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis;
    axisY->setLabelFormat("%i");
    axisY->setTitleText("LUX");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
}

void SensorChartVisitor::visitMotionSensor(MotionSensor& motion_sensor) {
        QLineSeries* series = new QLineSeries();
    std::vector<int> values = motion_sensor.generateRandomHistory(0, 100);
    for(unsigned int i = 0; i < values.size(); ++i){
        series->append(i, values[i]);
    }
    QChart* chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->setTitle("Simulazione Rilevamento Movimenti");
    QValueAxis *axisX = new QValueAxis;
    axisX->setTickCount(24);
    axisX->setLabelFormat("%.2f");
    axisX->setTitleText("Ore");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis;
    axisY->setLabelFormat("%i");
    axisY->setTitleText("N° rilevamenti");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
}

void SensorChartVisitor::visitTemperatureSensor(TemperatureSensor& temp_sensor) {
        QLineSeries* series = new QLineSeries();
    std::vector<int> values = temp_sensor.generateRandomHistory(temp_sensor.getMinTemperature(), temp_sensor.getMaxTemperature());
    for(unsigned int i = 0; i < values.size(); ++i){
        series->append(i, values[i]);
    }
    QChart* chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->setTitle("Simulazione Temperature");
    QValueAxis *axisX = new QValueAxis;
    axisX->setTickCount(24);
    axisX->setLabelFormat("%.2f");
    axisX->setTitleText("Ore");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis;
    axisY->setLabelFormat("%i");
    axisY->setTitleText("°C");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
}

}
}