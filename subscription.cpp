#include "subscription.h"
#include "ui_subscription.h"
#include "userclass.h"
#include "QString"
#include "Graph.h"
#include "QDebug"
#include "datetime.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

Subscription::Subscription(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Subscription)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    // adding pics
    QPixmap i(":/images/img/map-point.png");
    ui->searchicon->setPixmap(i.scaled(ui->searchicon->width(), ui->searchicon->height(), Qt::KeepAspectRatio));

    QPixmap h(":/images/img/home (1).png");
    ui->home->setPixmap(h.scaled(ui->home->width(), ui->home->height(), Qt::KeepAspectRatio));

    QPixmap t(":/images/img/ticket.png");
    ui->ticket->setPixmap(t.scaled(ui->ticket->width(), ui->ticket->height(), Qt::KeepAspectRatio));

    QPixmap s(":/images/img/subway.png");
    ui->sub->setPixmap(s.scaled(ui->sub->width(), ui->sub->height(), Qt::KeepAspectRatio));

    QPixmap st(":/images/img/infographic.png");
    ui->state->setPixmap(st.scaled(ui->state->width(), ui->state->height(), Qt::KeepAspectRatio));

    QPixmap u(":/images/img/man.png");
    ui->user->setPixmap(u.scaled(ui->user->width(), ui->user->height(), Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->metro->setPixmap(m.scaled(ui->metro->width(), ui->metro->height(), Qt::KeepAspectRatio));


   // ui->balance->setText(QString::number(UserClass::thisuser.balance));
   // ui->type->settext(QString::number(UserClass::thisuser.UserSub.type_of_sub));
    //QString t =QString::number(UserClass::thisuser.UserSub.Start_of_sub.day)+"/"+;
   // ui->startstation->setText(UserClass::thisuser.UserSub.sub_start_station);

}

Subscription::~Subscription()
{
    delete ui;
}


void Subscription::on_pushButton_2_clicked() // home
{
    emit SwitchToHome();
}

void Subscription::on_pushButton_4_clicked() // ticket
{
    emit SwitchToTicket();
}

void Subscription::on_change_clicked() // renew
{
    emit SwitchToRenew();
}


void Subscription::on_pushButton_5_clicked() // state
{
    emit SwitchToState();
}


void Subscription::on_pushButton_6_clicked() // user
{
    emit SwitchToUser();
}


void Subscription::on_pushButton_clicked() // logout
{
    emit SwitchToLogin();
}

void Subscription::on_pushButton_7_clicked() // search
{
    emit SwitchToSearch();
}

void Subscription::on_renew_clicked()
{
int type_sub = UserClass::thisuser.UserSub.type_of_sub;
    Station starter;
    Station ender;

    for (int i = 0; i < Station::stations.size(); ++i)
    {
        if (UserClass::thisuser.UserSub.sub_start_station == QString::fromStdString(Station::stations[i].name))
        {
            starter = Station::stations[i];
        }
        if (UserClass::thisuser.UserSub.sub_end_station == QString::fromStdString(Station::stations[i].name))
        {
            ender = Station::stations[i];
        }
    }

    stack <Station> bfs = Graph::ShortestPathBFS(starter, ender);


    if (type_sub == 2 && UserClass::thisuser.balance >= 400)
    {
        QMessageBox::information(this, "Renew", "Your Subscription is Renew");
        UserClass::thisuser.balance -=400;
        UserClass::thisuser.UserSub.wallet = 400;
        User_subscribtion Wallet = User_subscribtion(wallet,400);
        UserClass::thisuser.UserSub=Wallet;

        for( auto& it:UserClass::users)
        {
            if(it.Username==UserClass::thisuser.Username)
            {
                it.UserSub.wallet = 400;
                it.balance -=400;
                it.UserSub = Wallet;
            }
        }
    }

    else if (UserClass::thisuser.balance >= price(bfs.size()))
    {
        UserClass::thisuser.balance -=price(bfs.size());
        if (type_sub == 0)
        {
            QMessageBox::information(this, "Renew", "Your Subscription is Renew");
            User_subscribtion stud = User_subscribtion(student,0,UserClass::thisuser.UserSub.sub_start_station,UserClass::thisuser.UserSub.sub_end_station);
            UserClass::thisuser.UserSub=stud;

            for( auto& it:UserClass::users)
            {
                if(it.Username==UserClass::thisuser.Username)
                {
                    it.balance -=price(bfs.size());
                    it.UserSub = stud;
                }
            }
        }

        else if (type_sub == 1 && UserClass::thisuser.UserSub.dur_in_pub == 1)
        {
            QMessageBox::information(this, "Renew", "Your Subscription is Renew");
            User_subscribtion pub_month = User_subscribtion(pub,0,1,UserClass::thisuser.UserSub.sub_start_station,UserClass::thisuser.UserSub.sub_end_station);
            UserClass::thisuser.UserSub=pub_month;

            for( auto& it:UserClass::users)
            {

                if(it.Username==UserClass::thisuser.Username)
                {
                    it.balance -=price(bfs.size());
                    it.UserSub = pub_month;
                }
                qDebug()<< "user name "<<it.balance;
            }
        }

        else if (type_sub == 1 && UserClass::thisuser.UserSub.dur_in_pub == 0)
        {
            QMessageBox::information(this, "Renew", "Your Subscription is Renew");
            User_subscribtion pub_year = User_subscribtion(pub,0,0,UserClass::thisuser.UserSub.sub_start_station,UserClass::thisuser.UserSub.sub_end_station);
            UserClass::thisuser.UserSub=pub_year;

            for( auto& it:UserClass::users)
            {
                if(it.Username==UserClass::thisuser.Username)
                {
                    it.balance -=price(bfs.size());
                    it.UserSub = pub_year;
                }
            }

        }
    }

    else
    {
        QMessageBox::information(this, "Renew", "Can't Renew Check Your Balance");
        emit SwitchToUser();
    }
}

void Subscription::on_display_clicked()
{
    bool dur = false;
    QString type_sub;
    int sub_type = UserClass::thisuser.UserSub.type_of_sub;
    int num_trips = UserClass::thisuser.UserSub.no_of_trips;
    int num_rides = UserClass::thisuser.user_tickets.size();
    int rimaning = num_trips - num_rides;
    if(UserClass::thisuser.UserSub.dur_in_pub == 1 && UserClass::thisuser.UserSub.type_of_sub == 1 )
    {
        dur = true;
    }
    if(UserClass::thisuser.UserSub.type_of_sub == 0)
        type_sub = "Student";
    if(UserClass::thisuser.UserSub.type_of_sub == 1)
        type_sub = "Public";
    if(UserClass::thisuser.UserSub.type_of_sub == 2)
        type_sub = "Wallet";

    QString starter =QString::number(UserClass::thisuser.UserSub.Start_of_sub.day)+"/"+QString::number(UserClass::thisuser.UserSub.Start_of_sub.month)+"/"+QString::number(UserClass::thisuser.UserSub.Start_of_sub.year);
    DateTime dt = DateTime(UserClass::thisuser.UserSub.Start_of_sub.day,UserClass::thisuser.UserSub.Start_of_sub.month,UserClass::thisuser.UserSub.Start_of_sub.year,0,0,0);
    DateTime t_end = DateTime::end_time(sub_type,dt,dur);
    QString ender =QString::number(t_end.day)+"/"+QString::number(t_end.month)+"/"+QString::number(t_end.year);
    ui->balance->setText(QString::number(UserClass::thisuser.balance));
    ui->type->setText(type_sub);
    ui->startstation->setText(UserClass::thisuser.UserSub.sub_start_station);
    ui->endstation->setText(UserClass::thisuser.UserSub.sub_end_station);
    ui->startdate->setText(starter);
    ui->enddate->setText(ender);
    if (UserClass::thisuser.UserSub.type_of_sub == 2)
        ui->rides->setText(" ");
    else
        ui->rides->setText(QString::number(rimaning));
    //ui->rides->setText(QString::number(UserClass::thisuser.UserSub.no_of_trips - UserClass.thisuser.user_tickets.size()));
}

int Subscription::price(int stage)
{

    if (UserClass::thisuser.UserSub.type_of_sub == 0)
    {
        if (stage >= 1 && stage <= 9)
            return 33;
        else if (stage >= 10 && stage <= 16)
            return 41;
        else if (stage >= 17 && stage <= 23)
            return 50;
        else
            return 65;
    }
    else if (UserClass::thisuser.UserSub.type_of_sub == 1 && UserClass::thisuser.UserSub.dur_in_pub==1)
    {
        if (stage >= 1 && stage <= 9)
            return 230;
        else if (stage >= 10 && stage <= 16)
            return 290;
        else if (stage >= 17 && stage <= 23)
            return 340;
        else
            return 450;
    }
    else if (UserClass::thisuser.UserSub.type_of_sub == 1 && UserClass::thisuser.UserSub.dur_in_pub==0)
    {
        if (stage >= 1 && stage <= 9)
            return 1500;
        else if (stage >= 10 && stage <= 16)
            return 2500;
        else if (stage >= 17 && stage <= 23)
            return 3500;
        else
            return 4500;
    }

}
