#ifndef VIEW_INSERT_PANEL_H
#define VIEW_INSERT_PANEL_H
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
namespace Sensor{
namespace View {

class InsertPanel : public QWidget{
Q_OBJECT
private:
    QLineEdit* name_text_box;
    QLineEdit* id_text_box;
    QLineEdit* description_text_box;
    QLineEdit* campo_specifico_1;
    QLineEdit* campo_specifico_2;
    QComboBox* isIndoor_combo_box;
    QComboBox* isSmart_combo_box;
    QComboBox* tipo_sensore_combo_box;
    QLabel* label_specifica_1;
    QLabel* label_specifica_2;
    

public:
    InsertPanel();
signals:
    void changeComboBoxTypeSensor();
public slots:
    void refreshTypeSensor();
    void retrieveData();
};   


}
}

#endif