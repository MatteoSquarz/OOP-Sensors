#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H
#include "AbstractSensor.h"

namespace Sensor{

class TemperatureSensor : public AbstractSensor{
private:
    int min_Temperature;
    int max_Temperature;
public:
    TemperatureSensor(const std::string a, const std::string a1, const std::string a2, const bool a3, const bool a4, const int a5, const int a6);
    int getMinTemperature() const;
    int getMaxTemperature() const;
    void accept(SensorVisitorInterface& visitor) override;
    ~TemperatureSensor(){}
};
}
#endif