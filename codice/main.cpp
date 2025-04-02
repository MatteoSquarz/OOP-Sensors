#include <QApplication>
#include <iostream>
#include "AbstractSensor.h"
#include "View/MainWindow.h"
#include "SensorContainer.h"
using namespace std;





int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Sensor::SensorContainer lista;
    Sensor::View::MainWindow finestra(lista);
    finestra.resize(1024, 512);
    finestra.show();
    return app.exec();
}
