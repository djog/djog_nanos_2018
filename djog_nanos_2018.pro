#-------------------------------------------------
#
# Project created by QtCreator 2019-02-10T19:01:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = djog_nanos_2018
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        hoofd_scherm.cpp \
    kamer_richel.cpp \
    kamer_quinn.cpp \
    kamer_soort.cpp

HEADERS += \
        hoofd_scherm.h \
    kamer_richel.h \
    kamer_quinn.h \
    kamer_soort.h

FORMS += \
    hoofd_scherm.ui \
    kamer_quinn.ui \
    kamer_richel.ui

RESOURCES += \
    djog_nanos_2018.qrc
