#ifndef VIEW_APPLICATION_PANEL_H
#define VIEW_APPLICATION_PANEL_H
#include <QWidget>
#include "../AbstractSensor.h"
#include "SensorPanel.h"
#include "SearchPanel.h"
#include "InsertWindow.h"
#include "ModifyWindow.h"
namespace Sensor{
namespace View {

class ApplicationPanel : public QWidget{
Q_OBJECT
private:
    SensorPanel* sensorPanel;
    SearchPanel* searchPanel;
    std::vector<AbstractSensor*>& sensorList;
    InsertWindow* insertWindow;
    ModifyWindow* modifyWindow;
    //std::vector<AbstractSensor*>& sensorSearchList;
    bool checkNameExistence(std::string) const;
public:
    ApplicationPanel(std::vector<AbstractSensor*>& sensorList, QWidget* parent =0);
    void refresh();
public slots:
    void changeSensor();
    void searchList();
    void clearSearchList();
    void deleteSensorFromList();
    void addSensorToList(std::vector<std::string>);
    void addSensorWindow();
    void modifySensorWindow();
    void modifySensorInList(std::vector<std::string>);
};   


}
}

#endif