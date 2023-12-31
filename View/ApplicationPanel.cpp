#include "../AbstractSensor.h"
#include "../TemperatureSensor.h"
#include "../MotionSensor.h"
#include "ApplicationPanel.h"
#include "SensorPanel.h"
#include "SearchPanel.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <iostream>
namespace Sensor {
namespace View {

ApplicationPanel::ApplicationPanel(std::vector<AbstractSensor*>& sensorList, QWidget* parent): QWidget(parent), sensorList(sensorList){
    QHBoxLayout* layout = new QHBoxLayout(this);
    //layout->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    searchPanel = new SearchPanel(sensorList);
    layout->addWidget(searchPanel);
    //std::vector<AbstractSensor*> lista = sensorList.getList();
    MotionSensor* prova = new MotionSensor("prova", "prova", "prova", true, true, 0, 1);
    sensorPanel = new SensorPanel(prova);
    layout->addWidget(sensorPanel); 
    connect(searchPanel, &SearchPanel::itemClicked, this, &ApplicationPanel::changeSensor);
}

void ApplicationPanel::changeSensor(){
    int index = searchPanel->returnIndexList();
    sensorPanel->refresh(sensorList[index]);
}

}
}