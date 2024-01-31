#include "MainWindow.h"
#include "../Json/JsonFile.h"
#include "ApplicationPanel.h"
#include <QApplication>
#include <QStatusBar>
#include <QFileDialog>
#include <QToolBar>
#include <iostream>
namespace Sensor{
namespace View{

MainWindow::MainWindow(SensorContainer& sensorList) : sensorList(sensorList){
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
    connect(open, &QAction::triggered, this, &MainWindow::open);
    connect(save, &QAction::triggered, this, &MainWindow::save);
    application = new ApplicationPanel(sensorList);
    setCentralWidget(application);
}

void MainWindow::open(void){
    QString path = QFileDialog::getOpenFileName(this, "Choose File","./","JSON files *.json");
    if(path.isEmpty())
        return;
    else{
        Json::JsonFile file(path.toStdString());
        sensorList.clearAllItems();
        std::vector<AbstractSensor*> items = file.open();
        sensorList.load(items);
        //statusBar()->showMessage("Aperto da " + path);
    }
    application->refresh();
}

void MainWindow::save(void){
    QString path = QFileDialog::getSaveFileName(this,"Creates new Dataset","./","JSON files *.json");
    if(path.isEmpty()) return;
    else{
        Json::JsonFile file(path.toStdString());
        file.save(sensorList.getSensorsList());
        //statusBar()->showMessage("Salvato");
    }
}

}
}

