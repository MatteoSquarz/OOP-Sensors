#ifndef VIEW_SEARCH_PANEL_H
#define VIEW_SEARCH_PANEL_H
#include <QWidget>
#include <QListWidget>
#include "../AbstractSensor.h"

namespace Sensor{
namespace View {

class SearchPanel : public QWidget{
Q_OBJECT
private:
    std::vector<AbstractSensor*>& sensorList;
    QListWidget* listWidget;
public:
    SearchPanel(std::vector<AbstractSensor*>& sensorList, QWidget* parent =0);
    void refresh(std::vector<AbstractSensor*>& sensorList);
    int returnIndexList() const;
signals:
    void itemClicked(QListWidgetItem*);
public slots:
    


};   


}
}

#endif