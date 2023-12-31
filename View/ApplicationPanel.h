#ifndef VIEW_APPLICATION_PANEL_H
#define VIEW_APPLICATION_PANEL_H
#include <QWidget>
#include "../AbstractSensor.h"
#include "SensorPanel.h"
#include "SearchPanel.h"
namespace Sensor{
namespace View {

class ApplicationPanel : public QWidget{
Q_OBJECT
private:
    SensorPanel* sensorPanel;
    SearchPanel* searchPanel;
    std::vector<AbstractSensor*>& sensorList;
public:
    ApplicationPanel(std::vector<AbstractSensor*>& sensorList, QWidget* parent =0);
public slots:
    void changeSensor();
};   


}
}

#endif