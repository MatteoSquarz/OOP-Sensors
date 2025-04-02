#include "../AbstractSensor.h"
#include "InfoPanel.h"
#include <QHBoxLayout>
#include <QPushButton>

namespace Sensor {
namespace View {

InfoPanel::InfoPanel(Sensor::AbstractSensor* sensor, QWidget* parent): QWidget(parent), sensor(sensor){
    QHBoxLayout* layout = new QHBoxLayout(this);
    layout->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    info = new Info(sensor);
    info->show(sensor);
    layout->addWidget(info);
    QGridLayout* commands = new QGridLayout();
    layout->addLayout(commands);
    QPushButton* modify_button = new QPushButton("");
    modify_button->setIcon(QIcon("assets/edit.png"));
    modify_button->setIconSize(QSize(25,25));
    modify_button->setFixedSize(QSize(35,35));
    commands->addWidget(modify_button, 0, 0);
    connect(modify_button, &QPushButton::pressed, this, &InfoPanel::modifySensor);

    QPushButton* delete_button = new QPushButton("");
    delete_button->setIcon(QIcon("assets/trash.png"));
    delete_button->setIconSize(QSize(25,25));
    delete_button->setFixedSize(QSize(35,35));
    connect(delete_button, &QPushButton::pressed, this, &InfoPanel::deleteSensor);
    commands->addWidget(delete_button, 0, 1);
    
}

void InfoPanel::refresh(Sensor::AbstractSensor* s){
    sensor = s;
    info->show(sensor);
}

}
}
