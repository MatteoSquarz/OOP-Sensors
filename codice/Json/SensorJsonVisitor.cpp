#include "SensorJsonVisitor.h"
#include "../LuminositySensor.h"
#include "../MotionSensor.h"
#include "../TemperatureSensor.h"
namespace Sensor{
namespace Json{

QJsonObject SensorJsonVisitor::getObject()const{
    return object;
}

void SensorJsonVisitor::visitLuminositySensor(LuminositySensor& lum_sensor) {
    QJsonObject lum_sensor_obj;
    lum_sensor_obj.insert("type", QJsonValue::fromVariant("luminosity"));
    lum_sensor_obj.insert("name", QJsonValue::fromVariant(lum_sensor.getName().c_str()));
    lum_sensor_obj.insert("brand", QJsonValue::fromVariant(lum_sensor.getBrand().c_str()));
    lum_sensor_obj.insert("id", QJsonValue::fromVariant(lum_sensor.getID().c_str()));
    lum_sensor_obj.insert("isSmart", QJsonValue::fromVariant(lum_sensor.isSmart()));
    lum_sensor_obj.insert("isIndoor", QJsonValue::fromVariant(lum_sensor.isIndoor()));
    lum_sensor_obj.insert("minLuminosity", QJsonValue::fromVariant(lum_sensor.getMinLuminosity()));
    lum_sensor_obj.insert("maxLuminosity", QJsonValue::fromVariant(lum_sensor.getMaxLuminosity()));
    object = lum_sensor_obj;
}

void SensorJsonVisitor::visitMotionSensor(MotionSensor& motion_sensor) {
    QJsonObject motion_sensor_obj;
    motion_sensor_obj.insert("type", QJsonValue::fromVariant("motion"));
    motion_sensor_obj.insert("name", QJsonValue::fromVariant(motion_sensor.getName().c_str()));
    motion_sensor_obj.insert("brand", QJsonValue::fromVariant(motion_sensor.getBrand().c_str()));
    motion_sensor_obj.insert("id", QJsonValue::fromVariant(motion_sensor.getID().c_str()));
    motion_sensor_obj.insert("isSmart", QJsonValue::fromVariant(motion_sensor.isSmart()));
    motion_sensor_obj.insert("isIndoor", QJsonValue::fromVariant(motion_sensor.isIndoor()));
    motion_sensor_obj.insert("sensibility", QJsonValue::fromVariant(motion_sensor.getSensibility()));
    motion_sensor_obj.insert("detectionRange", QJsonValue::fromVariant(motion_sensor.getDetectionRange()));
    object = motion_sensor_obj;
}

void SensorJsonVisitor::visitTemperatureSensor(TemperatureSensor& temp_sensor) {
    QJsonObject temp_sensor_obj;
    temp_sensor_obj.insert("type", QJsonValue::fromVariant("temperature"));
    temp_sensor_obj.insert("name", QJsonValue::fromVariant(temp_sensor.getName().c_str()));
    temp_sensor_obj.insert("brand", QJsonValue::fromVariant(temp_sensor.getBrand().c_str()));
    temp_sensor_obj.insert("id", QJsonValue::fromVariant(temp_sensor.getID().c_str()));
    temp_sensor_obj.insert("isSmart", QJsonValue::fromVariant(temp_sensor.isSmart()));
    temp_sensor_obj.insert("isIndoor", QJsonValue::fromVariant(temp_sensor.isIndoor()));
    temp_sensor_obj.insert("minTemperature", QJsonValue::fromVariant(temp_sensor.getMinTemperature()));
    temp_sensor_obj.insert("maxTemperature", QJsonValue::fromVariant(temp_sensor.getMaxTemperature()));
    object = temp_sensor_obj;
}

}
}