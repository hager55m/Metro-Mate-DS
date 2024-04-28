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
#include"adminmanagemetroaddstation.h"
#include"adminmanagemetrootions.h"
#include"admonmanagemetrooptions.h"
#include "adminmanagemetroremovestation.h"
#include"admin.h"
#include"addsub.h"
#include "removesub.h"
#include "ticket.h"
#include "adminstations.h"
#include "admindatapage.h"
#include "subscriptionlist.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SubscriptionList *spl = new SubscriptionList();
    SubscriptionList::Stations.push_back(*spl);

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
    //AdminHomeBage adminhome;
    AdminManageMetroOtions admm;
    AdmonManageMetroOptions sub;
    AdminManageMetroAddStation adStation;
    AdminManageMetroRemoveStation adreStation;
    admin admin;
    addsub addsub;
    removesub removesub;
    Ticket ticket;
    AdminStations AdminStation;
    AdminDataPage adp;
//<<<<<<< HEAD

    //ticket.show();
 // admin.show();
//=======
    sub.show();

    //lp.show();

    QObject::connect(&removesub, &removesub::SwitchToHomePAGE, [&](){
        admin.show();
        removesub.hide();
    });

    QObject::connect(&removesub, &removesub::SwitchToLogin, [&](){
        lp.show();
        removesub.hide();
    });

    QObject::connect(&removesub, &removesub::SwitchToMangeMetro, [&](){
        admm.show();
        removesub.hide();
    });

    QObject::connect(&removesub, &removesub::SwitchToStation, [&](){
        AdminStation.show();
        removesub.hide();
    });

    QObject::connect(&removesub, &removesub::SwitchToTickets, [&](){
        ticket.show();
        removesub.hide();
    });

    QObject::connect(&removesub, &removesub::SwitchTosubscription, [&](){
        sub.show();
        removesub.hide();
    });


    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToAddMetro, [&](){
        admm.show();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToAddRemove, [&](){
        removesub.show();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToAddStation, [&](){
        addsub.show();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToAddTicket, [&](){
        ticket.show();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToAdminHome, [&](){
        admin.show();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToLogin, [&](){
        lp.show();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToStation, [&](){
        AdminStation.show();
        sub.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToLogin, [&](){
        lp.show();
        adp.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToHome, [&](){
        admin.show();
        adp.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToMangeMetro, [&](){
        admm.show();
        adp.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToStation, [&](){
        AdminStation.show();
        adp.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToSub, [&](){
        sub.show();
        adp.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToTicket, [&](){
        ticket.show();
        adp.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToUserData, [&](){
        hs.show();
        adp.hide();
    });

    QObject::connect(&adreStation, &AdminManageMetroRemoveStation::SwitchToLogin, [&](){
        lp.show();
        adreStation.hide();
    });

    QObject::connect(&admin, &admin::switchtouserhistory, [&](){
        adp.show();
        admin.hide();
    });


    //connection between admin
     QObject::connect(&admin, &admin::switchtomanage, [&]() {
         admm.show();
         admin.hide();
         });

     QObject::connect(&admin, &admin::switchtoticket, [&]() {
         ticket.show();
         admin.hide();
         });

     QObject::connect(&admin, &admin::switchtologin, [&]() {
         lp.show();
         admin.hide();
         });

     QObject::connect(&admin, &admin::switchtosubsctiption, [&]() {
         sub.show();
         admin.hide();
         });
     
     QObject::connect(&admin, &admin::switchtostation, [&]() {
        AdminStation.show();
         admin.hide();
         });

    

     //final
    QObject::connect(&adreStation, &AdminManageMetroRemoveStation::SwitchToMnageMetroOption, [&](){
        admm.show();
        adreStation.hide();
    });

   

    QObject::connect(&adStation, &AdminManageMetroAddStation::SwitchToLogin, [&](){
        lp.show();
        adStation.hide();
    });
    QObject::connect(&adStation, &AdminManageMetroAddStation::SwitchToMnageMetroOption, [&](){
        admm.show();
        adStation.hide();
    });

    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToLogin, [&](){
        lp.show();
        admm.hide();
    });
   
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToAddStation, [&](){
        adStation.show();
        admm.hide();
    });
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToRemoveStation, [&]() {
        adreStation.show();
        admm.hide();
        });
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToAdminHome, [&]() {
        admin.show();
        admm.hide();
        });

    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToStation, [&]() {
        AdminStation.show();
        admm.hide();
        });
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToSub, [&]() {
        sub.show();
        admm.hide();
        });
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToTicket, [&]() {
        ticket.show();
        admm.hide();
        });
    QObject::connect(&ticket, &Ticket::switshtoadmin, [&]() {
        admin.show();
        ticket.hide();
        });
    QObject::connect(&ticket, &Ticket::switshtomanage, [&]() {
        admm.show();
        ticket.hide();
        });

    QObject::connect(&ticket, &Ticket::switshtologin, [&]() {
        lp.show();
        ticket.hide();
        });
    QObject::connect(&ticket, &Ticket::switshtosub, [&]() {
        sub.show();
        ticket.hide();
        });
    QObject::connect(&ticket, &Ticket::switshtostation, [&]() {
        AdminStation.show();
        ticket.hide();
        });
    QObject::connect(&s, &Subscription::SwitchToHome, [&]() {
        admin.show();
        s.hide();
        });
    

    // login page
    QObject::connect(&lp, &LoginPage::SwitchTOSignup, [&](){
        sp.show();
        lp.hide();
    });

    QObject::connect(&lp, &LoginPage::SwitchToAdminPage, [&]() {
        admin.show();
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
//
//<<<<<<< HEAD
    //lp.show();
//=======
    // adminStation
    QObject::connect(&AdminStation, &AdminStations::SwitchToHomePage, [&]() {
        admin.show();
        AdminStation.hide();
        });

    QObject::connect(&AdminStation, &AdminStations::SwitchToMangeMetro, [&]() {
        admm.show();
        AdminStation.hide();
        });

    QObject::connect(&AdminStation, &AdminStations::SwitchToTicket, [&]() {
        ticket.show();
        AdminStation.hide();
        });


    QObject::connect(&AdminStation, &AdminStations::SwitchTologin, [&]() {
        lp.show();
        AdminStation.hide();
        });
    QObject::connect(&AdminStation, &AdminStations::SwitchToSupscription, [&]() {
        sub.show();
        AdminStation.hide();
        });

    /// addsub 
    QObject::connect(&addsub, &addsub::SwitchToHomePAGE, [&]() {
            admin.show();
            addsub.hide();
        });
    QObject::connect(&addsub, &addsub::SwitchTosubscription, [&]() {
        AdminStation.show();
        addsub.hide();
        });
    QObject::connect(&addsub, &addsub::LogoutSub, [&]() {
        lp.show();
        addsub.hide();
        });
    QObject::connect(&addsub, &addsub::SwitchToSub, [&]() {
        sub.show();
        addsub.hide();
    });

    QObject::connect(&addsub, &addsub::addsubscription, [&]() {
        addsub.show();
        addsub.hide();
        });

    QObject::connect(&addsub, &addsub::removesubscription, [&]() {
        removesub.show();
        addsub.hide();
        });

    QObject::connect(&addsub, &addsub::SwitchToMangeMetro, [&]() {
        admm.show();
        addsub.hide();
        });

    QObject::connect(&addsub, &addsub::SwitchToTickets, [&]() {
        ticket.show();
        addsub.hide();
        });

    QObject::connect(&addsub, &addsub::SwitchToLogin, [&]() {
        lp.show();
        addsub.hide();
    });

   
//>>>>>>> main

    return a.exec();
}
