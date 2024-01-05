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

    search_text_box = new QLineEdit();
    commands->addWidget(search_text_box, 0, 0);
    QPushButton* search = new QPushButton("");
    search->setIcon(QIcon("assets/search.png"));
    search->setIconSize(QSize(20,20));
    search->setFixedSize(QSize(30,30));
    connect(search, &QPushButton::pressed, this, &SearchPanel::search);
    commands->addWidget(search, 0, 1);
    QPushButton* azzera_search = new QPushButton("");
    azzera_search->setIcon(QIcon("assets/refresh.png"));
    azzera_search->setIconSize(QSize(20,20));
    azzera_search->setFixedSize(QSize(30,30));
    connect(azzera_search, &QPushButton::pressed, this, &SearchPanel::clearSearch);
    commands->addWidget(azzera_search, 1, 1);
    listWidget = new QListWidget(this);
    for(unsigned int i = 0; i < sensorList.size(); ++i){
        QListWidgetItem* newItem = new QListWidgetItem;
        newItem->setText(QString::fromStdString(sensorList[i]->getName()));
        listWidget->insertItem(i, newItem);
    }
    layout->addWidget(listWidget);
    QPushButton* add_sensor = new QPushButton("Aggiungi sensore");
    add_sensor->setIcon(QIcon("assets/insert.png"));
    add_sensor->setIconSize(QSize(20,20));
    layout->addWidget(add_sensor);
    connect(add_sensor, &QPushButton::pressed, this, &SearchPanel::addSensor);
    connect(listWidget, SIGNAL(itemClicked(QListWidgetItem*)), this, SIGNAL(itemClicked(QListWidgetItem*)));
    //connect(this, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(returnIndex()));
}


void SearchPanel::refreshSearch(const std::vector<AbstractSensor*> sensorSearchList){
    listWidget->clear();
    //da modificare mostrare piu risultati di un vector
    /*
    QListWidgetItem* newItem = new QListWidgetItem;
    newItem->setText(QString::fromStdString(sensorSearched->getName()));
    listWidget->insertItem(0, newItem);
    */
    for(unsigned int i = 0; i < sensorSearchList.size(); ++i){
        QListWidgetItem* newItem = new QListWidgetItem;
        newItem->setText(QString::fromStdString(sensorSearchList[i]->getName()));
        listWidget->insertItem(i, newItem);
    }
}

void SearchPanel::refresh(){
    //sensorList = list;
    listWidget->clear();
    for(unsigned int i = 0; i < sensorList.size(); ++i){
        QListWidgetItem* newItem = new QListWidgetItem;
        newItem->setText(QString::fromStdString(sensorList[i]->getName()));
        listWidget->insertItem(i, newItem);
    }
    search_text_box->setText("");
}

std::string SearchPanel::returnTextList() const{
    return (listWidget->currentItem()->text()).toStdString();
}

std::string SearchPanel::returnSearchTextBox() const{
    std::string search_target = (search_text_box->text()).toStdString();
    return search_target;
}
}
}