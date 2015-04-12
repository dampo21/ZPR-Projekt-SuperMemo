#-------------------------------------------------
#
# Project created by QtCreator 2015-04-12T16:06:27
#
#-------------------------------------------------

QT       += core gui
QT      += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SuperMemo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    settings.cpp \
    database.cpp

HEADERS  += mainwindow.h \
    settings.h \
    database.h

FORMS    += mainwindow.ui
