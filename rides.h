#ifndef RIDES_H
#define RIDES_H
#include<time.h>
#include<string>
#include <ctime>
#include<subscriptionclass.h>
#include<Time_Adn_Date.h>
#include<type_subscribtion.h>
using namespace std;


class Rides
{
public:
    DateTime date ;
    float Cost;
    string First_station;
    string End_station;
    type_subscribtion sub;
    //int Code;

    Rides();
    Rides(DateTime,float,string,string,type_subscribtion);
};

#endif // RIDES_H
