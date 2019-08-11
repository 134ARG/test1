#include "mainwindow.h"
#include <QApplication>
#include <unistd.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //for(int i = 0; i <= 10; i++){
    //   w.display_number(i);
    //    sleep(1);
    //}

    return a.exec();
}
