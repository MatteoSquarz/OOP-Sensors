#include "MotionSensor.h"


namespace Sensor{

MotionSensor::MotionSensor(const std::string name, const std::string description, const std::string id, const bool isSmart, const bool isIndoor, const int sens, const int det_range):
    AbstractSensor(name, description, id, isSmart, isIndoor) {
    if(sens < 0 || det_range < 0) throw err_negativeValue();
    else{
        sensibility = sens;
        detectionRange = det_range;
    }
}

unsigned int MotionSensor::getSensibility() const{ return sensibility;}
unsigned int MotionSensor::getDetectionRange() const{ return detectionRange;}

MotionSensor::MotionSensor(){
    sensibility = 0;
    detectionRange = 0;
}

void MotionSensor::modifyData(const std::string name, const std::string description, const std::string id, const bool isSmart, const bool isIndoor, const int sens, const int det_range){
    AbstractSensor::modifyData(name, description, id, isSmart, isIndoor);
    if(sens < 0 || det_range < 0) throw err_negativeValue();
    else{
        sensibility = sens;
        detectionRange = det_range;
    }
    for (auto observer = observers.begin(); observer != observers.end(); observer++) {
        (*observer)->notify(this);
    }
}

void MotionSensor::accept(SensorVisitorInterface& visitor) {
    visitor.visitMotionSensor(*this);
}

}