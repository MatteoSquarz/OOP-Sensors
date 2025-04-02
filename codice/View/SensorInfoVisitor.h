#ifndef VIEW_SENSOR_INFO_VISITOR_H
#define VIEW_SENSOR_INFO_VISITOR_H

#include <QWidget>
#include "../SensorVisitorInterface.h"


namespace Sensor{
namespace View {

class SensorInfoVisitor: public SensorVisitorInterface {
  private:
    std::vector<QWidget*> widgets;
    QPixmap* image;
  public:
    std::vector<QWidget*> getWidgets() const;
    QPixmap* getImage() const;
    virtual void visitTemperatureSensor(TemperatureSensor&);
    virtual void visitMotionSensor(MotionSensor&);
    virtual void visitLuminositySensor(LuminositySensor&);
};

}
}

#endif