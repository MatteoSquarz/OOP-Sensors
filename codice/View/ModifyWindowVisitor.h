#ifndef VIEW_MODIFY_WINDOW_VISITOR_H
#define VIEW_MODIFY_WINDOW_VISITOR_H

#include <QWidget>
#include <QLabel>
#include "../SensorVisitorInterface.h"


namespace Sensor{
namespace View {

class ModifyWindowVisitor: public SensorVisitorInterface {
  private:
    std::vector<QLabel*> widgets;

  public:
    std::vector<QLabel*> getWidgets();
    virtual void visitTemperatureSensor(TemperatureSensor&);
    virtual void visitMotionSensor(MotionSensor&);
    virtual void visitLuminositySensor(LuminositySensor&);
};

}
}

#endif