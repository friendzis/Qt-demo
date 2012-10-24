#include "stylesheet.h"

Stylesheet::Stylesheet(QString path)
    : QFile(path)
{
}

bool Stylesheet::loadStylesheet(QApplication &a)
{
    QString style;
    if (this->open(QIODevice::Text | QIODevice::ReadOnly))
    {
        // QFile does not provide a direct way to get QString, but it provides us
        // streams, which can be manipulated
        QTextStream text(this);

        // Now we can just read everything from the stream and store as QString
        style = text.readAll();

        // And apply to our application
        a.setStyleSheet(style);

        return true;
    }
    else
        return false;
}
