#-------------------------------------------------
#
# Project created by QtCreator 2016-12-12T12:04:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myQSS
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    loglatedit.cpp

HEADERS  += mainwindow.h \
    loglatedit.h \
    ui_loglatedit.h

FORMS    += mainwindow.ui

RESOURCES += \
    myqss.qrc
