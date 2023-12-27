#include "LuminositySensor.h"

int LuminositySensor::getMinLuminosity() const{ return min_Luminosity;}
int LuminositySensor::getMaxLuminosity() const{ return max_Luminosity;}




void LuminositySensor::accept(SensorVisitorInterface& visitor) {
    visitor.visitLuminositySensor(*this);
}