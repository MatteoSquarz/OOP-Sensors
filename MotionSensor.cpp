#include "MotionSensor.h"


namespace Sensor{

MotionSensor::MotionSensor(const std::string name, const std::string description, const std::string id, const bool isSmart, const bool isIndoor, const int sensibility, const int detection_range):
    AbstractSensor(name, description, id, isSmart, isIndoor), sensibility(sensibility), detectionRange(detection_range)  {}

unsigned int MotionSensor::getSensibility() const{ return sensibility;}
unsigned int MotionSensor::getDetectionRange() const{ return detectionRange;}

MotionSensor::MotionSensor(){}


void MotionSensor::accept(SensorVisitorInterface& visitor) {
    visitor.visitMotionSensor(*this);
}

}