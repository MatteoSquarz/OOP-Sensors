#include "Reader.h"
#include "../LuminositySensor.h"
#include "../MotionSensor.h"
#include "../TemperatureSensor.h"
#include <iostream>
namespace Sensor{
namespace Json{

AbstractSensor* Reader::read(QJsonObject object){
    QJsonValue type = object.value("type");
    AbstractSensor* sensor = nullptr;
    if(type.toString().toStdString() == "temperature"){
        sensor = readTemperatureSensor(object);
    }
    else if(type.toString().toStdString() == "motion"){
        sensor = readMotionSensor(object);
    }
    else if(type.toString().toStdString() == "luminosity"){
        sensor = readLuminositySensor(object);
    }
    return sensor;
    
}

AbstractSensor* Reader::readLuminositySensor(QJsonObject object){
    return new LuminositySensor(object.value("name").toString().toStdString(),
                                object.value("brand").toString().toStdString(),
                                object.value("id").toString().toStdString(),
                                object.value("isSmart").toBool(),
                                object.value("isIndoor").toBool(),
                                object.value("minLuminosity").toInt(),
                                object.value("maxLuminosity").toInt());
}

AbstractSensor* Reader::readMotionSensor(QJsonObject object){
    return new MotionSensor(object.value("name").toString().toStdString(),
                                object.value("brand").toString().toStdString(),
                                object.value("id").toString().toStdString(),
                                object.value("isSmart").toBool(),
                                object.value("isIndoor").toBool(),
                                object.value("sensibility").toInt(),
                                object.value("detectionRange").toInt());
}

AbstractSensor* Reader::readTemperatureSensor(QJsonObject object){
    return new TemperatureSensor(object.value("name").toString().toStdString(),
                                object.value("brand").toString().toStdString(),
                                object.value("id").toString().toStdString(),
                                object.value("isSmart").toBool(),
                                object.value("isIndoor").toBool(),
                                object.value("minTemperature").toInt(),
                                object.value("maxTemperature").toInt());
}

}
}
