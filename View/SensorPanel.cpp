#include "../AbstractSensor.h"
#include "InfoPanel.h"
#include "SensorPanel.h"
#include "ChartPanel.h"
#include <QVBoxLayout>
#include <QPushButton>

namespace Sensor {
namespace View {

SensorPanel::SensorPanel(Sensor::AbstractSensor& sensor, QWidget* parent): QWidget(parent){
    QVBoxLayout* layout = new QVBoxLayout(this);
    //layout->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    infoPanel = new InfoPanel(sensor);
    chartPanel = new ChartPanel(sensor);
    layout->addWidget(infoPanel);
    layout->addWidget(chartPanel);
}

}
}