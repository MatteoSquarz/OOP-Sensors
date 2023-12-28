#include "AbstractSensor.h"
#include "InfoPanel.h"
#include <QHBoxLayout>
#include <QPushButton>

namespace Sensor {
namespace View {

InfoPanel::InfoPanel(Sensor::AbstractSensor& sensor, QWidget* parent): QWidget(parent){
    QHBoxLayout* layout = new QHBoxLayout(this);
    layout->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    info = new Info(sensor);
    info->show();
    layout->addWidget(info);
    QGridLayout* commands = new QGridLayout();
    layout->addLayout(commands);
    QPushButton* modify = new QPushButton("modify");
    commands->addWidget(modify, 0, 0, 1, 1);
    //connect(attack, &QPushButton::pressed, this, &HeroPanel::attack);

    QPushButton* delete_button = new QPushButton("delete");
    commands->addWidget(delete_button, 0, 1, 1, 1);
    
}

}
}
