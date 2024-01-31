#ifndef MOTION_SENSOR_H
#define MOTION_SENSOR_H
#include "AbstractSensor.h"


namespace Sensor{
class err_negativeValue{};
class MotionSensor : public AbstractSensor{
private:
    unsigned int sensibility;
    unsigned int detectionRange;
    std::vector<int> history;
public:
    MotionSensor();
    MotionSensor(const std::string, const std::string, const std::string, const bool, const bool, const int, const int);
    unsigned int getSensibility() const;
    unsigned int getDetectionRange() const;
    const std::vector<int>& getHistory() const;
    void generateRandomHistory() override;
    void modifyData(const std::string, const std::string, const std::string, const bool, const bool, const int, const int);
    void accept(SensorVisitorInterface&) override;
    ~MotionSensor(){}
};

}

#endif