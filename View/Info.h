#ifndef VIEW_INFO_H
#define VIEW_INFO_H

#include <QWidget>
#include <QLabel>
#include "../AbstractSensor.h"
#include "../SensorObserverInterface.h"

namespace Sensor{
namespace View {

class Info: public QWidget, public SensorObserverInterface {
Q_OBJECT
private:
    AbstractSensor& sensor;
    QLabel* name_label;
    QLabel* description_label;
    QLabel* id_label;
    QLabel* is_smart_label;
    QLabel* is_indoor_label;

public:
    Info(AbstractSensor& sensor, QWidget* parent = 0);
    void show();
    void notify(AbstractSensor& sensor) override;
};

}
}


#endif