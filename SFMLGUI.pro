TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp \
    Widget.cpp \
    Label.cpp \
    Button.cpp \
    TextButton.cpp \
    Container.cpp \
    Frame.cpp \
    Layout.cpp \
    VLayout.cpp \
    Game.cpp \
    ImgButton.cpp \
    ImgTextButton.cpp

HEADERS += \
    Widget.hpp \
    Label.hpp \
    Button.hpp \
    TextButton.hpp \
    Container.hpp \
    Frame.hpp \
    Layout.hpp \
    VLayout.hpp \
    Game.hpp \
    ImgButton.hpp \
    ImgTextButton.hpp

