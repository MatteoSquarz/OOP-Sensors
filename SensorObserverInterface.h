#ifndef SENSOR_OBSERVER_INTERFACE_H
#define SENSOR_OBSERVER_INTERFACE_H

namespace Sensor{

class AbstractSensor;

class SensorObserverInterface {
  public:
    virtual ~SensorObserverInterface() = default;
    virtual void notify(AbstractSensor*) = 0;
};


}
#endif