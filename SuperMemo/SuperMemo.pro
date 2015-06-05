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
    settings.cpp \
    AddWordWindow.cpp \
    LearnWindow.cpp \
    MainWindow.cpp

HEADERS  += \
    settings.h \
    AddWordWindow.h \
    LearnWindow.h \
    MainWindow.h

FORMS    += \
    AddWordWindow.ui \
    LearnWindow.ui \
    MainWindow.ui
