/********************************************************************************
** Form generated from reading UI file 'testui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTUI_H
#define UI_TESTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TESTUI
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *TESTUI)
    {
        if (TESTUI->objectName().isEmpty())
            TESTUI->setObjectName("TESTUI");
        TESTUI->resize(400, 300);
        label = new QLabel(TESTUI);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 40, 49, 16));
        label_2 = new QLabel(TESTUI);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 110, 81, 21));
        label_3 = new QLabel(TESTUI);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 40, 49, 16));
        label_4 = new QLabel(TESTUI);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 110, 49, 16));

        retranslateUi(TESTUI);

        QMetaObject::connectSlotsByName(TESTUI);
    } // setupUi

    void retranslateUi(QWidget *TESTUI)
    {
        TESTUI->setWindowTitle(QCoreApplication::translate("TESTUI", "TESTUI", nullptr));
        label->setText(QCoreApplication::translate("TESTUI", "LOAD", nullptr));
        label_2->setText(QCoreApplication::translate("TESTUI", "TEMPERATURE", nullptr));
        label_3->setText(QCoreApplication::translate("TESTUI", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("TESTUI", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TESTUI: public Ui_TESTUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTUI_H
