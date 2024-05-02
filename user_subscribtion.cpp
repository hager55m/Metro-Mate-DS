#include "user_subscribtion.h"

User_subscribtion::User_subscribtion() {}


User_subscribtion::User_subscribtion(subType type_of_sub0, int stage0, QString start0, QString end0) {
    DateTime t =DateTime();
    type_of_sub = type_of_sub0;
    stage = stage0;//to be edited when graph is finished
    sub_start_station = start0;
    sub_start_station = end0;
    no_of_trips = 180;

    Start_of_sub = t;
    dur_in_pub = 0;
    end_of_sub = Start_of_sub.end_time(type_of_sub, Start_of_sub, dur_in_pub);

}

User_subscribtion::User_subscribtion(subType type_of_sub1, int stage1, bool dur_in_pub1, QString start1 , QString end1)//const of type public
{
      DateTime t =DateTime();
    type_of_sub = type_of_sub1;
    stage = stage1;
    sub_start_station = start1;
    sub_end_station = end1;
    dur_in_pub = dur_in_pub1;
    Start_of_sub = t;
    end_of_sub = Start_of_sub.end_time(type_of_sub, Start_of_sub, dur_in_pub1);
    if (dur_in_pub == 1) {
        no_of_trips = 60;
    }
    else {
        no_of_trips = 730;
    }


}

User_subscribtion::User_subscribtion(subType type_of_sub2, int money2)// const of type wallet
{
    type_of_sub = type_of_sub2;
    wallet = money2;

}
