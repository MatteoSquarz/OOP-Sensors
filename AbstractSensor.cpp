#include "AbstractSensor.h"
#include <SensorObserverInterface.h>


std::string AbstractSensor::getName() const{ return name;}
std::string AbstractSensor::getDescription() const{ return description;}
std::string AbstractSensor::getID() const{ return ID;}
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

