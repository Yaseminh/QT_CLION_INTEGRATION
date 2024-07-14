//
// Created by yasemin on 14/07/2024.
//

#ifndef TESTUI_H
#define TESTUI_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class TESTUI; }
QT_END_NAMESPACE

class TESTUI : public QWidget {
Q_OBJECT

public:
    explicit TESTUI(QWidget *parent = nullptr);
    ~TESTUI() override;

private:
    Ui::TESTUI *ui;
};


#endif //TESTUI_H
