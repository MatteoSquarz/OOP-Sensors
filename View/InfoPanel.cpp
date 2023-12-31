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
    QPushButton* modify = new QPushButton("modify");
    commands->addWidget(modify, 0, 0, 1, 1);
    connect(modify, &QPushButton::pressed, this, &InfoPanel::modify);

    QPushButton* delete_button = new QPushButton("delete");
    commands->addWidget(delete_button, 0, 1, 1, 1);
    
}

void InfoPanel::refresh(Sensor::AbstractSensor* s){
    sensor = s;
    info->show(sensor);
}

}
}
