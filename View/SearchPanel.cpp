#include "SearchPanel.h"
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QListWidget>
#include <QListWidgetItem>
#include <iostream>
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
    listWidget = new QListWidget(this);
    for(unsigned int i = 0; i < sensorList.size(); ++i){
        QListWidgetItem* newItem = new QListWidgetItem;
        newItem->setText(QString::fromStdString(sensorList[i]->getName()));
        listWidget->insertItem(i, newItem);
    }
    layout->addWidget(listWidget);
    connect(listWidget, SIGNAL(itemClicked(QListWidgetItem*)), this, SIGNAL(itemClicked(QListWidgetItem*)));
    //connect(this, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(returnIndex()));
}


void SearchPanel::refresh(std::vector<AbstractSensor*>& newList){
    sensorList = newList;
    listWidget->clear();
    for(unsigned int i = 0; i < sensorList.size(); ++i){
        QListWidgetItem* newItem = new QListWidgetItem;
        newItem->setText(QString::fromStdString(sensorList[i]->getName()));
        listWidget->insertItem(i, newItem);
    }
}

int SearchPanel::returnIndexList() const{
    //const QModelIndex index = listWidget->indexFromItem(item);
    int i = listWidget->currentRow();
    return i;
}

}
}