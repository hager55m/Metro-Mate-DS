#ifndef USERCLASS_H
#define USRCLASS_H
#include "ticketpage.h"
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
    UserClass();
    UserClass(QString,QString,QString);
    static UserClass thisuser;
    static QList<QSharedPointer<TicketPage>> user_tickets;
     void Add_Ticket(QString ,QString);
};

#endif // USERCLASS_H
