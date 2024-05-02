#ifndef USER_SUBSCRIBTION_H
#define USER_SUBSCRIBTION_H
#include "QString"
#include "datetime.h"
enum subType {
    student = 0,
    pub = 1,
    wallet = 2


};
class User_subscribtion
{
public:
    subType type_of_sub;
    QString sub_start_station, sub_end_station;
    int no_of_trips, wallet;

    DateTime   Start_of_sub,end_of_sub;
    bool dur_in_pub; // true = 1 month false= 1 year
    int stage;
    User_subscribtion();
    User_subscribtion(subType type_of_sub0, int stage0, QString start0, QString end0); //const of type student
    User_subscribtion(subType type_of_sub1, int stage1, bool dur_in_pub1, QString start0, QString end0);//const of type public
    User_subscribtion(subType type_of_sub2, int money2);// const of type wallet
};

#endif // USER_SUBSCRIBTION_H
