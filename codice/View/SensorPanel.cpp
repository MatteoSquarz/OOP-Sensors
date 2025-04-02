#include "../AbstractSensor.h"
#include "InfoPanel.h"
#include "SensorPanel.h"
#include "ChartPanel.h"
#include <QVBoxLayout>
#include <QPushButton>


namespace Sensor {
namespace View {

SensorPanel::SensorPanel(Sensor::AbstractSensor* sensor, QWidget* parent): QWidget(parent), sensor(sensor){
    QVBoxLayout* layout = new QVBoxLayout(this);
    infoPanel = new InfoPanel(sensor);
    chartPanel = new ChartPanel(sensor);
    layout->addWidget(infoPanel);
    layout->addWidget(chartPanel);
    connect(chartPanel, &ChartPanel::simulation, this, &SensorPanel::generateSimulation);
    connect(infoPanel, &InfoPanel::deleteSensor, this, &SensorPanel::deleteSensor);
    connect(infoPanel, &InfoPanel::modifySensor, this, &SensorPanel::modifySensor);
}


void SensorPanel::generateSimulation(){
    sensor->generateRandomHistory();
}

void SensorPanel::refresh(Sensor::AbstractSensor* s){
    sensor = s;
    infoPanel->refresh(sensor);
    chartPanel->refresh(sensor);
}

AbstractSensor* SensorPanel::getCurrentSensor() const{
    return sensor;
}

}
}