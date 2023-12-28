#ifndef MOTION_SENSOR_H
#define MOTION_SENSOR_H
#include "AbstractSensor.h"


namespace Sensor{

class MotionSensor : public AbstractSensor{
private:
    unsigned int sensibility;
    unsigned int detectionRange;
public:
    MotionSensor(const std::string, const std::string, const std::string, const bool, const bool, const int, const int);
    unsigned int getSensibility() const;
    unsigned int getDetectionRange() const;
    void accept(SensorVisitorInterface& visitor) override;
};

}

#endif