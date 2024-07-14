//
// Created by yasemin on 14/07/2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_TESTUI.h" resolved

#include "testui.h"
#include "ui_TESTUI.h"


TESTUI::TESTUI(QWidget *parent) :
    QWidget(parent), ui(new Ui::TESTUI) {
    ui->setupUi(this);
    // random number for label_3
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    // QLabel
    ui->label_3->setText(QString::number(std::rand() % 100)); // 0-99
    ui->label_4->setText(QString::number(std::rand() % 100)); // 0-99
}

TESTUI::~TESTUI() {
    delete ui;
}
