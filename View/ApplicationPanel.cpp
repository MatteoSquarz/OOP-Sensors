#include "../AbstractSensor.h"
#include "../TemperatureSensor.h"
#include "../LuminositySensor.h"
#include "../MotionSensor.h"
#include "InsertWindow.h"
#include "ModifyWindow.h"
#include "ApplicationPanel.h"
#include "InsertWindow.h"
#include "SensorPanel.h"
#include "SearchPanel.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QMessageBox>
#include <iostream>
#include <string>
namespace Sensor {
namespace View {

ApplicationPanel::ApplicationPanel(std::vector<AbstractSensor*>& sensorList, QWidget* parent): QWidget(parent), sensorList(sensorList){
    QHBoxLayout* layout = new QHBoxLayout(this);
    //layout->setAlignment(Qt::AlignRight | Qt::AlignTop);
    searchPanel = new SearchPanel(sensorList);
    layout->addWidget(searchPanel);
    searchPanel->setFixedWidth(200);
    //std::vector<AbstractSensor*> lista = sensorList.getList();
    MotionSensor esempio = MotionSensor();
    sensorPanel = new SensorPanel(&esempio);
    //searchPanel->setFixedSize(200,500);
    layout->addWidget(sensorPanel); 
    connect(searchPanel, &SearchPanel::itemClicked, this, &ApplicationPanel::changeSensor);
    connect(searchPanel, &SearchPanel::search, this, &ApplicationPanel::searchList);
    connect(searchPanel, &SearchPanel::clearSearch, this, &ApplicationPanel::clearSearchList);
    connect(searchPanel, &SearchPanel::addSensor, this, &ApplicationPanel::addSensorWindow);
    connect(sensorPanel, &SensorPanel::deleteSensor, this, &ApplicationPanel::deleteSensorFromList);
    connect(sensorPanel, &SensorPanel::modifySensor, this, &ApplicationPanel::modifySensorWindow);
    sensorPanel->setDisabled(true);
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
        if(((*it)->getName()).find(search_target) != std::string::npos)    //cerca substring
            sensorSearchList.push_back(*it);
    }
    searchPanel->refreshSearch(sensorSearchList);
    
}

void ApplicationPanel::clearSearchList(){
    searchPanel->refresh();
}

void ApplicationPanel::deleteSensorFromList(){
    AbstractSensor* sensorToDelete = sensorPanel->getCurrentSensor();
    std::cout << sensorToDelete->getName();
    sensorList.erase(std::remove(sensorList.begin(), sensorList.end(), sensorToDelete), sensorList.end());
    delete sensorToDelete;
    searchPanel->refresh();
    if(!sensorList.empty())
        sensorPanel->refresh(sensorList[0]);
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
    //insertWindow->setFocus();
    //this->setDisabled(true);
}

void ApplicationPanel::addSensorToList(std::vector<std::string> data){
    std::string tipo_sensore = data[0];
    std::string name = data[1];
    std::string id = data[2];
    std::string description = data[3];
    bool isSmart;
    data[4] == "Si" ? isSmart = true : isSmart = false;
    bool isIndoor;
    data[5] == "Indoor" ? isIndoor = true : isIndoor = false;
    std::string campo_dati_1 = data[6];
    std::string campo_dati_2 = data[7];
    if(checkNameExistence(name)){    
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Il nome dato al sensore e' gia' utilizzato da un altro sensore esistente!");
        messageBox.setFixedSize(500,200);
        return;
    }
    AbstractSensor* new_sensor = nullptr;
    QMessageBox messageBox;
    messageBox.setFixedSize(500,200);
    try{
        if(tipo_sensore == "Temperatura"){
            int min_Temperature = stoi(campo_dati_1);
            int max_Temperature = stoi(campo_dati_2);
            new_sensor = new TemperatureSensor(name, description, id, isSmart, isIndoor, min_Temperature, max_Temperature);

        }
        else if(tipo_sensore == "Movimento"){
            int sensibility = stoi(campo_dati_1);
            int detection_range = stoi(campo_dati_2);
            new_sensor = new MotionSensor(name, description, id, isSmart, isIndoor, sensibility, detection_range);
        }
        else if(tipo_sensore == "Luminosità"){
            int min_Luminosity = stoi(campo_dati_1);
            int max_Luminosity = stoi(campo_dati_2);
            new_sensor = new LuminositySensor(name, description, id, isSmart, isIndoor, min_Luminosity, max_Luminosity);
        }
        sensorList.push_back(new_sensor);
        searchPanel->refresh();
        sensorPanel->refresh(new_sensor);
        sensorPanel->setDisabled(false);
        insertWindow->close();
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

bool ApplicationPanel::checkNameExistence(std::string name) const{
    bool found = false;
    for(std::vector<AbstractSensor*>::const_iterator cit = sensorList.begin(); cit != sensorList.end() && !found; ++cit){
        if((*cit)->getName() == name)
            found = true;
    }
    return found;
}

void ApplicationPanel::modifySensorWindow(){
    modifyWindow = new ModifyWindow(sensorPanel->getCurrentSensor());
    connect(modifyWindow, SIGNAL(modifySensor(std::vector<std::string>)), this, SLOT(modifySensorInList(std::vector<std::string>)));
    modifyWindow->show();
}

void ApplicationPanel::modifySensorInList(std::vector<std::string> data){
    AbstractSensor* sensorToModify = sensorPanel->getCurrentSensor();
    std::string name = data[0];
    std::string id = data[1];
    std::string description = data[2];
    bool isSmart;
    data[3] == "Si" ? isSmart = true : isSmart = false;
    bool isIndoor;
    data[4] == "Indoor" ? isIndoor = true : isIndoor = false;
    std::string campo_dati_1 = data[5];
    std::string campo_dati_2 = data[6];
    if(checkNameExistence(name) && name != sensorToModify->getName()){    
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Il nome dato al sensore e' gia' utilizzato da un altro sensore esistente!");
        messageBox.setFixedSize(500,200);
        return;
    }

    QMessageBox messageBox;
    messageBox.setFixedSize(500,200);
    
    try{
        TemperatureSensor* temp_sensor = dynamic_cast<TemperatureSensor*>(sensorToModify);
        if(temp_sensor){
            int min_Temperature = stoi(campo_dati_1);
            int max_Temperature = stoi(campo_dati_2);
            temp_sensor->modifyData(name, description, id, isSmart, isIndoor, min_Temperature, max_Temperature);
        }
        LuminositySensor* lum_sensor = dynamic_cast<LuminositySensor*>(sensorToModify);
        if(lum_sensor){
            int min_Luminosity = stoi(campo_dati_1);
            int max_Luminosity = stoi(campo_dati_2);
            lum_sensor->modifyData(name, description, id, isSmart, isIndoor, min_Luminosity, max_Luminosity);
        }
        MotionSensor* mot_sensor = dynamic_cast<MotionSensor*>(sensorToModify);
        if(mot_sensor){
            int sensibility = stoi(campo_dati_1);
            int detection_range = stoi(campo_dati_2);
            mot_sensor->modifyData(name, description, id, isSmart, isIndoor, sensibility, detection_range);
        }
        searchPanel->refresh();
        modifyWindow->close();
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

}
}
}