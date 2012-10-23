#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    // QApplication is basically an outer event loop that handles links between
    // system/application events and event handlers. It is also responsible for redrawing
    // with all the consequences
    QApplication a(argc, argv);

    MainWindow w;
    // The application will happily run without this. Just without any visual interface ;]
    w.show();
    
    // This starts the event loop
    return a.exec();
}
