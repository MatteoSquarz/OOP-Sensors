#ifndef ABSTRACT_SENSOR_H
#define ABSTRACT_SENSOR_H
#include <string>
#include <vector>
#include <SensorVisitorInterface.h>
#include <SensorObserverInterface.h>

class AbstractSensor{
private:
    std::string name;
    std::string description;
    std::string ID;
    bool smartApp;
    bool indoor;
    std::vector<SensorObserverInterface*> observers;
public:
    std::string getName() const;
    std::string getDescription() const;
    std::string getID() const;
    bool isSmart() const;
    bool isIndoor() const;

    void setName(std::string);
    void setDescription(std::string);
    void setID(std::string);
    void setIsSmart(bool);
    void setIsIndoor(bool);

    virtual ~AbstractSensor() = default;
    virtual void accept(SensorVisitorInterface& visitor) = 0;
    void registerObserver(SensorObserverInterface* observer);
};



#endif