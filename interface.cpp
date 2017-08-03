#include "interface.h"
#include "ui_interface.h"

// Class Headers
#include "Calculator.h"
#include "Frigid.h"
#include "Goldilocks.h"
#include "Temperate.h"
#include "Torrid.h"

// QT Library Headers
#include <QString>

Interface::Interface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interface)
{
    ui->setupUi(this);
    this->setFixedSize(1390, 510);
}

Calculator* ptrcalculator = new Calculator();

Interface::~Interface()
{
    delete ui;
    delete ptrcalculator;
}

void Interface::exception_Management(QLineEdit* inputField, QLineEdit* outputField, char const* exception){
    if(inputField->text() == NULL) outputField->setText(exception);
}

void Interface::exception_Management(QLineEdit* inputField, QLineEdit* inputField1, QLineEdit* outputField, char const* exception){
    if(inputField->text() == NULL || inputField1->text() == NULL) outputField->setText(exception);
}

void Interface::exception_Management(QLineEdit* inputField, QLineEdit* outputField, QLineEdit* outputField1, char const* exception, double* pointedArray){
    if(inputField->text() == NULL || pointedArray[0] == 0 || pointedArray[1] == 0 ){
        outputField->setText(exception);
        outputField1->setText(exception);
    }
}

void Interface::on_pushButton_clicked()
{
    try{
        ui->lineEdit_15->setText(QString::number(ptrcalculator->absoluteMagnitude(ui->lineEdit->text().toDouble(), ui->lineEdit_8->text().toDouble()), 'f', 4));
        throw "Illegal Submission";
    }
    catch (char const* error){
        this->exception_Management(ui->lineEdit, ui->lineEdit_8, ui->lineEdit_15, error);
    }
}

void Interface::on_pushButton_2_clicked()
{
    try{
        ui->lineEdit_16->setText(QString::number(ptrcalculator->apparentMagnitude(ui->lineEdit_2->text().toDouble(), ui->lineEdit_9->text().toDouble()), 'f', 4));
        throw "Illegal Submission";
    }
    catch (char const* error){
        this->exception_Management(ui->lineEdit_2, ui->lineEdit_9, ui->lineEdit_16, error);
    }

}

void Interface::on_pushButton_3_clicked()
{
    try{
        ui->lineEdit_17->setText(QString::number(ptrcalculator->solarDiameter(ui->lineEdit_3->text().toDouble(), ui->lineEdit_10->text().toDouble()), 'f', 4));
        throw "Illegal Submission";
    }
    catch (char const* error){
        this->exception_Management(ui->lineEdit_3, ui->lineEdit_10, ui->lineEdit_17, error);
    }
}

void Interface::on_pushButton_4_clicked()
{
    try{
        ui->lineEdit_11->setText(QString::number(ptrcalculator->stellarLuminosity(0, ui->lineEdit_4->text().toDouble()), 'f', 4));
        throw "Illegal Submission";
    }
    catch (char const* error){
        this->exception_Management(ui->lineEdit_4, ui->lineEdit_11, error);
    }
}

void Interface::on_pushButton_5_clicked()
{
    try{
        ui->lineEdit_12->setText(QString::number(ptrcalculator->stellarLuminosity(1, ui->lineEdit_5->text().toDouble()), 'f', 4));
        throw "Illegal Submission";
    }
    catch (char const* error){
        this->exception_Management(ui->lineEdit_5, ui->lineEdit_12, error);
    }
}

void Interface::on_pushButton_6_clicked()
{
    try{
        ui->lineEdit_13->setText(QString::number(ptrcalculator->distanceConverter(0, ui->lineEdit_6->text().toDouble()), 'f', 4));
        throw "Illegal Submission";
    }
    catch (char const* error){
        this->exception_Management(ui->lineEdit_6, ui->lineEdit_13, error);
    }
}

void Interface::on_pushButton_7_clicked()
{
    Goldilocks* ptrgoldilocks = new Goldilocks();
    double* goldilocks = ptrgoldilocks->boundaries(ui->lineEdit_12->text().toDouble());

    try{
        ui->lineEdit_7->setText(QString::number(goldilocks[0], 'f', 4));
        ui->lineEdit_14->setText(QString::number(goldilocks[1], 'f', 4));
        throw "Illegal Submission";
    }
    catch (char const* error){
        this->exception_Management(ui->lineEdit_12, ui->lineEdit_7, ui->lineEdit_14, error, goldilocks);
    }

    delete goldilocks;
    delete ptrgoldilocks;
}

void Interface::on_pushButton_8_clicked()
{
    try{
        ui->lineEdit_13->setText(QString::number(ptrcalculator->distanceConverter(1, ui->lineEdit_6->text().toDouble()), 'f', 4));
        throw "Illegal Submission";
    }
    catch (char const* error){
        this->exception_Management(ui->lineEdit_6, ui->lineEdit_13, error);
    }
}

void Interface::on_comboBox_currentIndexChanged(int index)
{
    try{

        switch(index){
        case 0:
        {
            Frigid* ptrfrigid = new Frigid();
            ui->lineEdit_18->setText(QString::number(ptrfrigid->conditions(ui->lineEdit_7->text().toDouble(), ui->lineEdit_14->text().toDouble()), 'f', 4));
            throw "Illegal Submission";
            delete ptrfrigid;
            break;
        }
        case 1:
        {
            Temperate* ptrtemperate = new Temperate();
            ui->lineEdit_18->setText(QString::number(ptrtemperate->conditions(ui->lineEdit_7->text().toDouble(), ui->lineEdit_14->text().toDouble()), 'f', 4));
            throw "Illegal Submission";
            delete ptrtemperate;
            break;
        }
        case 2:
        {
            Torrid* ptrtorrid = new Torrid();
            ui->lineEdit_18->setText(QString::number(ptrtorrid->conditions(ui->lineEdit_7->text().toDouble(), ui->lineEdit_14->text().toDouble()), 'f', 4));
            throw "Illegal Submission";
            delete ptrtorrid;
            break;
        }
        }
    }
    catch (char const* error){
        this->exception_Management(ui->lineEdit_7, ui->lineEdit_14, ui->lineEdit_18, error);
    }
}

void Interface::on_pushButton_9_clicked()
{
    if(ui->lineEdit_6->text() == NULL && ui->lineEdit_13->text() == NULL) ui->lineEdit_13->setText("Pointless Operation");
    else {
        QString additional = ui->lineEdit_6->text();
        ui->lineEdit_6->setText(ui->lineEdit_13->text());
        ui->lineEdit_13->setText(additional);
    }
}

void Interface::on_pushButton_10_clicked()
{
    ui->comboBox->setCurrentIndex(0);
    ui->lineEdit->setText(NULL);
    ui->lineEdit_2->setText(NULL);
    ui->lineEdit_3->setText(NULL);
    ui->lineEdit_4->setText(NULL);
    ui->lineEdit_5->setText(NULL);
    ui->lineEdit_6->setText(NULL);
    ui->lineEdit_7->setText(NULL);
    ui->lineEdit_8->setText(NULL);
    ui->lineEdit_9->setText(NULL);
    ui->lineEdit_10->setText(NULL);
    ui->lineEdit_11->setText(NULL);
    ui->lineEdit_12->setText(NULL);
    ui->lineEdit_13->setText(NULL);
    ui->lineEdit_14->setText(NULL);
    ui->lineEdit_15->setText(NULL);
    ui->lineEdit_16->setText(NULL);
    ui->lineEdit_17->setText(NULL);
    ui->lineEdit_18->setText(NULL);
}
