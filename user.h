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
    string name;
    string mail;
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
       vector<User>uuser;

public:



 /*  ifstream file("testing.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    // Read data from the file and populate the vector
   std::string name;
    std::string Username;
    int Password;
    std::string mail;
    while (file >> name >> Username>>Password>>mail) {
        users.push_back({name, Username,Password,mail});
    }

    // Close the file
    file.close();*/




     User ();
    User(string,int);
    User(string uname, int pwd, string n, string mail);
    void Add_Ride();
    void view_ride_history();
    float Calc_cost(string,string);//mn el admin
    bool Check_No_Of_Rides(type_subscribtion ,bool,bool,bool);
    bool Check_Of_Duration_Of_Subscription();//
    bool Is_Station_Is_Avalible_In_Subscription();//hagora
    type_subscribtion Update_Subscription();//
    // buy_subscription();//
    type_subscribtion Add_Sub(bool &s,bool &p,bool &w);
    void editUserInfo();
    void editUsername();
    void editPassword();
    void editName();
    void editContactInfo();


};

#endif // USER_H
