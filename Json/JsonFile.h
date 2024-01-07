#ifndef JSON_FILE_H
#define JSON_FILE_H

#include <string>
#include <vector>
#include "../AbstractSensor.h"

namespace Sensor{
namespace Json{

class JsonFile {
private:
    std::string path;

public:
    JsonFile(const std::string&);
    void save(const std::vector<AbstractSensor*>);
    std::vector<AbstractSensor*> open(void);
};

}
}
#endif