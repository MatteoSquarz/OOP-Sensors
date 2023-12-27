#ifndef LUMINOSITY_SENSOR_H
#define LUMINOSITY_SENSOR_H
#include "AbstractSensor.h"

class LuminositySensor : public AbstractSensor{
private:
    int min_Luminosity;
    int max_Luminosity;
public:
    int getMinLuminosity() const;
    int getMaxLuminosity() const;
    virtual void accept(SensorVisitorInterface& visitor);
};



#endif