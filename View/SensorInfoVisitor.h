#ifndef VIEW_SENSOR_INFO_VISITOR_H
#define VIEW_SENSOR_INFO_VISITOR_H

#include <QWidget>
#include "../SensorVisitorInterface.h"


namespace Sensor{
namespace View {

class SensorInfoVisitor: public SensorVisitorInterface {
  private:
    std::vector<QWidget*> widgets;

  public:
    std::vector<QWidget*> getWidgets();
    virtual void visitTemperatureSensor(TemperatureSensor& hero);
    virtual void visitMotionSensor(MotionSensor& monster);
    virtual void visitLuminositySensor(LuminositySensor& monster);
};

}
}

#endif