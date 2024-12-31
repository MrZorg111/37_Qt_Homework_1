#include <QApplication>
#include "calculator.h"
#include "./ui_calculator.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator window(nullptr);
    Ui::Calculator calc;
    calc.setupUi(&window);

    window.lineEdit = calc.lineEdit;
    window.lineEdit_2 = calc.lineEdit_2;
    window.lineEdit_3 = calc.lineEdit_3;


    window.show();
    return a.exec();
}
