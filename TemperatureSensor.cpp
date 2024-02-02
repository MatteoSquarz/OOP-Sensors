#include "TemperatureSensor.h"

namespace Sensor{



TemperatureSensor::TemperatureSensor(const std::string name, const std::string brand, const std::string id, const bool isSmart, const bool isIndoor, const int minTemp, const int maxTemp):
    AbstractSensor(name, brand, id, isSmart, isIndoor), min_Temperature(minTemp), max_Temperature(maxTemp){} 

TemperatureSensor::TemperatureSensor(){}

const std::vector<int>& TemperatureSensor::getHistory() const{ return history;}

void TemperatureSensor::generateRandomHistory(){
	history.clear();
	srand((unsigned) time(NULL));
	for(int i=1; i<=24; i++){
		int random = min_Temperature + (rand() % ((max_Temperature-min_Temperature)+1));
        history.push_back(random);
	}
	for (auto observer = observers.begin(); observer != observers.end(); observer++) {
        (*observer)->notify(this);
    }
}

void TemperatureSensor::modifyData(const std::string name, const std::string brand, const std::string id, const bool isSmart, const bool isIndoor, const int minTemp, const int maxTemp){
    AbstractSensor::modifyData(name, brand, id, isSmart, isIndoor);
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