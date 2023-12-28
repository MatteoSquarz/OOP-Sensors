#ifndef VIEW_MAIN_WINDOW_H
#define VIEW_MAIN_WINDOW_H

#include <QMainWindow>
#include "../AbstractSensor.h"

namespace Sensor{
namespace View{

class MainWindow: public QMainWindow {
Q_OBJECT

public:
    MainWindow(Sensor::AbstractSensor& sensor);

public slots:
    void open(void);
};

}
}

#endif
