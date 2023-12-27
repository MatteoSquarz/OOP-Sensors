#include <TemperatureSensor.h>


int TemperatureSensor::getMaxTemperature() const{ return max_Temperature;}
int TemperatureSensor::getMinTemperature() const{ return min_Temperature;}




void TemperatureSensor::accept(SensorVisitorInterface& visitor) {
    visitor.visitTemperatureSensor(*this);
}