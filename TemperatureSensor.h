#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H
#include <AbstractSensor.h>


class TemperatureSensor : public AbstractSensor{
private:
    int min_Temperature;
    int max_Temperature;
    std::vector<double> history;
public:
    int getMinTemperature() const;
    int getMaxTemperature() const;
    virtual void accept(SensorVisitorInterface& visitor);
};

#endif