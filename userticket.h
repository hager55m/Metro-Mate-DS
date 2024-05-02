#ifndef USERTICKET_H
#define USERTICKET_H
#include"datetime.h"
#include"QString"
class UserTicket
{
public:
    DateTime date;
    float Cost;
    QString Start_station;
    QString End_station;
    //  type_subscribtion sub;
    //int Code;

    UserTicket();
     UserTicket( float, QString, QString);
};

#endif // USERTICKET_H
