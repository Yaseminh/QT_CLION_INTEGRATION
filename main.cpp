#include <QApplication>
#include <QPushButton>

#include "Form Files/LOAD_SCREEN/testui.h"

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    TESTUI w;

    w.show();
    return a.exec();
}
