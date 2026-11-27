QT += core gui widgets

CONFIG += c++17
TARGET = sonic1903
TEMPLATE = app

INCLUDEPATH += include

SOURCES += \
    src/main.cpp \
    src/entidadfisica.cpp \
    src/excepcionjuego.cpp

HEADERS += \
    include/entidadfisica.h \
    include/excepcionjuego.h
