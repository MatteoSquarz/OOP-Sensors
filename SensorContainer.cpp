#include "SensorContainer.h"
#include "TemperatureSensor.h"
#include "MotionSensor.h"
#include "LuminositySensor.h"
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
namespace Sensor{
std::vector<AbstractSensor*> SensorContainer::getSensorsList() const{ return sensors;}

AbstractSensor* SensorContainer::getSensor(const std::string& name) const{ 
    for(std::vector<AbstractSensor*>::const_iterator cit = sensors.begin(); cit != sensors.end(); ++cit){
        if((*cit)->getName() == name)
            return *cit;
    }
    return nullptr;
}

AbstractSensor* SensorContainer::getFirstSensor() const{ return sensors[0];}

bool SensorContainer::isEmpty() const { return sensors.empty();}

void SensorContainer::deleteSensor(AbstractSensor* sensorToDelete){
    sensors.erase(std::remove(sensors.begin(), sensors.end(), sensorToDelete), sensors.end());
    delete sensorToDelete;
}

AbstractSensor* SensorContainer::addSensorFromRawData(const std::vector<std::string>& data){
    std::string tipo_sensore = data[0];
    std::string name = data[1];
    std::string id = data[2];
    std::string brand = data[3];
    bool isSmart;
    data[4] == "Si" ? isSmart = true : isSmart = false;
    bool isIndoor;
    data[5] == "Indoor" ? isIndoor = true : isIndoor = false;
    std::string campo_dati_1 = data[6];
    std::string campo_dati_2 = data[7];
    if(checkNameExistence(name)){    
        throw err_nameAlreadyExists();
    }
    AbstractSensor* new_sensor = nullptr;
    if(tipo_sensore == "Temperatura"){
        int min_Temperature = stoi(campo_dati_1);
        int max_Temperature = stoi(campo_dati_2);
        new_sensor = new TemperatureSensor(name, brand, id, isSmart, isIndoor, min_Temperature, max_Temperature);
    }
    else if(tipo_sensore == "Movimento"){
        int sensibility = stoi(campo_dati_1);
        int detection_range = stoi(campo_dati_2);
        new_sensor = new MotionSensor(name, brand, id, isSmart, isIndoor, sensibility, detection_range);
    }
    else if(tipo_sensore == "Luminosità"){
        int min_Luminosity = stoi(campo_dati_1);
        int max_Luminosity = stoi(campo_dati_2);
        new_sensor = new LuminositySensor(name, brand, id, isSmart, isIndoor, min_Luminosity, max_Luminosity);
    }
    sensors.push_back(new_sensor);
    return new_sensor;
}

void SensorContainer::modifySensorFromRawData(AbstractSensor* sensorToModify, const std::vector<std::string>& data){
    std::string name = data[0];
    std::string id = data[1];
    std::string brand = data[2];
    bool isSmart;
    data[3] == "Si" ? isSmart = true : isSmart = false;
    bool isIndoor;
    data[4] == "Indoor" ? isIndoor = true : isIndoor = false;
    std::string campo_dati_1 = data[5];
    std::string campo_dati_2 = data[6];
    if(checkNameExistence(name) && name != sensorToModify->getName()){    
        throw err_nameAlreadyExists();
    }
    
    TemperatureSensor* temp_sensor = dynamic_cast<TemperatureSensor*>(sensorToModify);
    if(temp_sensor){
        int min_Temperature = stoi(campo_dati_1);
        int max_Temperature = stoi(campo_dati_2);
        temp_sensor->modifyData(name, brand, id, isSmart, isIndoor, min_Temperature, max_Temperature);
    }
    LuminositySensor* lum_sensor = dynamic_cast<LuminositySensor*>(sensorToModify);
    if(lum_sensor){
        int min_Luminosity = stoi(campo_dati_1);
        int max_Luminosity = stoi(campo_dati_2);
        lum_sensor->modifyData(name, brand, id, isSmart, isIndoor, min_Luminosity, max_Luminosity);
    }
    MotionSensor* mot_sensor = dynamic_cast<MotionSensor*>(sensorToModify);
    if(mot_sensor){
        int sensibility = stoi(campo_dati_1);
        int detection_range = stoi(campo_dati_2);
        mot_sensor->modifyData(name, brand, id, isSmart, isIndoor, sensibility, detection_range);
    }

}

std::string SensorContainer::stringToLower(std::string s) const{
    for (char &c : s) { 
        c = std::tolower(c); 
    } 
    return s;
}

std::vector<AbstractSensor*> SensorContainer::searchList(const std::string& target) const {
    std::vector<AbstractSensor*> sensorSearchList;
    for(std::vector<AbstractSensor*>::const_iterator cit = sensors.begin(); cit != sensors.end(); ++cit){
        std::string sensorNameToLower = stringToLower((*cit)->getName());
        if((sensorNameToLower).find(stringToLower(target)) != std::string::npos)    //cerca substring
            sensorSearchList.push_back(*cit);
    }
    return sensorSearchList;
}

void SensorContainer::clearAllItems(){
    for(auto sensorToDelete : sensors){
            delete sensorToDelete;
    }
    sensors.clear();
}


void SensorContainer::load(std::vector<AbstractSensor*>& items){
    for(std::vector<AbstractSensor*>::iterator it = items.begin(); it != items.end(); ++it){
        sensors.push_back(*it);
    }
}


bool SensorContainer::checkNameExistence(const std::string& name) const{
    bool found = false;
    for(std::vector<AbstractSensor*>::const_iterator cit = sensors.begin(); cit != sensors.end() && !found; ++cit){
        if((*cit)->getName() == name)
            found = true;
    }
    return found;
}

}