#include "loginpage.h"
#include "signuppage.h"
#include "types_sub.h"
#include "mainpage.h"
#include "ticketpage.h"
#include "subscription.h"
#include "stat1month.h"
#include "stat3months.h"
#include "stat6months.h"
#include "userdata.h"
#include "renewsub.h"
#include "historypage.h"
#include "searchpage.h"
#include "verfication.h"
//#include"AdminHomeBage.h"
#include"adminmanagemetroaddstation.h"
#include"adminmanagemetrootions.h"
#include "adminmanagemetroremovestation.h"
#include"admin.h"
//#include"addsub.h"
//#include "removesub.h"
//#include "ticket.h"
#include "adminstations.h"
#include "admindatapage.h"
#include <QApplication>
#include <userclass.h>
#include <Station.h>
#include <cstdlib>

void Write_all();

int main(int argc, char *argv[])
{

    //UserClass::users.push_back(UserClass("hager.com@gmail","hager","3333",User_subscribtion(pub,5,1,"3atba","ain shams"),123,500));
    //UserClass::users.push_back(UserClass("nour.com@gmail","nour","1111",User_subscribtion(student,1,"cairo","ain shams"),111,1000));
    //UserClass::users.push_back(UserClass("hagora.com@gmail","hagora","1010",User_subscribtion(student,5,"3atba","ain shams"),000,300));
    //UserClass::users.push_back(UserClass("hanan.com@gmail","hanan","2000",User_subscribtion(wallet,300),147,100));
    UserClass::Read_File();
    UserTicket::Read_History();
    UserClass::Read_User_Signed();
    Station::Read_Staion();
    QApplication a(argc, argv);
    LoginPage lp;
    SignupPage sp;
    types_sub ts;
    MainPage mp;
    TicketPage tp;
    Subscription s;
    stat1month s1;
    stat3months s3;
    stat6months s6;
    UserData ud;
    RenewSub rs;
    HistoryPage hs;
    SearchPage sh;
    verfication v;
    //AdminHomeBage adminhome;
    AdminManageMetroOtions admm;
    AdminManageMetroAddStation adStation;
    AdminManageMetroRemoveStation adreStation;
    admin admin;
    /*addsub addsub;
    removesub removesub;
    Ticket ticket;*/
    AdminStations AdminStation;
    AdminDataPage adp;
//<<<<<<< HEAD

    //ticket.show();
 // admin.show();
//=======
    //addsub.show();
    
    
    lp.show();

    QObject::connect(&adp, &AdminDataPage::SwitchToLogin, [&](){
        lp.show();
        adp.hide();
    });

    // QObject::connect(&adp, &AdminDataPage::SwitchToHome, [&](){
    //     admin.show();
    //     adp.hide();
    // });

    QObject::connect(&adp, &AdminDataPage::SwitchToMangeMetro, [&](){
        admm.show();
        adp.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToStation, [&](){
        AdminStation.show();
        adp.hide();
    });

    // QObject::connect(&adp, &AdminDataPage::SwitchToSub, [&](){
    //     addsub.show();
    //     adp.hide();
    // });

    // QObject::connect(&adp, &AdminDataPage::SwitchToTicket, [&](){
    //     ticket.show();
    //     adp.hide();
    // });

    QObject::connect(&adp, &AdminDataPage::SwitchToUserData, [&](){
        hs.show();
        adp.hide();
    });

    QObject::connect(&adreStation, &AdminManageMetroRemoveStation::SwitchToLogin, [&](){
        lp.show();
        adreStation.hide();
    });
    // QObject::connect(&admin, &admin::switchtouserhistory, [&](){
    //    // hs.show();
    //    admin.hide();
    //});

    // //connection between admin
    // QObject::connect(&admin, &admin::switchtomanage, [&]() {
    //     admm.show();
    //     admin.hide();
    //     });
    // QObject::connect(&admin, &admin::switchtouserhistory, [&](){
    //     adp.show();
    //     admin.hide();
    // });


    //connection between admin
     // QObject::connect(&admin, &admin::switchtomanage, [&]() {
     //     admm.show();
     //     admin.hide();
     //     });

    // QObject::connect(&admin, &admin::switchtoticket, [&]() {
    //     ticket.show();
    //     admin.hide();
    //     });

    // QObject::connect(&admin, &admin::switchtologin, [&]() {
    //     lp.show();
    //     admin.hide();
    //     });

    // QObject::connect(&admin, &admin::switchtosubsctiption, [&]() {
    //    // s.show();
    //     admin.hide();
    //     });
    // 
    // QObject::connect(&admin, &admin::switchtostation, [&]() {
    //    AdminStation.show();
    //     admin.hide();
    //     });

     // QObject::connect(&admin, &admin::switchtosubsctiption, [&]() {
     //     addsub.show();
     //     admin.hide();
     //     });
     
     // QObject::connect(&admin, &admin::switchtostation, [&]() {
     //    AdminStation.show();
     //     admin.hide();
     //     });
    

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
   /* QObject::connect(&admm, &AdminManageMetroOtions::SwitchToAdminHome, [&]() {
        admin.show();
        admm.hide();
        });*/

    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToStation, [&]() {
        AdminStation.show();
        admm.hide();
        });
    // QObject::connect(&admm, &AdminManageMetroOtions::SwitchToSub, [&]() {
    //     addsub.show();
    //     admm.hide();
    //     });
    //QObject::connect(&admm, &AdminManageMetroOtions::SwitchToTicket, [&]() {
    //    ticket.show();
    //    admm.hide();
    //    });
    //QObject::connect(&ticket, &Ticket::switshtoadmin, [&]() {
    //    admin.show();
    //    ticket.hide();
    //    });
    //QObject::connect(&ticket, &Ticket::switshtomanage, [&]() {
    //    admm.show();
    //    ticket.hide();
    //    });


    //QObject::connect(&ticket, &Ticket::switshtologin, [&]() {
    //    lp.show();
    //    ticket.hide();
    //    });
    //QObject::connect(&ticket, &Ticket::switshtosub, [&]() {
    //    //s.show();
    //    ticket.hide();
    //    });
    //QObject::connect(&ticket, &Ticket::switshtostation, [&]() {
    //    AdminStation.show();
    //    ticket.hide();
    //    });
    //QObject::connect(&s, &Subscription::SwitchToHome, [&]() {
    //    admin.show();
    //    s.hide();
    //    });

    // QObject::connect(&ticket, &Ticket::switshtologin, [&]() {
    //     lp.show();
    //     ticket.hide();
    //     });
    // QObject::connect(&ticket, &Ticket::switshtosub, [&]() {
    //     addsub.show();
    //     ticket.hide();
    //     });
    // QObject::connect(&ticket, &Ticket::switshtostation, [&]() {
    //     AdminStation.show();
    //     ticket.hide();
    //     });
    // QObject::connect(&s, &Subscription::SwitchToHome, [&]() {
    //     admin.show();
    //     s.hide();
    //     });
    

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
        ts.hide();
    });

    QObject::connect(&sp, &SignupPage::SwitchTotypes_sub, [&](){
        ts.show();
        sp.hide();
    });

    //types of subscribtion
    QObject::connect(&ts, &types_sub::SwitchToSignup, [&](){
        sp.show();
        ts.hide();
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

    QObject::connect(&sh, &SearchPage::SwitchToTicket, [&]() {
        tp.show();
        sh.hide();
        });

    // ticket page
    QObject::connect(&tp, &TicketPage::SwitchToSearch, [&]() {
        sh.show();
        tp.hide();
    });

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

    QObject::connect(&s, &Subscription::SwitchToSearch, [&]() {
        sh.show();
        s.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToHome, [&]() {
        mp.show();
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

    QObject::connect(&s, &Subscription::SwitchToRenew, [&]() {
        rs.show();
        s.hide();
    });

    // renew subscription page
    QObject::connect(&rs, &RenewSub::SwitchToSearch, [&]() {
        sh.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToHome, [&]() {
        mp.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToTicket, [&]() {
        tp.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToLogin, [&]() {
        lp.show();
        rs.hide();
        });

    QObject::connect(&rs, &RenewSub::SwitchToState, [&]() {
        s1.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToUser, [&]() {
        ud.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToSub, [&]() {
        s.show();
        rs.hide();
    });

    // verfication page
    QObject::connect(&v, &verfication::SwitchToHome, [&](){
        mp.show();
        v.hide();
    });

    // statistics pages (1,3,6)
    QObject::connect(&s1, &stat1month::SwitchToSearch, [&]() {
        sh.show();
        s1.hide();
    });

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

    QObject::connect(&s3, &stat3months::SwitchToSearch, [&]() {
        sh.show();
        s3.hide();
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

    QObject::connect(&s6, &stat6months::SwitchToSearch, [&]() {
        sh.show();
        s6.hide();
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

    // history page
    QObject::connect(&hs, &HistoryPage::SwitchToLogin, [&](){
        lp.show();
        hs.hide();
    });

    QObject::connect(&hs, &HistoryPage::SwitchToHome, [&]() {
        mp.show();
        hs.hide();
    });

    QObject::connect(&hs, &HistoryPage::SwitchToUserData, [&]() {
        ud.show();
        hs.hide();
    });

   atexit(Write_all);

    return a.exec();

}
void Write_all(){

    UserClass::Write_users();
    UserClass::Write_users_Signed();
    Station::Write_Staion();
    UserTicket::Write_History();

}
