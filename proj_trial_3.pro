QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AdminHomeBage.cpp \
    adminmanagemetroaddstation.cpp \
    adminmanagemetrootions.cpp \
    adminmanagemetroremovestation.cpp \
    adminstations.cpp \
    historypage.cpp \
    main.cpp \
    loginpage.cpp \
    mainpage.cpp \
    renewsub.cpp \
    searchpage.cpp \
    signuppage.cpp \
    stat1month.cpp \
    stat3months.cpp \
    stat6months.cpp \
    submanage.cpp \
    subscription.cpp \
    ticketpage.cpp \
    userdata.cpp \
    verfication.cpp\
    moc_adminmanagemetrootions.cpp

HEADERS += \
    AdminHomeBage.h \
    adminmanagemetroaddstation.h \
    adminmanagemetrootions.h \
    adminmanagemetroremovestation.h \
    adminstations.h \
    historypage.h \
    loginpage.h \
    mainpage.h \
    renewsub.h \
    searchpage.h \
    signuppage.h \
    stat1month.h \
    stat3months.h \
    stat6months.h \
    submanage.h \
    subscription.h \
    ticketpage.h \
    userdata.h \
    verfication.h

FORMS += \
    AdminHomeBage.ui \
    adminmanagemetroaddstation.ui \
    adminmanagemetrootions.ui \
    adminmanagemetroremovestation.ui \
    adminstations.ui \
    historypage.ui \
    loginpage.ui \
    mainpage.ui \
    renewsub.ui \
    searchpage.ui \
    signuppage.ui \
    stat1month.ui \
    stat3months.ui \
    stat6months.ui \
    submanage.ui \
    subscription.ui \
    ticketpage.ui \
    userdata.ui \
    verfication.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    img/stations_name.txt
