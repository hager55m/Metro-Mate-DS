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
    static void set_this_user(UserClass);
    QList<UserTicket> user_tickets;
    void Add_Ticket(QString ,QString);
    static void Read_File();
    static void Read_User_Signed();
    static void Write_users();
     static void Write_users_Signed();
};

#endif // USERCLASS_H
