#include "Info.h"
#include <QVBoxLayout>
#include <QString>
#include "SensorInfoVisitor.h"

namespace Sensor{
namespace View {

Info::Info(AbstractSensor& sensor, QWidget* parent): QWidget(parent), sensor(sensor){
    QGridLayout* layout = new QGridLayout(this);
    layout->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    name_label = new QLabel();
    layout->addWidget(name_label, 0, 0);
    id_label = new QLabel();
    layout->addWidget(id_label, 1, 0);
    description_label = new QLabel();
    layout->addWidget(description_label, 0, 1, 2, 1);
    is_smart_label = new QLabel();
    layout->addWidget(is_smart_label, 0, 2);
    is_indoor_label = new QLabel();
    layout->addWidget(is_indoor_label, 1, 2);
    
    SensorInfoVisitor visitor; 
    sensor.accept(visitor);
    std::vector<QWidget*> widgets = visitor.getWidgets();
    campi_dati_1 = dynamic_cast<QLabel*>(widgets[0]);
    campi_dati_2 = dynamic_cast<QLabel*>(widgets[1]);
    layout->addWidget(campi_dati_1, 0,3);
    layout->addWidget(campi_dati_2, 1,3);
    
    sensor.registerObserver(this);
}

void Info::show() {
    name_label->setText("Name: " + QString::fromStdString(sensor.getName()));
    id_label->setText("ID: " + QString::fromStdString(sensor.getID()));
    description_label->setText("Description: " + QString::fromStdString(sensor.getDescription()));
    sensor.isIndoor() ? is_indoor_label->setText("Sensore Indoor") : is_indoor_label->setText("Sensore Outdoor");
    sensor.isSmart() ? is_smart_label->setText("Supporta SmartApp") : is_smart_label->setText("Non supporta SmartApp");

}

void Info::notify(AbstractSensor& sensor) {
    name_label->setText("Name: " + QString::fromStdString(sensor.getName()));
    id_label->setText("ID: " + QString::fromStdString(sensor.getID()));
    description_label->setText("Description: " + QString::fromStdString(sensor.getDescription()));
    sensor.isIndoor() ? is_indoor_label->setText("Sensore Indoor") : is_indoor_label->setText("Sensore Outdoor");
    sensor.isSmart() ? is_smart_label->setText("Supporta SmartApp") : is_smart_label->setText("Non supporta SmartApp");
    SensorInfoVisitor visitor; 
    sensor.accept(visitor);
    std::vector<QWidget*> widgets = visitor.getWidgets();
    campi_dati_1 = dynamic_cast<QLabel*>(widgets[0]);
    campi_dati_2 = dynamic_cast<QLabel*>(widgets[1]);
}

}
}
