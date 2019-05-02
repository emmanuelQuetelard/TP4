TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lpthread

SOURCES += \
    Archivage.cpp \
    BD.cpp \
    Chrono.cpp \
    InterfaceDeSaisie.cpp \
    kbhit.cpp \
    main.cpp \
    alarme.cpp \
    capteur.cpp \
    clavier.cpp \
    voyant.cpp \
    objettempo.cpp \
    porte.cpp \
    systeme.cpp

HEADERS += \
    Archivage.h \
    BD.h \
    Chrono.h \
    InterfaceDeSaisie.h \
    kbhit.h \
    alarme.h \
    capteur.h \
    clavier.h \
    voyant.h \
    objettempo.h \
    porte.h \
    systeme.h
