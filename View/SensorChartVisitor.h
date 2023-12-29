#ifndef VIEW_SENSOR_CHART_VISITOR_H
#define VIEW_SENSOR_CHART_VISITOR_H

#include <QWidget>
#include <QChart>
#include <QChartView>
#include "../SensorVisitorInterface.h"


namespace Sensor{
namespace View {

class SensorChartVisitor: public SensorVisitorInterface {
  private:
    QChartView* chartView;

  public:
    QChartView* getChartView();
    virtual void visitTemperatureSensor(TemperatureSensor& hero);
    virtual void visitMotionSensor(MotionSensor& monster);
    virtual void visitLuminositySensor(LuminositySensor& monster);
};

}
}

#endif