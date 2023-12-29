#include <QApplication>
#include <iostream>
#include "LuminositySensor.h"
#include "MotionSensor.h"
#include "TemperatureSensor.h"
#include "View/MainWindow.h"
using namespace std;





int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Sensor::LuminositySensor prova("ciao", "1dsfdgsgsdfsdsdsdsdfsfsfsdsd22", "re", true, true, 20, 100);
    Sensor::View::MainWindow finestra(prova);
    
    finestra.show();
    return app.exec();
}
