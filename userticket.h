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
    static QString starting;
    static QString ending;
    UserTicket();
    UserTicket( float, QString, QString);
    static void Read_History();
    static void Write_History();
};

#endif // USERTICKET_H
