QT += core testlib
QT -= gui

CONFIG += c++11

TARGET = Derivative
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    derivative.cpp

HEADERS += \
    derivative.h
