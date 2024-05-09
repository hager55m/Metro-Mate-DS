#include "user_subscribtion.h"


User_subscribtion::User_subscribtion() {}


User_subscribtion::User_subscribtion(subType type_of_sub0, int stage0, QString start0, QString end0) {
    DateTime t =DateTime();
    type_of_sub = type_of_sub0;
    stage = stage0;//to be edited when graph is finished
    sub_start_station = start0;
    sub_end_station = end0;
    no_of_trips = 180;

    Start_of_sub = t;
    dur_in_pub = 0;
    end_of_sub = Start_of_sub.end_time(type_of_sub, Start_of_sub, dur_in_pub);

}

User_subscribtion::User_subscribtion(subType type_of_sub1, int stage1, int dur_in_pub1, QString start1 , QString end1)//const of type public
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
subType User_subscribtion::stringToEnum(const std::string& str) {
    static const std::map<std::string, subType> map = {
        {"student", subType::student},
        {"pub", subType::pub},
        {"wallet", subType::wallet}
    };

    auto it = map.find(str);
    if (it != map.end()) {
        return it->second;
    } else {
        // Handle the case where the input string does not match any enum value
        throw std::invalid_argument("Invalid enum value: " + str);
    }
}

 string User_subscribtion::enumToString(subType type) {
    static const std::map<subType, std::string> reverseMap = {
        {subType::student, "student"},
        {subType::pub, "pub"},
        {subType::wallet, "wallet"}
    };

    auto it = reverseMap.find(type);
    if (it != reverseMap.end()) {
        return it->second;
    } else {
        // Handle the case where the input enum value does not match any string
        throw std::invalid_argument("Invalid enum value");
    }
 }

 void User_subscribtion::Read_subscription()
 {
     ifstream file ("E:\\subscription.txt");
     if (!file.is_open()){
        //qDebug()<<"error the file is open";
     }

     string line;
     while (getline(file, line)){

     }
 }

