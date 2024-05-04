#ifndef USERTICKET_H
#define USERTICKET_H
#include"datetime.h"
#include"QString"
#include <iostream>
#include <fstream>
#include <sstream>
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
    static void Read_History();
    static void Write_History();
};

#endif // USERTICKET_H
