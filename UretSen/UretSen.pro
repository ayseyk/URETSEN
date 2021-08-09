QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    iletisimekrani.cpp \
    kategoriekrani.cpp \
    kayitekrani.cpp \
    main.cpp \
    girisekrani.cpp \
    tercihekrani.cpp \
    ureticiprofil.cpp \
    urunkayitekrani.cpp \
    urunprofilekrani.cpp

HEADERS += \
    girisekrani.h \
    iletisimekrani.h \
    kategoriekrani.h \
    kayitekrani.h \
    tercihekrani.h \
    ureticiprofil.h \
    urunkayitekrani.h \
    urunprofilekrani.h

FORMS += \
    girisekrani.ui \
    iletisimekrani.ui \
    kategoriekrani.ui \
    kayitekrani.ui \
    tercihekrani.ui \
    ureticiprofil.ui \
    urunkayitekrani.ui \
    urunprofilekrani.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc
