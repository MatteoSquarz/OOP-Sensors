#ifndef SENSOR_VISITOR_INTERFACE_H
#define SENSOR_VISITOR_INTERFACE_H

namespace Sensor{
  
class MotionSensor;
class TemperatureSensor;
class LuminositySensor;

class SensorVisitorInterface {
  public:
    virtual ~SensorVisitorInterface() = default;
    virtual void visitMotionSensor(MotionSensor&) = 0;
    virtual void visitTemperatureSensor(TemperatureSensor&) = 0;
    virtual void visitLuminositySensor(LuminositySensor&) = 0;
};

}

#endif