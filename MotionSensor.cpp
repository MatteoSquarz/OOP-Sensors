#include "MotionSensor.h"


namespace Sensor{

MotionSensor::MotionSensor(const std::string name, const std::string brand, const std::string id, const bool isSmart, const bool isIndoor, const int sens, const int det_range):
    AbstractSensor(name, brand, id, isSmart, isIndoor) {
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


//i valori minimo e massimo sono stati messi predefiniti a 0 e 100 solo a scopi simulativi al fine di generare un grafico
//per avere valori effettivi di una reale simulazione bisognerebbe avere un sensore vero e proprio
void MotionSensor::generateRandomHistory(){
	history.clear();
	srand((unsigned) time(NULL));
	for(int i=1; i<=24; i++){
		int random = 0 + (rand() % ((100-0)+1));
        history.push_back(random);
	}
	for (auto observer = observers.begin(); observer != observers.end(); observer++) {
        (*observer)->notify(this);
    }
}

void MotionSensor::modifyData(const std::string name, const std::string brand, const std::string id, const bool isSmart, const bool isIndoor, const int sens, const int det_range){
    AbstractSensor::modifyData(name, brand, id, isSmart, isIndoor);
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