#include "ModifyWindow.h"
#include "ModifyWindowVisitor.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QComboBox>
#include <QMessageBox>
#include <QString>
#include <QPushButton>
#include <iostream>


namespace Sensor {
namespace View {

ModifyWindow::ModifyWindow(AbstractSensor* sensor): sensor(sensor){
    this->setModal(true);
    this->setAttribute(Qt::WA_DeleteOnClose);
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->setAlignment(Qt::AlignCenter | Qt::AlignCenter);

    QLabel* typeSensor_label = new QLabel();
    layout->addWidget(typeSensor_label);
    type_sensor = new QLineEdit();
    type_sensor->setDisabled(true);
    layout->addWidget(type_sensor);
    QLabel* name_label = new QLabel();
    layout->addWidget(name_label);
    name_text_box = new QLineEdit();
    name_text_box->setText(QString::fromStdString(sensor->getName()));
    layout->addWidget(name_text_box);
    QLabel* id_label = new QLabel();
    layout->addWidget(id_label);
    id_text_box = new QLineEdit();
    id_text_box->setText(QString::fromStdString(sensor->getID()));
    layout->addWidget(id_text_box);
    QLabel* brand_label = new QLabel();
    layout->addWidget(brand_label);
    brand_text_box = new QLineEdit();
    brand_text_box->setText(QString::fromStdString(sensor->getBrand()));
    layout->addWidget(brand_text_box);
    QLabel* is_smart_label = new QLabel();
    layout->addWidget(is_smart_label);
    isSmart_combo_box = new QComboBox();
    isSmart_combo_box->addItem("Si");
    isSmart_combo_box->addItem("No");
    sensor->isSmart() ? isSmart_combo_box->setCurrentIndex(0) : isSmart_combo_box->setCurrentIndex(1);
    layout->addWidget(isSmart_combo_box);
    QLabel* is_indoor_label = new QLabel();
    layout->addWidget(is_indoor_label);
    isIndoor_combo_box = new QComboBox();
    isIndoor_combo_box->addItem("Indoor");
    isIndoor_combo_box->addItem("Outdoor");
    sensor->isIndoor() ? isIndoor_combo_box->setCurrentIndex(0) : isIndoor_combo_box->setCurrentIndex(1);
    layout->addWidget(isIndoor_combo_box);
    typeSensor_label->setText("Tipo sensore:");
    name_label->setText("Nome:");
    id_label->setText("ID:");
    brand_label->setText("Brand:");
    is_indoor_label->setText("Sensore Indoor/Outdoor");
    is_smart_label->setText("Supporta SmartApp Si/No");
    
    label_specifica_1 = new QLabel();
    layout->addWidget(label_specifica_1);
    campo_specifico_1 = new QLineEdit();
    layout->addWidget(campo_specifico_1);
    
    label_specifica_2 = new QLabel();
    layout->addWidget(label_specifica_2);
    campo_specifico_2 = new QLineEdit();
    layout->addWidget(campo_specifico_2);

    ModifyWindowVisitor visitor;
    sensor->accept(visitor);
    std::vector<QLabel*> widgets = visitor.getWidgets();
    label_specifica_1->setText(widgets[0]->text());
    label_specifica_2->setText(widgets[1]->text());
    campo_specifico_1->setText(widgets[2]->text());
    campo_specifico_2->setText(widgets[3]->text());
    type_sensor->setText(widgets[4]->text());
    QPushButton* modify = new QPushButton("Modifica");
    connect(modify, &QPushButton::pressed, this, &ModifyWindow::retrieveData);
    layout->addWidget(modify);
    this->setLayout(layout);

}


void ModifyWindow::retrieveData(){
    if(name_text_box->text().toStdString() == "" || id_text_box->text().toStdString() == "" || brand_text_box->text().toStdString() == "" ||
        campo_specifico_1->text().toStdString() == "" || campo_specifico_2->text().toStdString() == ""){
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Attenzione inserire tutti i campi!");
        messageBox.setFixedSize(500,200);
    }
    else{
        std::vector<std::string> data;
        data.push_back(name_text_box->text().toStdString());
        data.push_back(id_text_box->text().toStdString());
        data.push_back(brand_text_box->text().toStdString());
        data.push_back(isSmart_combo_box->currentText().toStdString());
        data.push_back(isIndoor_combo_box->currentText().toStdString());
        data.push_back(campo_specifico_1->text().toStdString());
        data.push_back(campo_specifico_2->text().toStdString());
        emit modifySensor(data);
    }    
}

}
}
