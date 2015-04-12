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
    learnwindow.cpp

HEADERS  += mainwindow.h \
    settings.h \
    learnwindow.h

FORMS    += mainwindow.ui \
    learnwindow.ui
