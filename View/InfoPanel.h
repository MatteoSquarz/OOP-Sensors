#ifndef VIEW_INFO_PANEL_H
#define VIEW_INFO_PANEL_H
#include <QWidget>
#include "Info.h"
namespace Sensor{
namespace View {

class InfoPanel : public QWidget{
Q_OBJECT
private:
    Info* info;
    Sensor::AbstractSensor* sensor;
public:
    InfoPanel(Sensor::AbstractSensor* sensor, QWidget* parent =0);
    void refresh(Sensor::AbstractSensor*);
signals:
    void modifySensor();
    void deleteSensor();
};   


}
}

#endif


