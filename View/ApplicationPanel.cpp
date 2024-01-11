#include "../AbstractSensor.h"
#include "../TemperatureSensor.h"
#include "../LuminositySensor.h"
#include "../MotionSensor.h"
#include "ModifyWindow.h"
#include "ApplicationPanel.h"
#include "InsertWindow.h"
#include "SensorPanel.h"
#include "SearchPanel.h"
#include <QHBoxLayout>
#include <QMessageBox>
#include <iostream>
#include <string>
namespace Sensor {
namespace View {

ApplicationPanel::ApplicationPanel(SensorContainer& sensorList, QWidget* parent): QWidget(parent), sensorList(sensorList){
    QHBoxLayout* layout = new QHBoxLayout(this);
    searchPanel = new SearchPanel(sensorList);
    layout->addWidget(searchPanel);
    searchPanel->setFixedWidth(200);
    MotionSensor esempio = MotionSensor();
    sensorPanel = new SensorPanel(&esempio);
    layout->addWidget(sensorPanel); 
    connect(searchPanel, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(changeSensor(QListWidgetItem*)));
    connect(searchPanel, &SearchPanel::search, this, &ApplicationPanel::searchList);
    connect(searchPanel, &SearchPanel::clearSearch, this, &ApplicationPanel::clearSearchList);
    connect(searchPanel, &SearchPanel::addSensor, this, &ApplicationPanel::addSensorWindow);
    connect(sensorPanel, &SensorPanel::deleteSensor, this, &ApplicationPanel::deleteSensorFromList);
    connect(sensorPanel, &SensorPanel::modifySensor, this, &ApplicationPanel::modifySensorWindow);
    sensorPanel->setDisabled(true);
}

void ApplicationPanel::changeSensor(QListWidgetItem* item){
    std::string sensorName = (item->text()).toStdString();
    sensorPanel->refresh(sensorList.getSensor(sensorName));

}

void ApplicationPanel::searchList(){
    std::string search_target = searchPanel->returnSearchTextBox();
    std::vector<AbstractSensor*> sensorSearchList = sensorList.searchList(search_target);
    searchPanel->refreshSearch(sensorSearchList);
    
}

void ApplicationPanel::clearSearchList(){
    searchPanel->refresh();
}

void ApplicationPanel::deleteSensorFromList(){
    AbstractSensor* sensorToDelete = sensorPanel->getCurrentSensor();
    sensorList.deleteSensor(sensorToDelete);
    searchPanel->refresh();
    if(!sensorList.isEmpty())
        sensorPanel->refresh(sensorList.getFirstSensor());
    else{
        sensorPanel->setDisabled(true);
        MotionSensor esempio = MotionSensor();
        sensorPanel->refresh(&esempio);
    }
}

void ApplicationPanel::addSensorWindow(){
    insertWindow = new InsertWindow();
    connect(insertWindow, SIGNAL(addSensor(std::vector<std::string>)), this, SLOT(addSensorToList(std::vector<std::string>)));
    insertWindow->show();
}

void ApplicationPanel::addSensorToList(std::vector<std::string> data){
    
    AbstractSensor* new_sensor = nullptr;
    QMessageBox messageBox;
    messageBox.setFixedSize(500,200);
    try{
        new_sensor = sensorList.addSensorFromRawData(data);
        searchPanel->refresh();
        sensorPanel->refresh(new_sensor);
        sensorPanel->setDisabled(false);
        insertWindow->close();
    }
    catch(nameAlreadyExists){
        messageBox.critical(0,"Error","Il nome dato al sensore e' gia' utilizzato da un altro sensore esistente!");
    }
    catch(err_maxminTemp){
        messageBox.critical(0,"Error","Temperatura minima maggiore o uguale a quella massima!");
        if(new_sensor != nullptr) delete new_sensor;
    }
    catch(err_maxminLum){
        messageBox.critical(0,"Error","Luminosità minima maggiore o uguale a quella massima!");
        if(new_sensor != nullptr) delete new_sensor;
    }
    catch(err_minUnderZero){
        messageBox.critical(0,"Error","Luminosità minima negativa!");
        if(new_sensor != nullptr) delete new_sensor;
    }
    catch(err_negativeValue){
        messageBox.critical(0,"Error","Hai inserito dei valori negativi!");
        if(new_sensor != nullptr) delete new_sensor;
    }
    catch(...){
        messageBox.critical(0,"Error","Sembra che tu abbia inserito dei valori errati!");
        if(new_sensor != nullptr) delete new_sensor;
    }
    
}


void ApplicationPanel::modifySensorWindow(){
    modifyWindow = new ModifyWindow(sensorPanel->getCurrentSensor());
    connect(modifyWindow, SIGNAL(modifySensor(std::vector<std::string>)), this, SLOT(modifySensorInList(std::vector<std::string>)));
    modifyWindow->show();
}

void ApplicationPanel::modifySensorInList(std::vector<std::string> data){
    AbstractSensor* sensorToModify = sensorPanel->getCurrentSensor();
    QMessageBox messageBox;
    messageBox.setFixedSize(500,200);
    
    try{
        sensorList.modifySensorFromRawData(sensorToModify, data);
        searchPanel->refresh();
        modifyWindow->close();
    }
    catch(nameAlreadyExists){
        messageBox.critical(0,"Error","Il nome dato al sensore e' gia' utilizzato da un altro sensore esistente!");
    }
    catch(err_maxminTemp){
        messageBox.critical(0,"Error","Temperatura minima maggiore o uguale a quella massima!");
    }
    catch(err_maxminLum){
        messageBox.critical(0,"Error","Luminosità minima maggiore o uguale a quella massima!");
    }
    catch(err_minUnderZero){
        messageBox.critical(0,"Error","Luminosità minima negativa!");
    }
    catch(err_negativeValue){
        messageBox.critical(0,"Error","Hai inserito dei valori negativi!");
    }
    catch(...){
        messageBox.critical(0,"Error","Sembra che tu abbia inserito dei valori errati!");
    }
    
}

void ApplicationPanel::refresh(){
    searchPanel->refresh();
    if(sensorList.isEmpty()){
        sensorPanel->setDisabled(true);
        MotionSensor esempio = MotionSensor();
        sensorPanel->refresh(&esempio);
    }
    else{
        sensorPanel->setDisabled(false);
        sensorPanel->refresh(sensorList.getFirstSensor());
    }


}
}
}