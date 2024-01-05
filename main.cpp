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
    
    Sensor::TemperatureSensor prova("ciao2", "1dsfdgsgsdfsdsdsdsdfsfsfsdsd22", "424342", true, true, 10, 20);
    Sensor::MotionSensor prova1("ciao1", "asdasddas", "3244324", true, false, 20, 30);
    Sensor::LuminositySensor prova2("temp1", "1dsfdsfsfdsdfdgsgsdfsdsdsdsdfsfsfsdsd22", "876655", false, false, 30, 40);
    Sensor::TemperatureSensor prova3("temp2", "dgsgsdfsdsdsdsdfsfsfsdsd22", "53324", false, true, 40, 50);
    std::vector<Sensor::AbstractSensor*> lista;
    
    lista.push_back(&prova);

    lista.push_back(&prova1);
    lista.push_back(&prova2);
    lista.push_back(&prova3);
    
    //lista.addToList(&prova);
    //lista.addToList(&prova1);
    //lista.addToList(&prova2);
    //prova.generateRandomHistory(0, 100);
    //std::vector<Sensor::AbstractSensor*> lista;
    Sensor::View::MainWindow finestra(lista);
    finestra.resize(1024, 512);
    finestra.show();
    return app.exec();
}
