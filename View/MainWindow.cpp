#include "MainWindow.h"
#include "SensorPanel.h"
#include <QMenuBar>
#include <QGridLayout>
#include <QMenu>
#include <QApplication>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
namespace Sensor{
namespace View{

MainWindow::MainWindow(Sensor::AbstractSensor& sensor) {

    auto* openAction = this->menuBar()->addAction("OPEN");
    connect(openAction, &QAction::triggered, [this](bool checked){open();});
    auto* saveAction = this->menuBar()->addAction("SAVE");
    auto* addAction = this->menuBar()->addAction("ADD SENSOR");
    SensorPanel* sensore = new SensorPanel(sensor);
    setCentralWidget(sensore);
    

}

void MainWindow::open(void){
    QString filename= QFileDialog::getOpenFileName(this, "Choose File");
    if(filename.isEmpty())
        return;
    QFile file(filename);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
        return;
    QTextStream in(&file);
    QString fileContent;
    fileContent = in.readAll();
    file.close();
    //ui->textEdit->clear();
    //ui->textEdit->setPlainText(fileContent);
}

}
}

