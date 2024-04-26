#ifndef USER_H
#define USER_H
#include<string>
#include<vector>
#include<time.h>
#include "rides.h"
#include "subscriptionclass.h"
#include "ticketpage.h"
#include "ui_ticketpage.h"
#include <publicclass.h>
#include <QObject>
#include <student.h>
#include "list"
#include <ctime>
#include <wallet.h>
#include<Time_Adn_Date.h>
#include "type_subscribtion.h"
using namespace std;

class User
{
    string Username;
    int Password;
    list<Rides> No_Of_Rides;
    vector<list<int>> Shortest_Path_Station;
    //SubscriptionClass UserSub;
    type_subscribtion UserSub;
    //Student substudent(int x);
    //PublicClass subpublic;
    bool stu=false;
    bool pub=false;
    bool wal=false;
    //wallet Wallet;


public:

    User ();
    User(string,int);
    void Add_Ride();
    void view_ride_history();
    float Calc_cost(string,string);//mn el admin
    bool Check_No_Of_Rides(type_subscribtion ,bool,bool,bool);
    bool Check_Of_Duration_Of_Subscription();//
    bool Is_Station_Is_Avalible_In_Subscription();//hagora
    type_subscribtion Update_Subscription();//
    // buy_subscription();//
    type_subscribtion Add_Sub(bool &s,bool &p,bool &w);


};

#endif // USER_H
