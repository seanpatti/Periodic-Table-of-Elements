#-------------------------------------------------
#
# Project created by QtCreator 2016-01-23T19:51:14
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Periodic_Table
TEMPLATE = app


SOURCES += main.cpp\
    mainwindow.cpp \
    elemDialog.cpp \
    aboutDialog.cpp

HEADERS  += \
    mainwindow.h \
    elemDialog.h \
    aboutDialog.h

FORMS    += \
    aboutDialog.ui \
    elemDialog.ui \
    mainwindow.ui

RESOURCES += \
    pt_resources.qrc

RC_FILE = icon.rc
