#include <QApplication>
#include <iostream>
#include "LuminositySensor.h"
#include "AbstractSensor.h"
#include "MotionSensor.h"
#include "TemperatureSensor.h"
#include "View/MainWindow.h"
#include <vector>
using namespace std;





int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Sensor::TemperatureSensor prova("ciao", "1dsfdgsgsdfsdsdsdsdfsfsfsdsd22", "re", true, true, 20, 100);
    Sensor::MotionSensor prova1("ciao1", "1dsfdgsgsdfsdsdsdsdfsfsfsdsd22", "re", true, true, 20, 100);
    Sensor::LuminositySensor prova2("ciao2", "1dsfdgsgsdfsdsdsdsdfsfsfsdsd22", "re", true, true, 20, 100);
    std::vector<Sensor::AbstractSensor*> lista;
    lista.push_back(&prova);

    lista.push_back(&prova1);
    lista.push_back(&prova2);
    //lista.addToList(&prova);
    //lista.addToList(&prova1);
    //lista.addToList(&prova2);
    //prova.generateRandomHistory(0, 100);
    Sensor::View::MainWindow finestra(lista);
    finestra.resize(1024, 512);
    finestra.show();
    return app.exec();
}
