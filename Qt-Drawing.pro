
QT       += core gui widgets xml printsupport

TARGET = Qt-Drawing
TEMPLATE = app
DESTDIR = $$PWD/bin


DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += c++11


SOURCES += \
        items/circuitellipseobject.cpp \
        items/circuitlineobject.cpp \
        items/circuitrectobject.cpp \
        items/circuittextobject.cpp \
        items/circuitbaseobject.cpp \
        scenes/circuitbasescene.cpp \
        views/circuitbaseview.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        items/circuitellipseobject.h \
        items/circuitlineobject.h \
        items/circuitrectobject.h \
        items/circuittextobject.h \
        items/circuitbaseobject.h \
        scenes/circuitbasescene.h \
        views/circuitbaseview.h \
        mainwindow.h

FORMS += \
        mainwindow.ui

INCLUDEPATH += $$PWD/views \
               $$PWD/items \
               $$PWD/scenes

RESOURCES += \
    resources.qrc

RC_ICONS = logo.ico
