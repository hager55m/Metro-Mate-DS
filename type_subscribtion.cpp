#include "type_subscribtion.h"

using namespace std;
type_subscribtion::type_subscribtion(){

}
type_subscribtion::type_subscribtion(subType type_of_sub0, int stage0, string start0, string end0) {
    type_of_sub = type_of_sub0;
    stage = stage0;//to be edited when graph is finished
    start = start0;
    end = end0;
    no_of_trips = 180;
    amount_money = 0;

}
type_subscribtion::type_subscribtion(subType type_of_sub1, int stage1, bool dur_in_pub1)//const of type public
{
    type_of_sub = type_of_sub1;
    stage = stage1;
    dur_in_pub = dur_in_pub1;
    if (dur_in_pub == 1) {
        no_of_trips = 60;
    }
    else {
        no_of_trips = 730;
    }

    amount_money = 0;
}
type_subscribtion::type_subscribtion(subType type_of_sub2, int money2)// const of type wallet
{
    type_of_sub = type_of_sub2;
    amount_money = money2;
}
