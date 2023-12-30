#include "../AbstractSensor.h"

#include "ApplicationPanel.h"
#include "SensorPanel.h"
#include "SearchPanel.h"
#include <QHBoxLayout>
#include <QPushButton>

namespace Sensor {
namespace View {

ApplicationPanel::ApplicationPanel(std::vector<AbstractSensor*>& sensorList, QWidget* parent): QWidget(parent), sensorList(sensorList){
    QHBoxLayout* layout = new QHBoxLayout(this);
    //layout->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    searchPanel = new SearchPanel(sensorList);
    layout->addWidget(searchPanel);
    //std::vector<AbstractSensor*> lista = sensorList.getList();
    sensorPanel = new SensorPanel(*sensorList[0]);
    layout->addWidget(sensorPanel); 
}
}
}