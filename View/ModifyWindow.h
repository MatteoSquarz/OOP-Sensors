#ifndef VIEW_MODIFY_WINDOW_H
#define VIEW_MODIFY_WINDOW_H
#include <QWidget>
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include "../AbstractSensor.h"
namespace Sensor{
namespace View {

class ModifyWindow : public QDialog{
Q_OBJECT
private:
    QLineEdit* name_text_box;
    QLineEdit* id_text_box;
    QLineEdit* brand_text_box;
    QLineEdit* campo_specifico_1;
    QLineEdit* campo_specifico_2;
    QComboBox* isIndoor_combo_box;
    QComboBox* isSmart_combo_box;
    QLineEdit* type_sensor;
    QLabel* label_specifica_1;
    QLabel* label_specifica_2;
    AbstractSensor* sensor;
    
public:
    ModifyWindow(AbstractSensor*);
signals:
    void modifySensor(std::vector<std::string>);
public slots:
    void retrieveData();
};   


}
}

#endif