#ifndef LUMINOSITY_SENSOR_H
#define LUMINOSITY_SENSOR_H
#include "AbstractSensor.h"


namespace Sensor{
class err_maxminLum{};
class err_minUnderZero{};
class LuminositySensor : public AbstractSensor{
private:
    int min_Luminosity;
    int max_Luminosity;
    std::vector<int> history;
public:
    LuminositySensor(const std::string, const std::string, const std::string, const bool, const bool, const int, const int);
    LuminositySensor();
    int getMinLuminosity() const;
    int getMaxLuminosity() const;
    const std::vector<int>& getHistory() const;
    void generateRandomHistory() override;
    void modifyData(const std::string, const std::string, const std::string, const bool, const bool, const int, const int);
    void accept (SensorVisitorInterface&) override;
    ~LuminositySensor(){}
};


}
#endif
