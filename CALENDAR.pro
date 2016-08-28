
#-------------------------------------------------
#
# Project created by QtCreator 2016-08-24T21:39:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CALENDAR
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    notedialog.cpp \
    mycalendar.cpp \
    myevent.cpp \
    user.cpp \
    database.cpp \
    displaylistwidget.cpp

HEADERS  += \
    notedialog.h \
    mycalendar.h \
    mycalendar.h \
    widget.h \
    myevent.h \
    user.h \
    database.h \
    displaylistwidget.h

FORMS    += widget.ui \
    notedialog.ui

TRANSLATIONS += testQtCreator_english.ts

DESTDIR     += $$PWD/bin
OBJECTS_DIR += $$PWD/tmp
MOC_DIR     += $$PWD/tmp
RCC_DIR     += $$PWD/tmp

