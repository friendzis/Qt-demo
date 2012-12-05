#include <QtGui/QApplication>

#include <QString>
#include <QLocale>
#include <QTranslator>

#include "src/gui/mainwindow.h"
#include "src/util/stylesheet.h"

int main(int argc, char *argv[])
{
    // QApplication is basically an outer event loop that handles links between
    // system/application events and event handlers. It is also responsible for redrawing
    // with all the consequences
    QApplication a(argc, argv);

    // Preceding a path by a colon informs Qt to look for a file in resource system
    // instead of actual filesystem
    Stylesheet * css = new Stylesheet(":/style.css");
    css->loadStylesheet(a);

    QLocale lc(QLocale::Lithuanian);// = QLocale::Lithuania;

    QTranslator ts;
    ts.load(QString(":/demo_lt"));
    a.installTranslator(&ts);

    MainWindow w;
    // The application will happily run without this. Just without any visual interface ;]
    w.show();

    // This starts the event loop
    return a.exec();
}
