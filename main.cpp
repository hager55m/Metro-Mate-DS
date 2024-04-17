#include "loginpage.h"
#include "signuppage.h"
#include "mainpage.h"
#include "ticketpage.h"
#include "subscription.h"
#include "stat1month.h"
#include "stat3months.h"
#include "stat6months.h"
#include "userdata.h"
#include "submanage.h"
#include "renewsub.h"
#include "historypage.h"
#include "searchpage.h"
#include "verfication.h"
#include"AdminHomeBage.h"
#include"adminmanagemetroaddstation.h"
#include"adminmanagemetrootions.h"
#include "adminmanagemetroremovestation.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginPage lp;
    SignupPage sp;
    MainPage mp;
    TicketPage tp;
    Subscription s;
    stat1month s1;
    stat3months s3;
    stat6months s6;
    UserData ud;
    SubManage sm;
    RenewSub rs;
    HistoryPage hs;
    SearchPage sh;
    verfication v;
    AdminManageMetroOtions admm;
    AdminManageMetroAddStation adStation;
    AdminManageMetroRemoveStation adreStation;

    adreStation.show();

   /* QObject::connect(&adreStation, &AdminManageMetroRemoveStation::SwitchToAdminHome, [&](){
        ad.show();
        adreStation.hide();
    });*/
    QObject::connect(&adreStation, &AdminManageMetroRemoveStation::SwitchToLogin, [&](){
        lp.show();
        adreStation.hide();
    });
    QObject::connect(&adreStation, &AdminManageMetroRemoveStation::SwitchToMnageMetroOption, [&](){
        admm.show();
        adreStation.hide();
    });
   /* QObject::connect(&adStation, &AdminManageMetroAddStation::SwitchToAdminHome, [&](){
        ad.show();
        adStation.hide();
    });*/
    QObject::connect(&adStation, &AdminManageMetroAddStation::SwitchToLogin, [&](){
        lp.show();
        adStation.hide();
    });
    QObject::connect(&adStation, &AdminManageMetroAddStation::SwitchToMnageMetroOption, [&](){
        admm.show();
        adStation.hide();
    });
   /* QObject::connect(&ad, &Admin::SwitchToMangeMetro, [&](){
        admm.show();
        ad.hide();
    });*/
    /*QObject::connect(&admm, &AdminManageMetroOtions::SwitchToAdminHome, [&](){
        ad.show();
        admm.hide();
    });*/
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToLogin, [&](){
        lp.show();
        admm.hide();
    });
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToAddStation, [&](){
        adStation.show();
        admm.hide();
    });

    // login page
    QObject::connect(&lp, &LoginPage::SwitchTOSignup, [&](){
        sp.show();
        lp.hide();
    });

    QObject::connect(&lp, &LoginPage::SwitchToMainPage, [&](){
        mp.show();
        lp.hide();
    });

    //signup page
    QObject::connect(&sp, &SignupPage::SwitchToLogin, [&](){
        lp.show();
        sp.hide();
    });

    // home page
    QObject::connect(&mp, &MainPage::SwitchToLogin, [&](){
        lp.show();
        mp.hide();
    });

    QObject::connect(&mp, &MainPage::SwitchToTicket, [&](){
        tp.show();
        mp.hide();
    });

    QObject::connect(&mp, &MainPage::SwitchToSub, [&](){
        s.show();
        mp.hide();
    });

    QObject::connect(&mp, &MainPage::SwitchToState, [&](){
        s1.show();
        mp.hide();
    });

    QObject::connect(&mp, &MainPage::SwitchToUser, [&](){
        ud.show();
        mp.hide();
    });

    QObject::connect(&mp, &MainPage::SwitchToSearch, [&](){
        sh.show();
        mp.hide();
    });

    // search page
    QObject::connect(&sh, &SearchPage::SwitchToHome, [&](){
        mp.show();
        sh.hide();
    });

    // ticket page
    QObject::connect(&tp, &TicketPage::SwitchToLogin, [&](){
        lp.show();
        tp.hide();
    });

    QObject::connect(&tp, &TicketPage::SwitchToHome, [&](){
        mp.show();
        tp.hide();
    });

    QObject::connect(&tp, &TicketPage::SwitchToSub, [&](){
        s.show();
        tp.hide();
    });

    QObject::connect(&tp, &TicketPage::SwitchToState, [&](){
        s1.show();
        tp.hide();
    });

    QObject::connect(&tp, &TicketPage::SwitchToUser, [&](){
        ud.show();
        tp.hide();
    });

    QObject::connect(&tp, &TicketPage::SwitchToVerf, [&](){
        v.show();
        tp.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToHome, [&](){
        mp.show();
        s.hide();
    });

    // subscription page
    QObject::connect(&s, &Subscription::SwitchToTicket, [&](){
        tp.show();
        s.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToLogin, [&](){
        lp.show();
        s.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToState, [&](){
        s1.show();
        s.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToUser, [&](){
        ud.show();
        s.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToVerf, [&](){
        v.show();
        s.hide();
    });

    // verfication page
    QObject::connect(&v, &verfication::SwitchToHome, [&](){
        mp.show();
        v.hide();
    });

    // statistics pages (1,3,6)
    QObject::connect(&s1, &stat1month::SwitchToHome, [&](){
        mp.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchToTicket, [&](){
        tp.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchToSub, [&](){
        s.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchToUser, [&](){
        ud.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchToLogin, [&](){
        lp.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchTo3Months, [&](){
        s3.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchTo6Months, [&](){
        s6.show();
        s1.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchToHome, [&](){
        mp.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchToTicket, [&](){
        tp.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchToSub, [&](){
        s.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchToUser, [&](){
        ud.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchToLogin, [&](){
        lp.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchTo1Months, [&](){
        s1.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchTo6Months, [&](){
        s6.show();
        s3.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchToHome, [&](){
        mp.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchToTicket, [&](){
        tp.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchToSub, [&](){
        s.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchToUser, [&](){
        ud.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchToLogin, [&](){
        lp.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchTo1Months, [&](){
        s1.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchTo3Months, [&](){
        s3.show();
        s6.hide();
    });

    // user data page
    QObject::connect(&ud, &UserData::SwitchToHome, [&](){
        mp.show();
        ud.hide();
    });

    QObject::connect(&ud, &UserData::SwitchToHistory, [&](){
        hs.show();
        ud.hide();
    });

    QObject::connect(&ud, &UserData::SwitchToLogin, [&](){
        lp.show();
        ud.hide();
    });

    QObject::connect(&ud, &UserData::SwitchToSubMange, [&](){
        sm.show();
        ud.hide();
    });

    // manage subscription page
    QObject::connect(&sm, &SubManage::SwitchToHome, [&](){
        mp.show();
        sm.hide();
    });

    QObject::connect(&sm, &SubManage::SwitchToHistory, [&](){
        hs.show();
        sm.hide();
    });

    QObject::connect(&sm, &SubManage::SwitchToLogin, [&](){
        lp.show();
        sm.hide();
    });

    QObject::connect(&sm, &SubManage::SwitchToRenew, [&](){
        rs.show();
        sm.hide();
    });

    QObject::connect(&sm, &SubManage::SwitchToUserData, [&](){
        ud.show();
        sm.hide();
    });

    // renew subscription page
    QObject::connect(&rs, &RenewSub::SwitchToHome, [&](){
        mp.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToHistory, [&](){
        hs.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToLogin, [&](){
        lp.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToSubMange, [&](){
        sm.show();
        rs.hide();
    });

    QObject::connect(&hs, &HistoryPage::SwitchToHome, [&](){
        mp.show();
        hs.hide();
    });

    QObject::connect(&hs, &HistoryPage::SwitchToUserData, [&](){
        ud.show();
        hs.hide();
    });

    // history page
    QObject::connect(&hs, &HistoryPage::SwitchToLogin, [&](){
        lp.show();
        hs.hide();
    });

    return a.exec();
}
