#ifndef VIEW_SENSOR_PANEL_H
#define VIEW_SENSOR_PANEL_H
#include <QWidget>
#include "../AbstractSensor.h"
#include "InfoPanel.h"
#include "ChartPanel.h"
namespace Sensor{
namespace View {

class SensorPanel : public QWidget{
Q_OBJECT
private:
    InfoPanel* infoPanel;
    ChartPanel* chartPanel;
    Sensor::AbstractSensor& sensor;
public:
    SensorPanel(Sensor::AbstractSensor& sensor, QWidget* parent =0);

public slots:
    void generateSimulation();
    //void changeName();
};   


}
}

#endif