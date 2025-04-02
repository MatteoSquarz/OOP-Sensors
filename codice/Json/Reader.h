#ifndef READER_JSON_H
#define READER_JSON_H
#include "../AbstractSensor.h"
#include <QJsonObject>

namespace Sensor{
namespace Json{

class Reader{
private:
    AbstractSensor* readTemperatureSensor(QJsonObject) const;
    AbstractSensor* readMotionSensor(QJsonObject) const;
    AbstractSensor* readLuminositySensor(QJsonObject) const;
public:
    AbstractSensor* read(QJsonObject) const;
};

}
}



#endif