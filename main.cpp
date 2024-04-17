
#include "admin.h"
#include "manage_metro.h"
#include "ticket.h"
#include"subscription.h"
#include"addsub.h"
#include"removesub.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   
    admin ad;
    manage_metro m;
    Ticket t;
    Subscription s;
    addsub add;
    removesub re;
    ad.show();
    //t.show();

    QObject::connect(&m,&manage_metro::switchtoadmin,[&](){
        ad.show();
        m.hide();
    });
    QObject::connect(&m,&manage_metro::switchtoticket,[&](){
        t.show();
        m.hide();
    });
    QObject::connect(&m,&manage_metro::switchtosubsctiption,[&](){
        s.show();
        m.hide();
    });

    QObject::connect(&t,&Ticket::switshtomanage,[&](){
        m.show();
        t.hide();
    });
    QObject::connect(&t,&Ticket::switshtosub,[&](){
        s.show();
        t.hide();
    });
    QObject::connect(&t,&Ticket::switshtoadmin,[&](){

        ad.show();
        t.hide();

    });
    QObject::connect(&ad,&admin::switchtoadmin,[&](){
        ad.show();

    });
    QObject::connect(&ad,&admin::switchtomanage,[&](){
        m.show();
        ad.hide();
    });

    QObject::connect(&ad,&admin::switchtoticket,[&](){

        t.show();
        ad.hide();

    });

    QObject::connect(&ad,&admin::switchtosubsctiption,[&](){
        s.show();
        ad.hide();
    });


    QObject::connect(&s,&Subscription::switchtoAdding,[&](){
        add.show();
        s.hide();
    });
    QObject::connect(&s,&Subscription::switchtoremoving,[&](){
        re.show();
        s.hide();
    });
    QObject::connect(&s,&Subscription::switchtoadmin,[&](){
        ad.show();
        s.hide();
    });
    QObject::connect(&s,&Subscription::switchtoticket,[&](){
        t.show();
        s.hide();
    });

    QObject::connect(&add,&addsub::switchtoSub,[&](){
        s.show();
        add.hide();
    });
    QObject::connect(&s,&Subscription::switchtomanage,[&](){
        m.show();
        s.hide();
    });
    QObject::connect(&re,&removesub::switchtoSub,[&](){
        s.show();
        re.hide();
    });

    return a.exec();
}
