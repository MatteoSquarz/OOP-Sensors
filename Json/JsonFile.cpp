#include "JsonFile.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
#include "SensorJsonVisitor.h"
#include "Reader.h"
#include <iostream>
namespace Sensor{
namespace Json{

JsonFile::JsonFile(const std::string& path): path(path){}

void JsonFile::save(const std::vector<AbstractSensor*> items) const{
    QJsonArray jsonItems;
    for (std::vector<AbstractSensor*>::const_iterator cit = items.begin(); cit != items.end(); ++cit) {
        SensorJsonVisitor visitor;
        (*cit)->accept(visitor);
        jsonItems.push_back(visitor.getObject());
    }
    QJsonDocument document(jsonItems);
    QFile jsonFile(path.c_str());
    jsonFile.open(QFile::WriteOnly);
    jsonFile.write(document.toJson());
    jsonFile.close();
} 


std::vector<AbstractSensor*> JsonFile::open() const{
    std::vector<AbstractSensor*> items;
    QFile jsonFile(path.c_str());
    jsonFile.open(QFile::ReadOnly);
    QByteArray data = jsonFile.readAll();
    jsonFile.close();
    QJsonDocument document = QJsonDocument::fromJson(data);
    QJsonArray jsonItems = document.array();
    Reader reader;  //legge in base al tipo del sensore memorizzato nel campo "type" dell'oggetto json
    for (const QJsonValue& value: jsonItems) {
        QJsonObject jsonObject = value.toObject();
        items.push_back(reader.read(jsonObject));
    }
    return items;
}



}

}