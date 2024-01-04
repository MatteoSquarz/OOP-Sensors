#include "../AbstractSensor.h"
#include "../LuminositySensor.h"
#include "../MotionSensor.h"
#include "../TemperatureSensor.h"
#include "InfoPanel.h"
#include "SearchPanel.h"
#include "SensorPanel.h"
#include "ChartPanel.h"
#include <QVBoxLayout>
#include <QPushButton>


namespace Sensor {
namespace View {

SensorPanel::SensorPanel(Sensor::AbstractSensor* sensor, QWidget* parent): QWidget(parent), sensor(sensor){
    QVBoxLayout* layout = new QVBoxLayout(this);
    //layout->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    infoPanel = new InfoPanel(sensor);
    chartPanel = new ChartPanel(sensor);
    layout->addWidget(infoPanel);
    layout->addWidget(chartPanel);
    connect(chartPanel, &ChartPanel::simulation, this, &SensorPanel::generateSimulation);
    connect(infoPanel, &InfoPanel::deleteSensor, this, &SensorPanel::deleteSensor);
    connect(infoPanel, &InfoPanel::modifySensor, this, &SensorPanel::modifySensor);
}


void SensorPanel::generateSimulation(){
    Sensor::LuminositySensor* lum_sensor = dynamic_cast<Sensor::LuminositySensor*>(sensor);
    if(lum_sensor) lum_sensor->generateRandomHistory(lum_sensor->getMinLuminosity(), lum_sensor->getMaxLuminosity());
    Sensor::MotionSensor* motion_sensor = dynamic_cast<Sensor::MotionSensor*>(sensor);
    if(motion_sensor) motion_sensor->generateRandomHistory(0, 100);
    Sensor::TemperatureSensor* temp_sensor = dynamic_cast<Sensor::TemperatureSensor*>(sensor);
    if(temp_sensor) temp_sensor->generateRandomHistory(temp_sensor->getMinTemperature(), temp_sensor->getMaxTemperature());

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