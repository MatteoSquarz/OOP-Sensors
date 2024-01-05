#include "MainWindow.h"
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
    //QAction* save = new QAction(QIcon("assets/diskette.png"), "Salva", this);
    //this->menuBar()->addAction(save);
    application = new ApplicationPanel(sensorList);
    setCentralWidget(application);


}

void MainWindow::open(void){
    /*
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
    */
    //ui->textEdit->clear();
    //ui->textEdit->setPlainText(fileContent);
    TemperatureSensor* prova = new TemperatureSensor("ciao", "1dsfdgsgsdfsdsdsdsdfsfsfsdsd22", "424342", true, true, 10, 20);
    sensorList.push_back(prova);
    application->refresh();
}

}
}

