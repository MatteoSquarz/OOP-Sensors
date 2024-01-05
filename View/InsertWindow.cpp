#include "InsertWindow.h"
#include <QVBoxLayout>
#include <QComboBox>
#include <QMessageBox>
#include <QPushButton>
#include <QApplication>
#include <QTextStream>
#include <iostream>
namespace Sensor{
namespace View{

InsertWindow::InsertWindow() {
    this->setModal(true);
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->setAlignment(Qt::AlignCenter | Qt::AlignCenter);
    QLabel* typeSensor_label = new QLabel();
    layout->addWidget(typeSensor_label);
    tipo_sensore_combo_box = new QComboBox();
    tipo_sensore_combo_box->addItem("Temperatura");
    tipo_sensore_combo_box->addItem("Luminosità");
    tipo_sensore_combo_box->addItem("Movimento");
    connect(tipo_sensore_combo_box, &QComboBox::currentTextChanged, this, &InsertWindow::refreshTypeSensor);
    layout->addWidget(tipo_sensore_combo_box);
    QLabel* name_label = new QLabel();
    layout->addWidget(name_label);
    name_text_box = new QLineEdit();
    layout->addWidget(name_text_box);
    QLabel* id_label = new QLabel();
    layout->addWidget(id_label);
    id_text_box = new QLineEdit();
    layout->addWidget(id_text_box);
    QLabel* description_label = new QLabel();
    layout->addWidget(description_label);
    description_text_box = new QLineEdit();
    layout->addWidget(description_text_box);
    QLabel* is_smart_label = new QLabel();
    layout->addWidget(is_smart_label);
    isSmart_combo_box = new QComboBox();
    isSmart_combo_box->addItem("Si");
    isSmart_combo_box->addItem("No");
    layout->addWidget(isSmart_combo_box);
    QLabel* is_indoor_label = new QLabel();
    layout->addWidget(is_indoor_label);
    isIndoor_combo_box = new QComboBox();
    isIndoor_combo_box->addItem("Indoor");
    isIndoor_combo_box->addItem("Outdoor");
    layout->addWidget(isIndoor_combo_box);
    typeSensor_label->setText("Tipo sensore:");
    name_label->setText("Nome:");
    id_label->setText("ID:");
    description_label->setText("Descrizione:");
    is_indoor_label->setText("Sensore Indoor/Outdoor");
    is_smart_label->setText("Supporta SmartApp Si/No");
    
    label_specifica_1 = new QLabel();
    label_specifica_1->setText("Min Temperatura: (°C)");
    layout->addWidget(label_specifica_1);
    campo_specifico_1 = new QLineEdit();
    layout->addWidget(campo_specifico_1);
    
    label_specifica_2 = new QLabel();
    label_specifica_2->setText("Max Temperatura: (°C)");
    layout->addWidget(label_specifica_2);
    campo_specifico_2 = new QLineEdit();
    layout->addWidget(campo_specifico_2);

    QPushButton* add = new QPushButton("Inserisci");
    connect(add, &QPushButton::pressed, this, &InsertWindow::retrieveData);
    layout->addWidget(add);
    this->setLayout(layout);
}

void InsertWindow::refreshTypeSensor(){
    if((tipo_sensore_combo_box->currentText()).toStdString() == "Luminosità"){
        label_specifica_1->setText("Min Luminosità: (lux)");
        label_specifica_2->setText("Max Luminosità: (lux)");
    }
    else if((tipo_sensore_combo_box->currentText()).toStdString() == "Temperatura"){
        label_specifica_1->setText("Min Temperatura: (°C)");
        label_specifica_2->setText("Max Temperatura: (°C)");
    }
    else if((tipo_sensore_combo_box->currentText()).toStdString() == "Movimento"){
        label_specifica_1->setText("Sensibilità:");
        label_specifica_2->setText("Raggio di movimento: (m)");
    }

}

void InsertWindow::retrieveData(){
    if(name_text_box->text().toStdString() == "" || id_text_box->text().toStdString() == "" || description_text_box->text().toStdString() == "" ||
        campo_specifico_1->text().toStdString() == "" || campo_specifico_2->text().toStdString() == ""){
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Attenzione inserire tutti i campi!");
        messageBox.setFixedSize(500,200);
    }
    else{
        std::vector<std::string> data;
        data.push_back(tipo_sensore_combo_box->currentText().toStdString());
        data.push_back(name_text_box->text().toStdString());
        data.push_back(id_text_box->text().toStdString());
        data.push_back(description_text_box->text().toStdString());
        data.push_back(isSmart_combo_box->currentText().toStdString());
        data.push_back(isIndoor_combo_box->currentText().toStdString());
        data.push_back(campo_specifico_1->text().toStdString());
        data.push_back(campo_specifico_2->text().toStdString());
        emit addSensor(data);
    }

}


}
}