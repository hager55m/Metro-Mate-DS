#include "userclass.h"

QVector<UserClass> UserClass::users;
UserClass UserClass::thisuser;

UserClass::UserClass(){
    Username = "tester";
    Password = "1234";
    UserSub = "help";
    users.push_back(*this);
}

UserClass::UserClass(QString name,QString pass,QString type) {
    Username=name;
    Password = pass;
    UserSub = type;
}


