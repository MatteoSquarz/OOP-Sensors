#ifndef SENSOR_JSON_VISITOR_H
#define SENSOR_JSON_VISITOR_H

#include <QJsonObject>
#include "../SensorVisitorInterface.h"


namespace Sensor{
namespace Json{

class SensorJsonVisitor: public SensorVisitorInterface {
  private:
    QJsonObject object;
  public:
    QJsonObject getObject() const;

    virtual void visitTemperatureSensor(TemperatureSensor&);
    virtual void visitMotionSensor(MotionSensor&);
    virtual void visitLuminositySensor(LuminositySensor&);
};

}
}


#endif