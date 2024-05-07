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
    admonmanagemetrooptions.cpp \
    datetime.cpp \
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
    types_sub.cpp \
    userclass.cpp \
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
    adminstations.h \
    admonmanagemetrooptions.h \
    datetime.h \
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
    types_sub.h \
    ui_AdminHomeBage.h \
    ui_DialogButtonBottom.h \
    ui_addsub.h \
    ui_admin.h \
    ui_adminmanagemetroaddstation.h \
    ui_adminmanagemetrootions.h \
    ui_adminmanagemetroremovestation.h \
    ui_adminstations.h \
    ui_historypage.h \
    ui_loginpage.h \
    ui_mainpage.h \
    ui_removesub.h \
    ui_renewsub.h \
    ui_searchpage.h \
    ui_signuppage.h \
    ui_stat1month.h \
    ui_stat3months.h \
    ui_stat6months.h \
    ui_submanage.h \
    ui_subscription.h \
    ui_ticket.h \
    ui_ticketpage.h \
    ui_userdata.h \
    ui_verfication.h \
    userclass.h \
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
    types_sub.ui \
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
