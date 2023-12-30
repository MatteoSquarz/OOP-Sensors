#ifndef VIEW_SEARCH_PANEL_H
#define VIEW_SEARCH_PANEL_H
#include <QWidget>
#include "../AbstractSensor.h"

namespace Sensor{
namespace View {

class SearchPanel : public QWidget{
Q_OBJECT
private:
    std::vector<AbstractSensor*>& sensorList;
public:
    SearchPanel(std::vector<AbstractSensor*>& sensorList, QWidget* parent =0);

};   


}
}

#endif