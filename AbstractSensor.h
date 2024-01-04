#ifndef ABSTRACT_SENSOR_H
#define ABSTRACT_SENSOR_H
#include <string>
#include <vector>
#include "SensorVisitorInterface.h"
#include "SensorObserverInterface.h"


namespace Sensor{

class AbstractSensor{
private:
    std::string name;
    std::string description;
    std::string ID;
    bool smartApp;
    bool indoor;
    std::vector<int> history;
protected:
    std::vector<SensorObserverInterface*> observers;
public:
    AbstractSensor(const std::string, const std::string, const std::string, const bool, const bool);
    AbstractSensor();
    const std::string& getName() const;
    const std::string& getDescription() const;
    const std::string& getID() const;
    const std::vector<int>& getHistory() const;
    bool isSmart() const;
    bool isIndoor() const;

    virtual ~AbstractSensor() = default;
    virtual void accept(SensorVisitorInterface& visitor) = 0;
    void registerObserver(SensorObserverInterface* observer);
    void generateRandomHistory(int, int);
    void modifyData(const std::string, const std::string, const std::string, const bool, const bool);
    bool operator== (const AbstractSensor& s);
};
}


#endif