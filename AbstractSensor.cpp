#include "AbstractSensor.h"
#include "SensorObserverInterface.h"


const std::string& AbstractSensor::getName() const{ return name;}
const std::string& AbstractSensor::getDescription() const{ return description;}
const std::string& AbstractSensor::getID() const{ return ID;}
const std::vector<int>& AbstractSensor::getHistory() const{ return history;}
bool AbstractSensor::isSmart() const{ return smartApp;}
bool AbstractSensor::isIndoor() const{ return indoor;}

void AbstractSensor::setName(std::string n) { name = n;}
void AbstractSensor::setDescription(std::string d) { description = d;}
void AbstractSensor::setID(std::string i) { ID = i;}
void AbstractSensor::setIsIndoor(bool val) { indoor = val;}
void AbstractSensor::setIsSmart(bool val) { smartApp = val;}

void AbstractSensor::registerObserver(SensorObserverInterface* observer) {
    observers.push_back(observer);
}


void AbstractSensor::generateRandomHistory(int minValue, int maxValue){
	srand((unsigned) time(NULL));
	for(int i=1; i<=24; i++){
		int random = minValue + (rand() % (minValue+maxValue+1));
        history.push_back(random);
	}
}