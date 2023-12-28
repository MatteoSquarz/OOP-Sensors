#include "SensorInfoVisitor.h"
#include <QLabel>
#include <QString>
#include "../TemperatureSensor.h"
#include "../MotionSensor.h"
#include "../LuminositySensor.h"

namespace Sensor{
namespace View {

std::vector<QWidget*> SensorInfoVisitor::getWidgets() {
    return widgets;
}

void SensorInfoVisitor::visitLuminositySensor(LuminositySensor& lum_sensor) {
    QLabel* widget1 = new QLabel("Min luminosity: " + QString::number(lum_sensor.getMinLuminosity()));
    QLabel* widget2 = new QLabel("Max luminosity: " + QString::number(lum_sensor.getMaxLuminosity()));
    widgets.push_back(widget1);
    widgets.push_back(widget2);
}

void SensorInfoVisitor::visitMotionSensor(MotionSensor& motion_sensor) {
    QLabel* widget1 = new QLabel("Sensibility: " + QString::number(motion_sensor.getSensibility()));
    QLabel* widget2 = new QLabel("Detection range: " + QString::number(motion_sensor.getDetectionRange()));
    widgets.push_back(widget1);
    widgets.push_back(widget2);
}

void SensorInfoVisitor::visitTemperatureSensor(TemperatureSensor& temp_sensor) {
    QLabel* widget1 = new QLabel("Min temperature: " + QString::number(temp_sensor.getMinTemperature()));
    QLabel* widget2 = new QLabel("Max temperature: " + QString::number(temp_sensor.getMaxTemperature()));
    widgets.push_back(widget1);
    widgets.push_back(widget2);
}

}
}