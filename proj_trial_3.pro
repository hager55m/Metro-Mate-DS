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
    historypage.cpp \
    main.cpp \
    loginpage.cpp \
    mainpage.cpp \
    publicclass.cpp \
    renewsub.cpp \
    rides.cpp \
    searchpage.cpp \
    signuppage.cpp \
    stat1month.cpp \
    stat3months.cpp \
    stat6months.cpp \
    student.cpp \
    submanage.cpp \
    subscription.cpp \
    subscriptionclass.cpp \
    ticketpage.cpp \
    type_subscribtion.cpp \
    user.cpp \
    userdata.cpp \
    verfication.cpp \
    wallet.cpp

HEADERS += \
    AdminHomeBage.h \
    Time_Adn_Date.h \
    adminmanagemetroaddstation.h \
    adminmanagemetrootions.h \
    adminmanagemetroremovestation.h \
    historypage.h \
    loginpage.h \
    mainpage.h \
    publicclass.h \
    renewsub.h \
    rides.h \
    searchpage.h \
    signuppage.h \
    stat1month.h \
    stat3months.h \
    stat6months.h \
    student.h \
    submanage.h \
    subscription.h \
    subscriptionclass.h \
    ticketpage.h \
    type_subscribtion.h \
    user.h \
    userdata.h \
    verfication.h \
    wallet.h

FORMS += \
    AdminHomeBage.ui \
    adminmanagemetroaddstation.ui \
    adminmanagemetrootions.ui \
    adminmanagemetroremovestation.ui \
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
    files/file country.txt \
    img/stations_name.txt \
    img/testing.txt
