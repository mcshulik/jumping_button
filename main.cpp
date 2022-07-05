#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //QPushButton my_button("Click on me");
    //my_button.resize(200, 100);
    //my_button.setFont(QFont("Times", 18, QFont::Bold));
    //QObject::connect(&my_button, SIGNAL(clicked()), &a, SLOT(quit()));
    //my_button.show();
    return a.exec();
}
