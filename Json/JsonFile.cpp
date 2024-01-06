#include "JsonFile.h"
#include "../TemperatureSensor.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
#include "SensorJsonVisitor.h"
#include "Reader.h"
#include <iostream>
namespace Sensor{
namespace Json{

JsonFile::JsonFile(const std::string& path): path(path){}

void JsonFile::save(const std::vector<AbstractSensor*> items){
    QJsonArray json_items;
    for (std::vector<AbstractSensor*>::const_iterator cit = items.begin(); cit != items.end(); cit++) {
        SensorJsonVisitor visitor;
        (*cit)->accept(visitor);
        json_items.push_back(visitor.getObject());
    }
    QJsonDocument document(json_items);
    QFile json_file(path.c_str());
    json_file.open(QFile::WriteOnly);
    json_file.write(document.toJson());
    json_file.close();
} 


std::vector<AbstractSensor*> JsonFile::open(){
    std::vector<AbstractSensor*> items;
    QFile json_file(path.c_str());
    json_file.open(QFile::ReadOnly);
    QByteArray data = json_file.readAll();
    json_file.close();
    QJsonDocument document = QJsonDocument::fromJson(data);
    QJsonArray json_items = document.array();
    Reader reader;
    for (const QJsonValue& value: json_items) {
        QJsonObject json_object = value.toObject();
        items.push_back(reader.read(json_object));
    }
    return items;
}



}

}