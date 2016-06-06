TEMPLATE = app
TARGET = gui_1
QT += core \
    gui \
    network
HEADERS += gui_2.h \
    utilities.h \
    gui_1.h
SOURCES += gui_2.cpp \
    utilities.cpp \
    main.cpp \
    gui_1.cpp
FORMS += gui_2.ui \
    gui_1.ui
RESOURCES += 
