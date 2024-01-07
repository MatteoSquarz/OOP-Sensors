#ifndef VIEW_CHART_PANEL_H
#define VIEW_CHART_PANEL_H
#include <QWidget>
#include <QChart>
#include <QChartView>
#include "../SensorObserverInterface.h"
namespace Sensor{
namespace View {

class ChartPanel : public QWidget, public SensorObserverInterface{
Q_OBJECT
private:
    QChart* chart;
    QChartView* chartView;

signals:
    void simulation();

public:
    ChartPanel(Sensor::AbstractSensor*, QWidget* =0);
    void notify(Sensor::AbstractSensor*) override;
    void refresh(Sensor::AbstractSensor*);
};   


}
}

#endif