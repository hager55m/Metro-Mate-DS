#ifndef USERCLASS_H
#define USRCLASS_H
#include "userticket.h"
#include <QString>
#include <QVector>
#include <QList>
class UserClass
{
public:
    QString Username;
    QString Password;
    QString UserSub;
    static QVector<UserClass> users;
    int index_in_vector;
    int balance;
    UserClass();
    UserClass(QString,QString,QString,int);
    static UserClass thisuser;
     QList<UserTicket> user_tickets;
     void Add_Ticket(QString ,QString);
};

#endif // USERCLASS_H
