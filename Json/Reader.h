#ifndef READER_JSON_H
#define READER_JSON_H
#include "../AbstractSensor.h"
#include <QJsonObject>

namespace Sensor{
namespace Json{

class Reader{
private:
    AbstractSensor* readTemperatureSensor(QJsonObject);
    AbstractSensor* readMotionSensor(QJsonObject);
    AbstractSensor* readLuminositySensor(QJsonObject);
public:
    AbstractSensor* read(QJsonObject);
};

}
}



#endif