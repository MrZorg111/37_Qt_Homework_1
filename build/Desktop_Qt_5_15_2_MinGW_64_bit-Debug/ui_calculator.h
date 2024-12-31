/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_12;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(605, 573);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lineEdit_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(15);
        pushButton_13->setFont(font);
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 85, 0);\n"
"color:rgb(255, 255, 255)"));

        horizontalLayout->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 85, 0);\n"
"color:rgb(255, 255, 255)"));

        horizontalLayout->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 85, 0);\n"
"color:rgb(255, 255, 255)"));

        horizontalLayout->addWidget(pushButton_15);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setFont(font);
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 85, 0);\n"
"color:rgb(255, 255, 255)"));

        horizontalLayout->addWidget(pushButton_12);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_6, 3, 2, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_7, 6, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy2.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy2);
        pushButton_11->setFont(font);
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color:rgb(170, 0, 0);\n"
"color:rgb(0, 0, 0)"));

        gridLayout->addWidget(pushButton_11, 7, 2, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_9, 6, 2, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_8, 6, 1, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy2.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy2);
        pushButton_10->setFont(font);
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_10, 7, 0, 1, 1);

        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy2.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy2);
        pushButton_16->setFont(font);
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 75, 75);\n"
"color:rgb(255, 255, 255)"));

        gridLayout->addWidget(pushButton_16, 7, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 605, 21));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);
        QObject::connect(pushButton, SIGNAL(clicked()), Calculator, SLOT(num1()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Calculator, SLOT(num2()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Calculator, SLOT(num3()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), Calculator, SLOT(num4()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), Calculator, SLOT(num5()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), Calculator, SLOT(num6()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), Calculator, SLOT(num7()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), Calculator, SLOT(num8()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), Calculator, SLOT(num9()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), Calculator, SLOT(num0()));
        QObject::connect(pushButton_13, SIGNAL(clicked()), Calculator, SLOT(sum()));
        QObject::connect(pushButton_14, SIGNAL(clicked()), Calculator, SLOT(diff()));
        QObject::connect(pushButton_15, SIGNAL(clicked()), Calculator, SLOT(multy()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), Calculator, SLOT(div()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), Calculator, SLOT(equal()));
        QObject::connect(pushButton_16, SIGNAL(clicked()), Calculator, SLOT(cpoint()));

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        pushButton->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Calculator", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
