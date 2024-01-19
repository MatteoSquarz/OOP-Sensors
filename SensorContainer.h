#ifndef SENSOR_CONTAINER_H
#define SENSOR_CONTAINER_H
#include <string>
#include <vector>
#include "AbstractSensor.h"

namespace Sensor{
class nameAlreadyExists{};
class SensorContainer{
private:
    std::vector<AbstractSensor*> sensors;
    bool checkNameExistence(const std::string&) const;
    std::string stringToLower(std::string) const;
public:
    std::vector<AbstractSensor*> getSensorsList() const;
    AbstractSensor* getSensor(const std::string&) const;
    AbstractSensor* getFirstSensor() const;
    bool isEmpty() const;
    std::vector<AbstractSensor*> searchList(const std::string&) const;
    void deleteSensor(AbstractSensor*);
    AbstractSensor* addSensorFromRawData(const std::vector<std::string>&);
    void modifySensorFromRawData(AbstractSensor*, const std::vector<std::string>&);
    void clearAllItems();
    void load(std::vector<AbstractSensor*>&);
};




}

#endif