#ifndef INTERFACE_H
#define INTERFACE_H

#include <QLineEdit>
#include <QMainWindow>
#include <QString>

namespace Ui {
class Interface;
}

class Interface : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interface(QWidget *parent = 0);
    ~Interface();

    void exception_Management(QLineEdit* inputField, QLineEdit* outputField, char const* exception);
    void exception_Management(QLineEdit* inputField, QLineEdit* inputField1, QLineEdit* outputField, char const* exception);
    void exception_Management(QLineEdit* inputField, QLineEdit* outputField, QLineEdit* outputField1, char const* exception, double* pointedArray);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();\

private:
    Ui::Interface *ui;
};

#endif // INTERFACE_H
