#include "AbstractSensor.h"
#include "SensorObserverInterface.h"

namespace Sensor{

AbstractSensor::AbstractSensor(const std::string name, const std::string description, const std::string id, const bool isSmart, const bool isIndoor) : 
	name(name), description(description), ID(id), smartApp(isSmart), indoor(isIndoor) {}

const std::string& AbstractSensor::getName() const{return name;}
const std::string& AbstractSensor::getDescription() const{ return description;}
const std::string& AbstractSensor::getID() const{ return ID;}
const std::vector<int>& AbstractSensor::getHistory() const{ return history;}
bool AbstractSensor::isSmart() const{ return smartApp;}
bool AbstractSensor::isIndoor() const{ return indoor;}

void AbstractSensor::setName(std::string n) { 
	for (auto observer = observers.begin(); observer != observers.end(); observer++) {
        (*observer)->notify(*this);
    }
	name = n;
}
void AbstractSensor::setDescription(std::string d) { description = d;}
void AbstractSensor::setID(std::string i) { ID = i;}
void AbstractSensor::setIsIndoor(bool val) { indoor = val;}
void AbstractSensor::setIsSmart(bool val) { smartApp = val;}

void AbstractSensor::registerObserver(SensorObserverInterface* observer) {
    observers.push_back(observer);
}


void AbstractSensor::generateRandomHistory(int minValue, int maxValue){
	history.clear();
	srand((unsigned) time(NULL));
	for(int i=1; i<=24; i++){
		int random = minValue + (rand() % ((maxValue-minValue)+1));
        history.push_back(random);
	}
	for (auto observer = observers.begin(); observer != observers.end(); observer++) {
        (*observer)->notify(*this);
    }
}

bool AbstractSensor::operator== (const AbstractSensor& s){
	if(name == s.getName())	return true; 
	else return false;
}
AbstractSensor::AbstractSensor(){}

}