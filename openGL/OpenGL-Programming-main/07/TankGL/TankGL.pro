#-------------------------------------------------
#
# Project created by QtCreator 2012-11-10T17:33:59
#
#-------------------------------------------------

QT          += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets openglwidgets

TARGET = TankGL
TEMPLATE = app

SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

Config += c++17
        windows {LIBS += -lopengl32 -LC:\Qt\6.3.1\mingw_64\lib}
 LIBS+=-lglu32
