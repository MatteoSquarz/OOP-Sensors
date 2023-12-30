#ifndef VIEW_MAIN_WINDOW_H
#define VIEW_MAIN_WINDOW_H

#include <QMainWindow>
#include "../AbstractSensor.h"


namespace Sensor{
namespace View{

class MainWindow: public QMainWindow {
Q_OBJECT
    std::vector<AbstractSensor*>& sensorList;
public:
    MainWindow(std::vector<AbstractSensor*>& sensorList);

public slots:
    void open(void);
};

}
}

#endif
