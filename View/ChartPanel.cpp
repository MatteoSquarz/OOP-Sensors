#include "../AbstractSensor.h"
#include "ChartPanel.h"
#include <QVBoxLayout>
#include <QChartView>
#include <QPushButton>
#include "SensorChartVisitor.h"
#include <iostream>
namespace Sensor {
namespace View {

ChartPanel::ChartPanel(Sensor::AbstractSensor* sensor, QWidget* parent): QWidget(parent){
    QVBoxLayout* layout = new QVBoxLayout(this);
    SensorChartVisitor visitor; 
    sensor->accept(visitor);
    chartView = visitor.getChartView();
    layout->addWidget(chartView);
    QGridLayout* commands = new QGridLayout();
    layout->addLayout(commands);
    QPushButton* simulation_button = new QPushButton("Genera simulazione");
    simulation_button->setIcon(QIcon("assets/simulation.png"));
    simulation_button->setIconSize(QSize(20,20));
    commands->addWidget(simulation_button, 0, 0, 1, 1);
    connect(simulation_button, &QPushButton::pressed, this, &ChartPanel::simulation);
    sensor->registerObserver(this);
}


void ChartPanel::notify(AbstractSensor* sensor) {   //quando viene generata una nuova simulazione sul sensore visualizzato
    SensorChartVisitor visitor; 
    sensor->accept(visitor);
    QChartView* chartViewRitornato = visitor.getChartView();
    chartView->setChart(chartViewRitornato->chart());
}
void ChartPanel::refresh(AbstractSensor* sensor) {  //quando si passa da un sensore ad un altro
    sensor->registerObserver(this);
    SensorChartVisitor visitor; 
    sensor->accept(visitor);
    QChartView* chartViewRitornato = visitor.getChartView();
    chartView->setChart(chartViewRitornato->chart());
}


}
}