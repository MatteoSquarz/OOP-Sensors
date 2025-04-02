#include "ModifyWindowVisitor.h"
#include <QLabel>
#include <QString>
#include "../TemperatureSensor.h"
#include "../MotionSensor.h"
#include "../LuminositySensor.h"
#include <iostream>
namespace Sensor{
namespace View {

std::vector<QLabel*> ModifyWindowVisitor::getWidgets() {
    return widgets;
}

void ModifyWindowVisitor::visitLuminositySensor(LuminositySensor& lum_sensor) {
    QLabel* widget1 = new QLabel("Min luminosità: (lux)");
    QLabel* widget2 = new QLabel("Max luminosità: (lux)");
    QLabel* data1 = new QLabel(QString::number(lum_sensor.getMinLuminosity()));
    QLabel* data2 = new QLabel(QString::number(lum_sensor.getMaxLuminosity()));
    QLabel* typeSensor = new QLabel("Luminosità");
    widgets.push_back(widget1);
    widgets.push_back(widget2);
    widgets.push_back(data1);
    widgets.push_back(data2);
    widgets.push_back(typeSensor);
}

void ModifyWindowVisitor::visitMotionSensor(MotionSensor& motion_sensor) {
    QLabel* widget1 = new QLabel("Sensibilità:");
    QLabel* widget2 = new QLabel("Raggio di rilevamento: (m)");
    QLabel* data1 = new QLabel(QString::number(motion_sensor.getSensibility()));
    QLabel* data2 = new QLabel(QString::number(motion_sensor.getDetectionRange()));
    QLabel* typeSensor = new QLabel("Movimento");
    widgets.push_back(widget1);
    widgets.push_back(widget2);
    widgets.push_back(data1);
    widgets.push_back(data2);
    widgets.push_back(typeSensor);
}

void ModifyWindowVisitor::visitTemperatureSensor(TemperatureSensor& temp_sensor) {
    QLabel* widget1 = new QLabel("Min temperatura: (°C)");
    QLabel* widget2 = new QLabel("Max temperatura: (°C)");
    QLabel* data1 = new QLabel(QString::number(temp_sensor.getMinTemperature()));
    QLabel* data2 = new QLabel(QString::number(temp_sensor.getMaxTemperature()));
    QLabel* typeSensor = new QLabel("Temperatura");
    widgets.push_back(widget1);
    widgets.push_back(widget2);
    widgets.push_back(data1);
    widgets.push_back(data2);
    widgets.push_back(typeSensor);

}

}
}