#include <QMessageBox>
#include <QDebug>
#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::num0() {
    if(!flag) {
        lineEdit->setText(lineEdit->text() + "0");
    }
    else {
        lineEdit_2->setText(lineEdit_2->text() + "0");
    }
}

void Calculator::num1() {
    if(!flag) {
        lineEdit->setText(lineEdit->text() + "1");
    }
    else {
        lineEdit_2->setText(lineEdit_2->text() + "1");
    }
}

void Calculator::num2() {
    if(!flag) {
        lineEdit->setText(lineEdit->text() + "2");
    }
    else {
        lineEdit_2->setText(lineEdit_2->text() + "2");
    }
}

void Calculator::num3() {
    if(!flag) {
        lineEdit->setText(lineEdit->text() + "3");
    }
    else {
        lineEdit_2->setText(lineEdit_2->text() + "3");
    }
}

void Calculator::num4() {
    if(!flag) {
        lineEdit->setText(lineEdit->text() + "4");
    }
    else {
        lineEdit_2->setText(lineEdit_2->text() + "4");
    }
}

void Calculator::num5() {
    if(!flag) {
        lineEdit->setText(lineEdit->text() + "5");
    }
    else {
        lineEdit_2->setText(lineEdit_2->text() + "5");
    }
}

void Calculator::num6() {
    if(!flag) {
        lineEdit->setText(lineEdit->text() + "6");
    }
    else {
        lineEdit_2->setText(lineEdit_2->text() + "6");
    }
}

void Calculator::num7() {
    if(!flag) {
        lineEdit->setText(lineEdit->text() + "7");
    }
    else {
        lineEdit_2->setText(lineEdit_2->text() + "7");
    }
}

void Calculator::num8() {
    if(!flag) {
        lineEdit->setText(lineEdit->text() + "8");
    }
    else {
        lineEdit_2->setText(lineEdit_2->text() + "8");
    }
}

void Calculator::num9() {
    if(!flag) {
        lineEdit->setText(lineEdit->text() + "9");
    }
    else {
        lineEdit_2->setText(lineEdit_2->text() + "9");
    }
}

void Calculator::cpoint() {
    if(!flag) {
        lineEdit->setText(lineEdit->text() + ".");
    }
    else {
        lineEdit_2->setText(lineEdit_2->text() + ".");
    }
}

void Calculator::sum() {
    flag = !flag;
    activity = 1;
}

void Calculator::diff() {
    flag = !flag;
    activity = 2;
}

void Calculator::multy() {
    flag = !flag;
    activity = 3;
}

void Calculator::div() {
    flag = !flag;
    activity = 4;
}

void Calculator::equal() {
    QString result;
    switch(activity) {
        case 1: {
            result = QString::number(lineEdit->text().toDouble() + lineEdit_2->text().toDouble());
            lineEdit_3->setText(lineEdit_3->text() + result);
            break;
        }
        case 2: {
            result = QString::number(lineEdit->text().toDouble() - lineEdit_2->text().toDouble());
            lineEdit_3->setText(lineEdit_3->text() + result);
            break;
        }
        case 3: {
            result = QString::number(lineEdit->text().toDouble() * lineEdit_2->text().toDouble());
            lineEdit_3->setText(lineEdit_3->text() + result);
            break;
        }
        case 4: {
            if(lineEdit_2->text().toDouble() != 0) {
            result = QString::number(lineEdit->text().toDouble() / lineEdit_2->text().toDouble());
            lineEdit_3->setText(lineEdit_3->text() + result);
            }
            else {
                QMessageBox::critical(this, "Ошибка", "На ноль делить нельзя!");
                clear();
            }
            break;
        }
    }
    flag = !flag;
    int answer = QMessageBox::question(this, "", "Желаете продолжить?");
    if(answer == QMessageBox::Yes) {
        clear();
    }
    else {
        QMessageBox::information(this, "Выход", "Работа программы окончена!");
        this->close();
    }
}

void Calculator::clear() {
    lineEdit->clear();
    lineEdit_2->clear();
    lineEdit_3->clear();
}
