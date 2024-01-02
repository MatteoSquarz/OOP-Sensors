#include "InsertWindow.h"
#include "InsertPanel.h"
#include <QVBoxLayout>
#include <QApplication>
#include <QTextStream>
#include <iostream>
namespace Sensor{
namespace View{

InsertWindow::InsertWindow() {
    InsertPanel* inserimento = new InsertPanel();
    setCentralWidget(inserimento);
    
}

}
}