#-------------------------------------------------
#
# Project created by QtCreator 2012-10-23T00:44:05
#
#-------------------------------------------------

QT       += core gui

TARGET = demo
TEMPLATE = app

TRANSLATIONS = demo_en.ts\
demo_lt.ts

SOURCES += src/main.cpp\
        src/gui/mainwindow.cpp \
    src/gui/controlgroup.cpp \
    src/util/stylesheet.cpp \
    src/data/dataengine.cpp \
    src/data/TableModel.cpp

HEADERS  += src/gui/mainwindow.h \
    src/gui/controlgroup.h \
    src/util/stylesheet.h \
    src/data/dataengine.h \
    src/data/TableModel.h

RESOURCES += \
    resources.qrc
