#ifndef VIEW_MAIN_WINDOW_H
#define VIEW_MAIN_WINDOW_H

#include <QMainWindow>
#include "../AbstractSensor.h"
#include "ApplicationPanel.h"
#include "../SensorContainer.h"

namespace Sensor{
namespace View{

class MainWindow: public QMainWindow {
Q_OBJECT
    SensorContainer& sensorList;
    ApplicationPanel* application;
public:
    MainWindow(SensorContainer&);

public slots:
    void open(void);
    void save(void);
};

}
}

#endif
