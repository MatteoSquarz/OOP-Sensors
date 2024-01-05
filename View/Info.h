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
    AbstractSensor* sensor;
    QLabel* artwork;
    QLabel* type_sensor_label;
    QLabel* name_label;
    QLabel* brand_label;
    QLabel* id_label;
    QLabel* is_smart_label;
    QLabel* is_indoor_label;
    QLabel* campi_dati_1;
    QLabel* campi_dati_2;
public:
    Info(AbstractSensor* sensor, QWidget* parent = 0);
    void show(AbstractSensor* sensor);

    void notify(AbstractSensor* sensor) override;
};

}
}


#endif