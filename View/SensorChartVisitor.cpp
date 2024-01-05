#include "SensorChartVisitor.h"
#include <QLabel>
#include <QString>
#include <QChartView>
#include <QLineSeries>
#include <QBarSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include <QDateTimeAxis>
#include <QValueAxis>
#include "../TemperatureSensor.h"
#include "../MotionSensor.h"
#include "../LuminositySensor.h"
#include <iostream>
namespace Sensor{
namespace View {

QChartView* SensorChartVisitor::getChartView() {
    return chartView;
}

void SensorChartVisitor::visitLuminositySensor(LuminositySensor& lum_sensor) {
    QLineSeries* series = new QLineSeries();
    std::vector<int> values = lum_sensor.getHistory();
    for(unsigned int i = 0; i < values.size(); ++i){
        series->append(i, values[i]);
    }
    QChart* chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->setTitle("Simulazione Luminosità");
    QValueAxis *axisX = new QValueAxis;
    axisX->setTickCount(24);
    axisX->setLabelFormat("%i");
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
/*
void SensorChartVisitor::visitMotionSensor(MotionSensor& motion_sensor) {
    QLineSeries* series = new QLineSeries();
    //std::vector<int> values = motion_sensor.generateRandomHistory(0, 100);
    std::vector<int> values = motion_sensor.getHistory();
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
*/

void SensorChartVisitor::visitMotionSensor(MotionSensor& motion_sensor) {
    QBarSeries* series = new QBarSeries();
    std::vector<int> values = motion_sensor.getHistory();
    QStringList categories;
    QBarSet* set = new QBarSet("movimenti");
    for(unsigned int i = 0; i < 24; ++i){
        std::string orario = std::to_string(i) + "-" + std::to_string(i+1);
        categories << QString::fromStdString(orario);
    }
    for(unsigned int i = 0; i < values.size(); ++i){
        *set << values[i];
        series->append(set);
    }
    QChart* chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->setTitle("Simulazione Rilevamento Movimenti");
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
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
    std::vector<int> values = temp_sensor.getHistory();
    for(unsigned int i = 0; i < values.size(); ++i){
        series->append(i, values[i]);
    }
    QChart* chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->setTitle("Simulazione Temperature");
    QValueAxis *axisX = new QValueAxis;
    axisX->setTickCount(24);
    axisX->setLabelFormat("%i");
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