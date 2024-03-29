#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H
#include "AbstractSensor.h"

namespace Sensor{

class err_maxminTemp{};
class TemperatureSensor : public AbstractSensor{
private:
    int min_Temperature;
    int max_Temperature;
    std::vector<int> history;
public:
    TemperatureSensor(const std::string, const std::string, const std::string, const bool, const bool, const int, const int);
    TemperatureSensor();
    int getMinTemperature() const;
    int getMaxTemperature() const;
    const std::vector<int>& getHistory() const;
    void generateRandomHistory() override;
    void modifyData(const std::string, const std::string, const std::string, const bool, const bool, const int, const int);
    void accept(SensorVisitorInterface&) override;
    ~TemperatureSensor(){}
};
}
#endif