#include "TemperatureSensor.h"

namespace Sensor{



TemperatureSensor::TemperatureSensor(const std::string name, const std::string description, const std::string id, const bool isSmart, const bool isIndoor, const int minTemp, const int maxTemp):
    AbstractSensor(name, description, id, isSmart, isIndoor){
    
    if(minTemp >= maxTemp) throw err_maxminTemp();
    else{
        min_Temperature = minTemp;
        max_Temperature = maxTemp;
    }

} 

TemperatureSensor::TemperatureSensor(){}


void TemperatureSensor::modifyData(const std::string name, const std::string description, const std::string id, const bool isSmart, const bool isIndoor, const int minTemp, const int maxTemp){
    AbstractSensor::modifyData(name, description, id, isSmart, isIndoor);
    if(minTemp >= maxTemp) throw err_maxminTemp();
    else{
        min_Temperature = minTemp;
        max_Temperature = maxTemp;
    }
    for (auto observer = observers.begin(); observer != observers.end(); observer++) {
        (*observer)->notify(this);
    }
}

int TemperatureSensor::getMaxTemperature() const{ return max_Temperature;}
int TemperatureSensor::getMinTemperature() const{ return min_Temperature;}




void TemperatureSensor::accept(SensorVisitorInterface& visitor) {
    visitor.visitTemperatureSensor(*this);
}

}