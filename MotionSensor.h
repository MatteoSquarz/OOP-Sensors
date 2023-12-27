#ifndef MOTION_SENSOR_H
#define MOTION_SENSOR_H
#include "AbstractSensor.h"

class MotionSensor : public AbstractSensor{
private:
    unsigned int sensibility;
    unsigned int detectionRange;
public:
    unsigned int getSensibility() const;
    unsigned int getDetectionRange() const;
    virtual void accept(SensorVisitorInterface& visitor);
};



#endif