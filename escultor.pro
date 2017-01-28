#-------------------------------------------------
#
# Project created by QtCreator 2013-05-29T15:07:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = escultor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    painel.cpp \
    escultor.cpp \
    cores.cpp \
    guia.cpp \
    tutorial.cpp \
    ajuda.cpp \
    email.cpp \
    sobre.cpp \
    novo.cpp

HEADERS  += mainwindow.h \
    painel.h \
    voxel.h \
    escultor.h \
    cores.h \
    guia.h \
    tutorial.h \
    ajuda.h \
    email.h \
    sobre.h \
    novo.h

FORMS    += mainwindow.ui \
    guia.ui \
    ajuda.ui \
    tutorial.ui \
    email.ui \
    sobre.ui \
    novo.ui

RESOURCES += \
    recursos.qrc

OTHER_FILES +=
