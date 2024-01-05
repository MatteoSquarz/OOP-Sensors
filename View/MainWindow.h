#ifndef VIEW_MAIN_WINDOW_H
#define VIEW_MAIN_WINDOW_H

#include <QMainWindow>
#include "../AbstractSensor.h"
#include "ApplicationPanel.h"


namespace Sensor{
namespace View{

class MainWindow: public QMainWindow {
Q_OBJECT
    std::vector<AbstractSensor*>& sensorList;
    ApplicationPanel* application;
public:
    MainWindow(std::vector<AbstractSensor*>& sensorList);

public slots:
    void open(void);
};

}
}

#endif
