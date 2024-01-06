#include "MainWindow.h"
#include "../Json/JsonFile.h"
#include "../TemperatureSensor.h"
#include "ApplicationPanel.h"
#include <QMenuBar>
#include <QGridLayout>
#include <QMenu>
#include <QApplication>
#include <QFile>
#include <QFileDialog>
#include <QToolBar>
#include <QTextStream>
#include <iostream>
namespace Sensor{
namespace View{

MainWindow::MainWindow(std::vector<AbstractSensor*>& sensorList) : sensorList(sensorList){
    this->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    QToolBar* toolBar = new QToolBar();
    QAction* open = new QAction(QIcon(QPixmap(("assets/folder.png"))), "Apri");
    toolBar->addAction(open);
    QAction* save = new QAction(QIcon(QPixmap(("assets/diskette.png"))), "Salva");
    toolBar->addSeparator();
    toolBar->addAction(save);
    toolBar->setFixedHeight(30);
    toolBar->setMovable(false);
    this->addToolBar(toolBar);
    //open->setText("Apri");
    //this->menuBar()->addAction(open);
    //connect(open, &QAction::triggered, [this](bool checked){open();});
    connect(open, &QAction::triggered, this, &MainWindow::open);
    connect(save, &QAction::triggered, this, &MainWindow::save);
    //QAction* save = new QAction(QIcon("assets/diskette.png"), "Salva", this);
    //this->menuBar()->addAction(save);
    application = new ApplicationPanel(sensorList);
    setCentralWidget(application);


}

void MainWindow::open(void){
    QString path = QFileDialog::getOpenFileName(this, "Choose File","./","JSON files *.json");
    if(path.isEmpty())
        return;
    else{
        Json::JsonFile file(path.toStdString());
        std::vector<AbstractSensor*> items = file.open();
        for(auto sensorToDelete : sensorList){
            delete sensorToDelete;
        }
        sensorList.clear();
        for(std::vector<AbstractSensor*>::const_iterator cit = items.begin(); cit != items.end(); ++cit){
            sensorList.push_back(*cit);
        }
        
        
    }
    application->refresh();
}

void MainWindow::save(void){
    QString path = QFileDialog::getSaveFileName(this,"Creates new Dataset","./","JSON files *.json");
    if(path.isEmpty()) return;
    else{
        Json::JsonFile file(path.toStdString());
        file.save(sensorList);
    }
}

}
}

