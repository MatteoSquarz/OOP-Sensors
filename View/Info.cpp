#include "Info.h"
#include <QVBoxLayout>
#include <QString>
#include "SensorInfoVisitor.h"
#include <iostream>
#include "../TemperatureSensor.h"
namespace Sensor{
namespace View {

Info::Info(AbstractSensor* sensor, QWidget* parent): QWidget(parent), sensor(sensor){
    QGridLayout* layout = new QGridLayout(this);
    layout->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    
    artwork = new QLabel();
    layout->addWidget(artwork, 0, 0, 2, 1);
    name_label = new QLabel();
    layout->addWidget(name_label, 0, 1);
    id_label = new QLabel();
    layout->addWidget(id_label, 1, 1);
    type_sensor_label = new QLabel();
    layout->addWidget(type_sensor_label, 0, 2);
    description_label = new QLabel();
    layout->addWidget(description_label, 1, 2);
    is_smart_label = new QLabel();
    layout->addWidget(is_smart_label, 0, 3);
    is_indoor_label = new QLabel();
    layout->addWidget(is_indoor_label, 1, 3);
    
    SensorInfoVisitor visitor; 
    sensor->accept(visitor);
    std::vector<QWidget*> widgets = visitor.getWidgets();
    campi_dati_1 = dynamic_cast<QLabel*>(widgets[0]);
    campi_dati_2 = dynamic_cast<QLabel*>(widgets[1]);
    QPixmap* image = visitor.getImage();
    type_sensor_label->setText(dynamic_cast<QLabel*>(widgets[2])->text());
    layout->addWidget(campi_dati_1, 0,4);
    layout->addWidget(campi_dati_2, 1,4);

    artwork->setPixmap((*image).scaledToHeight(50));
    sensor->registerObserver(this);
}

void Info::show(AbstractSensor* s) {
    s->registerObserver(this);
    
    name_label->setText("Nome: " + QString::fromStdString(s->getName()));
    id_label->setText("ID: " + QString::fromStdString(s->getID()));
    description_label->setText("Descrizione: " + QString::fromStdString(s->getDescription()));
    s->isIndoor() ? is_indoor_label->setText("Sensore Indoor") : is_indoor_label->setText("Sensore Outdoor");
    s->isSmart() ? is_smart_label->setText("Supporta SmartApp") : is_smart_label->setText("Non supporta SmartApp");
    
    SensorInfoVisitor visitor; 
    s->accept(visitor);
    QPixmap* image = visitor.getImage();
    artwork->setPixmap((*image).scaledToHeight(50));
    std::vector<QWidget*> widgets = visitor.getWidgets();
    QLabel* label1 = dynamic_cast<QLabel*>(widgets[0]);
    QLabel* label2 = dynamic_cast<QLabel*>(widgets[1]);
    campi_dati_1->setText(label1->text());
    campi_dati_2->setText(label2->text());
    type_sensor_label->setText(dynamic_cast<QLabel*>(widgets[2])->text());
    
}

void Info::notify(AbstractSensor* sensor) {
    name_label->setText("Nome: " + QString::fromStdString(sensor->getName()));
    id_label->setText("ID: " + QString::fromStdString(sensor->getID()));
    description_label->setText("Descrizione: " + QString::fromStdString(sensor->getDescription()));
    sensor->isIndoor() ? is_indoor_label->setText("Sensore Indoor") : is_indoor_label->setText("Sensore Outdoor");
    sensor->isSmart() ? is_smart_label->setText("Supporta SmartApp") : is_smart_label->setText("Non supporta SmartApp");
    
    SensorInfoVisitor visitor; 
    sensor->accept(visitor);
    std::vector<QWidget*> widgets = visitor.getWidgets();
    QLabel* label1 = dynamic_cast<QLabel*>(widgets[0]);
    QLabel* label2 = dynamic_cast<QLabel*>(widgets[1]);
    campi_dati_1->setText(label1->text());
    campi_dati_2->setText(label2->text());
}



}
}
