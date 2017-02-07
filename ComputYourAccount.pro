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
    ui/infosPerso.cpp \
    ui/dbConnection.cpp \
    ui/accueil.cpp \
    ui/mainWindow.cpp

HEADERS  += ui/infosPerso.h \
    ui/dbConnection.h \
    ui/accueil.h \
    ui/mainWindow.h

FORMS    += ui/mainwindow.ui\
    ui/infosPerso.ui \
    ui/dbConnection.ui \
    ui/accueil.ui \
    ui/mainwindow.ui\
