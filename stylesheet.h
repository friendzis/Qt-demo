#ifndef STYLESHEET_H
#define STYLESHEET_H

#include <QFile>
#include <QString>
#include <QTextStream>
#include <QApplication>

class Stylesheet : public QFile
{
public:
    Stylesheet(QString path);
    bool loadStylesheet(QApplication &a);
};

#endif // STYLESHEET_H
