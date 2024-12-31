#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    QLineEdit* lineEdit = nullptr;
    QLineEdit* lineEdit_2 = nullptr;
    QLineEdit* lineEdit_3 = nullptr;
    void clear();
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

public slots:
    void num0();
    void num1();
    void num2();
    void num3();
    void num4();
    void num5();
    void num6();
    void num7();
    void num8();
    void num9();

    void cpoint();

    void sum();
    void diff();
    void multy();
    void div();

    void equal();



private:
    bool flag = false;
    int activity = 0;
    Ui::Calculator *ui;
};
#endif // CALCULATOR_H
