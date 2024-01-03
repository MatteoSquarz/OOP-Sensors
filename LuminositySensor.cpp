#include "LuminositySensor.h"

namespace Sensor{
LuminositySensor::LuminositySensor(const std::string name, const std::string description, const std::string id, const bool isSmart, const bool isIndoor, const int minLum, const int maxLum):
    AbstractSensor(name, description, id, isSmart, isIndoor), min_Luminosity(minLum), max_Luminosity(maxLum)  {}


LuminositySensor::LuminositySensor(){}

int LuminositySensor::getMinLuminosity() const{ return min_Luminosity;}
int LuminositySensor::getMaxLuminosity() const{ return max_Luminosity;}

void LuminositySensor::setMinLuminosity(int min) {min_Luminosity=min;}


void LuminositySensor::accept(SensorVisitorInterface& visitor) {
    visitor.visitLuminositySensor(*this);
}

}