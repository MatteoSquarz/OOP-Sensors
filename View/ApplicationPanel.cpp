#include "../AbstractSensor.h"
#include "../TemperatureSensor.h"
#include "../LuminositySensor.h"
#include "../MotionSensor.h"
#include "InsertWindow.h"
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
    MotionSensor* esempio = new MotionSensor();
    sensorPanel = new SensorPanel(esempio);
    layout->addWidget(sensorPanel); 
    connect(searchPanel, &SearchPanel::itemClicked, this, &ApplicationPanel::changeSensor);
    connect(searchPanel, &SearchPanel::search, this, &ApplicationPanel::searchList);
    connect(searchPanel, &SearchPanel::clearSearch, this, &ApplicationPanel::clearSearchList);
    connect(searchPanel, &SearchPanel::addSensor, this, &ApplicationPanel::addSensorWindow);
    connect(sensorPanel, &SensorPanel::deleteSensor, this, &ApplicationPanel::deleteSensorFromList);
}

void ApplicationPanel::changeSensor(){
    std::string nameSensor = searchPanel->returnTextList();
    for(std::vector<AbstractSensor*>::iterator it = sensorList.begin(); it != sensorList.end(); ++it){
        if((*it)->getName() == nameSensor)
            sensorPanel->refresh(*it);
    }

}

void ApplicationPanel::searchList(){
    std::string search_target = searchPanel->returnSearchTextBox();
    
    std::vector<AbstractSensor*> sensorSearchList;
    for(std::vector<AbstractSensor*>::iterator it = sensorList.begin(); it != sensorList.end(); ++it){
        if((*it)->getName() == search_target)
            searchPanel->refreshSearch(*it);
    }
    //searchPanel->refreshSearch(sensorSearchList);
    
}

void ApplicationPanel::clearSearchList(){
    searchPanel->refresh(sensorList);
}

void ApplicationPanel::deleteSensorFromList(){
    AbstractSensor* sensorToDelete = sensorPanel->getCurrentSensor();
    sensorList.erase(std::remove(sensorList.begin(), sensorList.end(), sensorToDelete), sensorList.end());
    searchPanel->refresh(sensorList);
    if(!sensorList.empty())
        sensorPanel->refresh(sensorList[0]);
    else{
        MotionSensor* esempio = new MotionSensor();
        sensorPanel->refresh(esempio);
    }
}

void ApplicationPanel::addSensorWindow(){
    insertWindow = new InsertWindow();
    insertWindow->show();
}
}
}