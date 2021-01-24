QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mypushbutton.cpp \
    widget.cpp

HEADERS += \
    mainwindow.h \
    mypushbutton.h \
    widget.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Widget.qml \
    images/IMG_10.png \
    images/IMG_11.png \
    images/IMG_12.png \
    images/IMG_13.png \
    images/IMG_2.jpg \
    images/IMG_3.jpeg \
    images/IMG_4.jpg \
    images/IMG_5.jpeg \
    images/IMG_6.jpg \
    images/IMG_6.png \
    images/IMG_7.png \
    images/IMG_8.png \
    images/IMG_9.jpeg

RESOURCES += \
    images.qrc \
    res.qrc
