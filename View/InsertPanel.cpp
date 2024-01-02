#include "InsertPanel.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QComboBox>
#include <QString>
#include <QPushButton>
#include <iostream>
#include <sstream>


namespace Sensor {
namespace View {

InsertPanel::InsertPanel(){
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->setAlignment(Qt::AlignCenter | Qt::AlignTop);
    QLabel* typeSensor_label = new QLabel();
    layout->addWidget(typeSensor_label);
    tipo_sensore_combo_box = new QComboBox();
    tipo_sensore_combo_box->addItem("Temperatura");
    tipo_sensore_combo_box->addItem("Luminosità");
    tipo_sensore_combo_box->addItem("Movimento");
    connect(tipo_sensore_combo_box, &QComboBox::currentTextChanged, this, &InsertPanel::refreshTypeSensor);
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
    name_label->setText("Name:");
    id_label->setText("ID:");
    description_label->setText("Description:");
    is_indoor_label->setText("Sensore Indoor/Outdoor");
    is_smart_label->setText("Supporta SmartApp Si/No");
    
    label_specifica_1 = new QLabel();
    label_specifica_1->setText("Min Temperatura:");
    layout->addWidget(label_specifica_1);
    campo_specifico_1 = new QLineEdit();
    layout->addWidget(campo_specifico_1);
    
    label_specifica_2 = new QLabel();
    label_specifica_2->setText("Max Temperatura:");
    layout->addWidget(label_specifica_2);
    campo_specifico_2 = new QLineEdit();
    layout->addWidget(campo_specifico_2);

    QPushButton* add = new QPushButton("Inserisci");
    connect(add, &QPushButton::pressed, this, &InsertPanel::retrieveData);
    layout->addWidget(add);

}

void InsertPanel::refreshTypeSensor(){
    if((tipo_sensore_combo_box->currentText()).toStdString() == "Luminosità"){
        label_specifica_1->setText("Min Luminosità:");
        label_specifica_2->setText("Max Luminosità:");
    }
    else if((tipo_sensore_combo_box->currentText()).toStdString() == "Temperatura"){
        label_specifica_1->setText("Min Temperatura:");
        label_specifica_2->setText("Max Temperatura:");
    }
    else if((tipo_sensore_combo_box->currentText()).toStdString() == "Movimento"){
        label_specifica_1->setText("Sensibilità:");
        label_specifica_2->setText("Raggio di movimento:");
    }

}

void InsertPanel::retrieveData(){
    if(name_text_box->text().toStdString() == "") //aggiungere altri campi
        std::cout << "try again";
    

    //meglio creare un vettore da ritornare con un getter nell'application panel
    //cercare come emettere un segnale EMIT SIGNAL da qui per dire all'application panel di fare la get dei dati
    //emit signal
    std::stringstream ss;
    ss << tipo_sensore_combo_box->currentText().toStdString() << " " << name_text_box->text().toStdString() << " " << id_text_box->text().toStdString() << " "
        << description_text_box->text().toStdString() << " ";
    if(isIndoor_combo_box->currentText().toStdString() == "Indoor")
        ss << true << " ";
    
    std::string type;
    ss >> type;
    std::string name;
    ss >> name;
    std::string id;
    ss >> id;
    std::string description;
    ss >> description;

    std::cout << type << name;// << id << description;
    
}

}
}
