QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Graph.cpp \
    Station.cpp \
    StationClass.cpp \
    addsub.cpp \
    admin.cpp \
    admindatapage.cpp \
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
    manage_metro.cpp \
    removesub.cpp \
    renewsub.cpp \
    searchpage.cpp \
    signuppage.cpp \
    stat1month.cpp \
    stat3months.cpp \
    stat6months.cpp \
    submanage.cpp \
    subscription.cpp \
    ticket.cpp \
    ticketpage.cpp \
    types_sub.cpp \
    user_subscribtion.cpp \
    userclass.cpp \
    userdata.cpp \
    userticket.cpp \
    verfication.cpp

HEADERS += \
    AdminManageMetroOptions.h \
    Graph.h \
    Station.h \
    StationClass.h \
    addsub.h \
    admin.cpp.autosave \
    admin.h \
    admindatapage.h \
    adminmanagemetroaddstation.h \
    adminmanagemetrootions.h \
    adminmanagemetroremovestation.h \
    adminstations.h \
    admonmanagemetrooptions.h \
    datetime.h \
    historypage.h \
    loginpage.h \
    mainpage.h \
    manage_metro.h \
    removesub.h \
    renewsub.h \
    resource.h \
    searchpage.h \
    signuppage.h \
    stat1month.h \
    stat3months.h \
    stat6months.h \
    submanage.h \
    subscription.h \
    ticket.h \
    ticketpage.h \
    types_sub.h \
    ui_AdminHomeBage.h \
    ui_DialogButtonBottom.h \
    ui_addsub.h \
    ui_admin.h \
    ui_admindatapage.h \
    ui_adminmanagemetroaddstation.h \
    ui_adminmanagemetrootions.h \
    ui_adminmanagemetroremovestation.h \
    ui_adminstations.h \
    ui_admonmanagemetrooptions.h \
    ui_historypage.h \
    ui_loginpage.h \
    ui_mainpage.h \
    ui_manage_metro.h \
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
    ui_types_sub.h \
    ui_userdata.h \
    ui_verfication.h \
    user_subscribtion.h \
    userclass.h \
    userdata.h \
    userticket.h \
    verfication.h


FORMS += \
    AdminManageMetroOptions.ui \
    DialogButtonBottom.ui \
    addsub.ui \
    admin.ui \
    admindatapage.ui \
    adminmanagemetroaddstation.ui \
    adminmanagemetrootions.ui \
    adminmanagemetroremovestation.ui \
    adminstations.ui \
    admonmanagemetrooptions.ui \
    historypage.ui \
    loginpage.ui \
    mainpage.ui \
    manage_metro.ui \
    removesub.ui \
    renewsub.ui \
    searchpage.ui \
    signuppage.ui \
    stat1month.ui \
    stat3months.ui \
    stat6months.ui \
    submanage.ui \
    subscription.ui \
    ticket.ui \
    ticketpage.ui \
    types_sub.ui \
    userdata.ui \
    verfication.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    hhhh.qrc \
    res.qrc \
    res.qrc \
    res.qrc

DISTFILES += \
    img/files/Sub.txt \
    img/stations_name.txt \
    proj_trial_3 - Backup.vcxproj.user \
    proj_trial_3 - Backup.vcxproj.user \
    proj_trial_3 - Backup.vcxproj.user \
    proj_trial_3.pro.user \
    proj_trial_3.pro.user.271141c \
    proj_trial_3.pro.user.27d3f99 \
    proj_trial_3.pro.user.2ff5dd2 \
    proj_trial_3.pro.user.4474141 \
    proj_trial_3.pro.user.5c1fe26 \
    proj_trial_3.pro.user.b9763a2 \
    proj_trial_3.qtvscr \
    proj_trial_3.rc \
    proj_trial_3.sln \
    proj_trial_3.vcxproj \
    proj_trial_3.vcxproj.filters \
    proj_trial_3.vcxproj.user
