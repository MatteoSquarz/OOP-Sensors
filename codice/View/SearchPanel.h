#ifndef VIEW_SEARCH_PANEL_H
#define VIEW_SEARCH_PANEL_H
#include <QWidget>
#include <QListWidget>
#include <QLineEdit>
#include "../AbstractSensor.h"
#include "../SensorContainer.h"
namespace Sensor{
namespace View {

class SearchPanel : public QWidget{
Q_OBJECT
private:
    SensorContainer& sensorList;
    QListWidget* listWidget;
    QLineEdit* search_text_box;
public:
    SearchPanel(SensorContainer&, QWidget* =0);
    void refreshSearch(const std::vector<AbstractSensor*>);
    void refresh();
    std::string returnSearchTextBox() const;
signals:
    void itemClicked(QListWidgetItem*);
    void search();
    void clearSearch();
    void addSensor();

};   


}
}

#endif