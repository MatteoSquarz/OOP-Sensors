#ifndef LUMINOSITY_SENSOR_H
#define LUMINOSITY_SENSOR_H
#include "AbstractSensor.h"


namespace Sensor{

class LuminositySensor : public AbstractSensor{
private:
    int min_Luminosity;
    int max_Luminosity;
public:
    LuminositySensor(const std::string, const std::string, const std::string, const bool, const bool, const int, const int);
    int getMinLuminosity() const;
    int getMaxLuminosity() const;
    void setMinLuminosity(int);
    void accept (SensorVisitorInterface& visitor) override;
    ~LuminositySensor(){}
};


}
#endif
