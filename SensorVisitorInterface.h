#ifndef SENSOR_VISITOR_INTERFACE_H
#define SENSOR_VISITOR_INTERFACE_H


class MotionSensor;
class TemperatureSensor;
class LuminositySensor;

class SensorVisitorInterface {
  public:
    virtual ~SensorVisitorInterface() = default;
    virtual void visitMotionSensor(MotionSensor& motion) = 0;
    virtual void visitTemperatureSensor(TemperatureSensor& temperature) = 0;
    virtual void visitLuminositySensor(LuminositySensor& luminosity) = 0;
};



#endif