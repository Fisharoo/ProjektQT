#-------------------------------------------------
#
# Project created by QtCreator 2014-05-24T18:41:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sorter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sorting.cpp \
    quicksort.cpp \
    bubblesort.cpp \
    shellsort.cpp \
    heapsort.cpp

HEADERS  += mainwindow.h \
    sorting.h \
    quicksort.h \
    bubblesort.h \
    shellsort.h \
    heapsort.h

FORMS    += mainwindow.ui
