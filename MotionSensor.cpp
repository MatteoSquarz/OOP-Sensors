#include "MotionSensor.h"


unsigned int MotionSensor::getSensibility() const{ return sensibility;}
unsigned int MotionSensor::getDetectionRange() const{ return detectionRange;}




void MotionSensor::accept(SensorVisitorInterface& visitor) {
    visitor.visitMotionSensor(*this);
}