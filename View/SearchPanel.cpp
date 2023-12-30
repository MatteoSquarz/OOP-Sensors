#include "SearchPanel.h"
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QListWidget>


namespace Sensor {
namespace View {

SearchPanel::SearchPanel(std::vector<AbstractSensor*>& sensorList, QWidget* parent): QWidget(parent), sensorList(sensorList){
    QVBoxLayout* layout = new QVBoxLayout(this);
    QGridLayout* commands = new QGridLayout();
    layout->addLayout(commands);

    QLineEdit* search_text_box = new QLineEdit();
    commands->addWidget(search_text_box, 0, 0);
    QPushButton* search = new QPushButton("cerca");
    commands->addWidget(search, 0, 1);
    QPushButton* azzera_search = new QPushButton("azzera");
    commands->addWidget(azzera_search, 1, 1);

    QListWidget* listWidget = new QListWidget(this);
    QListWidgetItem* newItem = new QListWidgetItem;
    newItem->setText(QString::fromStdString(sensorList[0]->getName()));
    listWidget->insertItem(0, newItem);
    QListWidgetItem* newItem1 = new QListWidgetItem;
    newItem1->setText(QString::fromStdString(sensorList[1]->getName()));
    listWidget->insertItem(1, newItem1);
    QListWidgetItem* newItem2 = new QListWidgetItem;
    newItem2->setText(QString::fromStdString(sensorList[2]->getName()));
    listWidget->insertItem(2, newItem2);
    layout->addWidget(listWidget);
}


}
}