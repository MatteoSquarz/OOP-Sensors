#ifndef VIEW_SEARCH_PANEL_H
#define VIEW_SEARCH_PANEL_H
#include <QWidget>
#include <QListWidget>
#include <QLineEdit>
#include "../AbstractSensor.h"

namespace Sensor{
namespace View {

class SearchPanel : public QWidget{
Q_OBJECT
private:
    std::vector<AbstractSensor*>& sensorList;
    //AbstractSensor* sensorSearched;
    QListWidget* listWidget;
    QLineEdit* search_text_box;
public:
    SearchPanel(std::vector<AbstractSensor*>& sensorList, QWidget* parent =0);
    void refreshSearch(AbstractSensor* sensorSearched);
    void refresh(std::vector<AbstractSensor*>& list);
    std::string returnTextList() const;
    std::string returnSearchTextBox() const;
signals:
    void itemClicked(QListWidgetItem*);
    void search();
    void clearSearch();
    void addSensor();
public slots:
    


};   


}
}

#endif