#ifndef SENSOR_OBSERVER_INTERFACE_H
#define SENSOR_OBSERVER_INTERFACE_H



class AbstractSensor;

class SensorObserverInterface {
  public:
    virtual ~SensorObserverInterface() = default;
    virtual void notify(AbstractSensor& sensor) = 0;
};



#endif