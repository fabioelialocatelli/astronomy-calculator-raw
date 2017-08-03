#-------------------------------------------------
#
# Project created by QtCreator 2014-12-30T16:19:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Argo
TEMPLATE = app


SOURCES += main.cpp\
        interface.cpp \
    Calculator.cpp \
    Climate.cpp \
    Frigid.cpp \
    Temperate.cpp \
    Torrid.cpp \
    Goldilocks.cpp

HEADERS  += interface.h \
    Calculator.h \
    Climate.h \
    Frigid.h \
    Temperate.h \
    Torrid.h \
    Goldilocks.h

FORMS    += interface.ui
