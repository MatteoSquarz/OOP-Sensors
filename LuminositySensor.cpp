#include "LuminositySensor.h"

namespace Sensor{
LuminositySensor::LuminositySensor(const std::string name, const std::string brand, const std::string id, const bool isSmart, const bool isIndoor, const int minLum, const int maxLum):
    AbstractSensor(name, brand, id, isSmart, isIndoor), min_Luminosity(minLum), max_Luminosity(maxLum){}

void LuminositySensor::modifyData(const std::string name, const std::string brand, const std::string id, const bool isSmart, const bool isIndoor, const int minLum, const int maxLum){
    AbstractSensor::modifyData(name, brand, id, isSmart, isIndoor);
    if(minLum >= maxLum) throw err_maxminLum();
    else if(minLum < 0) throw err_minUnderZero();
    else{
        min_Luminosity = minLum;
        max_Luminosity = maxLum;
    }
    for (auto observer = observers.begin(); observer != observers.end(); observer++) {
        (*observer)->notify(this);
    }
}

LuminositySensor::LuminositySensor(){}

int LuminositySensor::getMinLuminosity() const{ return min_Luminosity;}
int LuminositySensor::getMaxLuminosity() const{ return max_Luminosity;}
const std::vector<int>& LuminositySensor::getHistory() const{ return history;}

void LuminositySensor::generateRandomHistory(){
	history.clear();
	srand((unsigned) time(NULL));
	for(int i=1; i<=24; i++){
		int random = min_Luminosity + (rand() % ((max_Luminosity-min_Luminosity)+1));
        history.push_back(random);
	}
	for (auto observer = observers.begin(); observer != observers.end(); observer++) {
        (*observer)->notify(this);
    }
}


void LuminositySensor::accept(SensorVisitorInterface& visitor) {
    visitor.visitLuminositySensor(*this);
}

}