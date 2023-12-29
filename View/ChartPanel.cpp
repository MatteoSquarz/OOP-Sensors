#include "../AbstractSensor.h"
#include "ChartPanel.h"
#include <QVBoxLayout>
#include <QChartView>
#include <QPushButton>
#include "SensorChartVisitor.h"

namespace Sensor {
namespace View {

ChartPanel::ChartPanel(Sensor::AbstractSensor& sensor, QWidget* parent): QWidget(parent){
    QVBoxLayout* layout = new QVBoxLayout(this);
    //layout->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    SensorChartVisitor visitor; 
    sensor.accept(visitor);
    chartView = visitor.getChartView();
    layout->addWidget(chartView);
    QGridLayout* commands = new QGridLayout();
    layout->addLayout(commands);
    QPushButton* simulation = new QPushButton("Simulazione");
    commands->addWidget(simulation, 0, 0, 1, 1);
    connect(simulation, &QPushButton::pressed, this, &ChartPanel::simulation);
    sensor.registerObserver(this);
}


void ChartPanel::notify(AbstractSensor& sensor) {
    SensorChartVisitor visitor; 
    sensor.accept(visitor);
    chartView = visitor.getChartView();
}
}
}