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
public:
    LuminositySensor(const std::string, const std::string, const std::string, const bool, const bool, const int, const int);
    LuminositySensor();
    int getMinLuminosity() const;
    int getMaxLuminosity() const;
    void modifyData(const std::string, const std::string, const std::string, const bool, const bool, const int, const int);
    void accept (SensorVisitorInterface& visitor) override;
    ~LuminositySensor(){}
};


}
#endif
