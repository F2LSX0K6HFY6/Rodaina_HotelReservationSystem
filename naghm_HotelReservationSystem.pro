TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        guest.cpp \
        human.cpp \
        main.cpp \
        monster.cpp

HEADERS += \
    guest.h \
    human.h \
    monster.h
