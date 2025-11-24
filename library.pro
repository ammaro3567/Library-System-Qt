QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    addbookpage.cpp \
    borrowbookpage.cpp \
    dashboard.cpp \
    databasemanager.cpp \
    deletebook.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    returnbookpage.cpp \
    searchbook.cpp

HEADERS += \
    addbookpage.h \
    borrowbookpage.h \
    dashboard.h \
    databasemanager.h \
    deletebook.h \
    loginpage.h \
    mainwindow.h \
    returnbookpage.h \
    searchbook.h

FORMS += \
    addbookpage.ui \
    borrowbookpage.ui \
    dashboard.ui \
    deletebook.ui \
    loginpage.ui \
    mainwindow.ui \
    returnbookpage.ui \
    searchbook.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
