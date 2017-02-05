#-------------------------------------------------
#
# Project created by QtCreator 2017-02-05T17:00:45
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ComputYourAccount
TEMPLATE = app


SOURCES += main.cpp\
        ui/mainwindow.cpp\
        ui/infosPerso.cpp

HEADERS  += ui/mainwindow.h\
    ui/infosPerso.h

FORMS    += ui/mainwindow.ui\
    ui/infosPerso.ui
