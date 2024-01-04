#include "SensorInfoVisitor.h"
#include <QLabel>
#include <QString>
#include "../TemperatureSensor.h"
#include "../MotionSensor.h"
#include "../LuminositySensor.h"
#include <iostream>
namespace Sensor{
namespace View {

std::vector<QWidget*> SensorInfoVisitor::getWidgets() {
    return widgets;
}

void SensorInfoVisitor::visitLuminositySensor(LuminositySensor& lum_sensor) {
    QLabel* widget1 = new QLabel("Min luminosità: " + QString::number(lum_sensor.getMinLuminosity()) + " lux");
    QLabel* widget2 = new QLabel("Max luminosità: " + QString::number(lum_sensor.getMaxLuminosity()) + " lux");
    widgets.push_back(widget1);
    widgets.push_back(widget2);
}

void SensorInfoVisitor::visitMotionSensor(MotionSensor& motion_sensor) {
    QLabel* widget1 = new QLabel("Sensibilità: " + QString::number(motion_sensor.getSensibility()));
    QLabel* widget2 = new QLabel("Raggio di rilevamento: " + QString::number(motion_sensor.getDetectionRange()) + " m");
    widgets.push_back(widget1);
    widgets.push_back(widget2);
}

void SensorInfoVisitor::visitTemperatureSensor(TemperatureSensor& temp_sensor) {
    QLabel* widget1 = new QLabel("Min temperatura: " + QString::number(temp_sensor.getMinTemperature()) + "°C");
    QLabel* widget2 = new QLabel("Max temperatura: " + QString::number(temp_sensor.getMaxTemperature()) + "°C");
    widgets.push_back(widget1);
    widgets.push_back(widget2);
}

}
}