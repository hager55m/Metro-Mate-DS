#ifndef TYPE_SUBSCRIBTION_H
#define TYPE_SUBSCRIBTION_H

#include <string>
using namespace std;
enum subType {
    student = 0,
    pub =1,
    wallet=2


};

class type_subscribtion
{
public:
    subType type_of_sub;
    string start, end;
    int no_of_trips,amount_money;
    //dur_of_sub;
    bool dur_in_pub; // true = 1 month false= 1 year
    int stage;
    type_subscribtion();
    type_subscribtion(subType type_of_sub0,int stage0, string start0,string end0); //const of type student
    type_subscribtion(subType type_of_sub1, int stage1, bool dur_in_pub1);//const of type public
    type_subscribtion(subType type_of_sub2,int money2);// const of type wallet


};

#endif // TYPE_SUBSCRIBTION_H
