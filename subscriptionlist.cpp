#include "subscriptionlist.h"
#include <QList>

QList<SubscriptionList> SubscriptionList::Stations;

SubscriptionList::SubscriptionList(){
    sub_name = "student";
    rides_no = "120";
    duration = "3";
}

SubscriptionList::SubscriptionList(QString Sub_name, QString Rides_no, QString Duration){
    sub_name = Sub_name;
    rides_no = Rides_no;
    duration = Duration;
}

