#ifndef USERCLASS_H
#define USRCLASS_H
#include "userticket.h"
#include "user_subscribtion.h"
#include <QString>
#include <QVector>
#include <QList>
#include <iostream>
#include <fstream>
#include <sstream>
#include "datetime.h"

using namespace std;
class UserClass
{
public:
    QString Email;
    QString Username;
    QString Password;
    User_subscribtion UserSub;// elmafrod yb2a instant not just name
    int Credit;
    static QVector<UserClass> users;
    static QVector<UserClass> users_sign_up;
    int index_in_vector;
    int balance;
    UserClass();
    UserClass(QString,QString,QString,User_subscribtion,int,int);
    UserClass(QString,QString,QString,int,int);
    static UserClass thisuser;
    static User_subscribtion thissub;
    static void set_this_user(UserClass);
    QList<UserTicket> user_tickets;
    static float Calc_cost(QString,QString);
    bool Check_No_Of_Rides_left();
    bool  Check_Of_Duration_Of_Subscription();
   int Add_Ticket(float c,UserTicket t );
    static void Read_File();
    static void Read_User_Signed();
    static void Write_users();
     static void Write_users_Signed();


};

#endif // USERCLASS_H
