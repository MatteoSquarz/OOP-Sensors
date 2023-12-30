#ifndef VIEW_INFO_PANEL_H
#define VIEW_INFO_PANEL_H
#include <QWidget>
#include "Info.h"
namespace Sensor{
namespace View {

class InfoPanel : public QWidget{
Q_OBJECT
private:
    //QLabel* artwork;
    Info* info;
    
public:
    InfoPanel(Sensor::AbstractSensor& sensor, QWidget* parent =0);

signals:
    void modify();
};   


}
}

#endif


