#include "user.h"
#include "ticketpage.h"
#include "ui_ticketpage.h"
#include "QObject"
#include <QDebug>
#include <chrono>
#include <ctime>
#include<fstream>
#include<vector>
#include<iostream>
using namespace std;

User::User(){
}

User::User(string name,int p)
{
    Username=name;
    Password=p;
}

void User::Add_Ride()

{   /*// Get current time
    std::time_t currentTime;
    std::time(&currentTime);
    std::tm localTime;

    // Get local time
    if (localtime_s(&localTime, &currentTime) == 0) {
        char buffer[80];

        // Format date and time
        if (std::strftime(buffer, sizeof(buffer), "%d/%m/%Y %H:%M:%S", &localTime) > 0) {
            // Convert buffer to a string
            std::string currentDateTime(buffer);

            // Print current date and time
            cout << "Current Date and Time: " << currentDateTime << endl;
        }
        else {
            cout << "Error formatting date and time!" << endl;
        }
    }
    else {
        cout << "Error getting local time!" << endl;
    }*/


    std::time_t currentTime;
    std::time(&currentTime);
    std::tm localTime;
    DateTime currentDateTime;

    // Use localtime_s instead of localtime
    if (localtime_s(&localTime, &currentTime) == 0) {
        currentDateTime.day = localTime.tm_mday;
        currentDateTime.month = localTime.tm_mon + 1; // Month is 0-based
        currentDateTime.year = localTime.tm_year + 1900; // Years since 1900
        currentDateTime.hour = localTime.tm_hour;
        currentDateTime.minute = localTime.tm_min;
        currentDateTime.second = localTime.tm_sec;
    }

    //bool Flag_Of_wallet=Check_Wallet( Wallet);
    //if 3 booleans alleast 1 is true;
    if(stu==false&&pub==false&&wal==false){
        UserSub=Add_Sub(stu,pub,wal);
    }
    bool flag_Of_Rides=Check_No_Of_Rides(UserSub,stu,pub,wal);
    //wallet Wallet=Add_Wallet();
    string start_Sta;
    string end_sta;
    float c=Calc_cost( start_Sta, end_sta);
    // check 3la type el sub
    if(stu){
        if(flag_Of_Rides){
    Rides r= *new Rides(currentDateTime,c,start_Sta,end_sta,UserSub);
    No_Of_Rides.push_back(r);
    // in case if is a sub of student
    UserSub.no_of_trips --;
        }
    }
    else if(pub){
        if(flag_Of_Rides){
        Rides r= *new Rides(currentDateTime,c,start_Sta,end_sta,UserSub);
        No_Of_Rides.push_back(r);
        //check 3la el duraion
        // in case if is a sub of public
        UserSub.no_of_trips--;
        }
    }
    // check 3la lw wallet
    else if(wal){
        if(flag_Of_Rides){
        Rides r= *new Rides(currentDateTime,c,start_Sta,end_sta,UserSub);
        No_Of_Rides.push_back(r);
        //in case if is wallet
        //will handel of amount in sub
        UserSub.amount_money--;
        //Wallet.Amount=Wallet.Amount-c;
        }
    }
}

bool User::Check_No_Of_Rides(type_subscribtion sub,bool s,bool p,bool w){
    if(s){
        if(No_Of_Rides.size()>180){
            qDebug()<<"limit of rides finish plesea update your subscription";
            return false;
        }
        else
            return true;
         }
    else if(p)
    {
        if(sub.dur_in_pub==12)
                 if(No_Of_Rides.size()>730){
                     qDebug()<<"limit of rides finish plesea update your subscription";
                     return false;  }
                 else
                     return true;
        else if(sub.dur_in_pub==1)
                if(No_Of_Rides.size()>60){
                     qDebug()<<"limit of rides finish plesea update your subscription";
                     return false;  }
                else
                     return true;

    }
    else if(w){
             // elmafrood yb2a el amount
             if(sub.amount_money==0){
                 return false;
             }
             else
                 return true;

         }


}

bool User::Check_Of_Duration_Of_Subscription()
{
    // passing 3 booleans by refrence + usersub
    // check date today with date of sub + duration of this sub
    // example stu:date today with date of sub+ 3 months
    //if equal return false --> this mean that the sub duration end
    // and call ubdate sub directly + 3 booleans = false + passing the 3 booleans by refrence
    // problem--> how to return sub???????(i can pass  bool by ref and make fun return sub )
    //usersub==retrun updatesub
}

bool User::Is_Station_Is_Avalible_In_Subscription()
{   //hagora
    //check if the station he want to go is in the sub or not
}

type_subscribtion User::Update_Subscription()
{
    //cal the add sub again return sub
    // return it

}

type_subscribtion User::Add_Sub(bool &s,bool &p,bool &w)
{
    if(true){//if the user chose stu
       type_subscribtion Sub;//call fun of stu
        s=true;
       return Sub;
    }
    else if(true){//if the user chose pub
        type_subscribtion Sub;//call constructor of pub
        p=true;
        return Sub;
    }
    else {//if wallet
        type_subscribtion Sub;//call constructor of wallet
        w=true;
        return Sub;
    }

}

void User::view_ride_history()
{
    list<Rides>::iterator it;
    it=No_Of_Rides.begin();
    for(it;it!=No_Of_Rides.end();++it){
        cout<<it->date.day<<it->date.month<<it->date.year<<endl<<it->First_station;
        cout<<it->End_station<<endl<<it->Cost;

    }
}
float User::Calc_cost(string start,string end)
{
   //from el admin

}


