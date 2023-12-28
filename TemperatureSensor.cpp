#include "TemperatureSensor.h"

namespace Sensor{

TemperatureSensor::TemperatureSensor(const std::string name, const std::string description, const std::string id, const bool isSmart, const bool isIndoor, const int minTemp, const int maxTemp):
    AbstractSensor(name, description, id, isSmart, isIndoor), min_Temperature(minTemp), max_Temperature(maxTemp)  {}


int TemperatureSensor::getMaxTemperature() const{ return max_Temperature;}
int TemperatureSensor::getMinTemperature() const{ return min_Temperature;}




void TemperatureSensor::accept(SensorVisitorInterface& visitor) {
    visitor.visitTemperatureSensor(*this);
}

}