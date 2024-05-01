#include "userclass.h"

QVector<UserClass> UserClass::users;
UserClass UserClass::thisuser;
QList<QSharedPointer<TicketPage>> UserClass::user_tickets;

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
/*void Add_Ticket(QString ,QString){

    DateTime currentDateTime = DateTime() ;


    // Use localtime_s instead of localtime


    //bool Flag_Of_wallet=Check_Wallet( Wallet);
    //if 3 booleans alleast 1 is true;
    /* if (UserSub.type_of_sub ==NULL) { ask hager about it ??????/
        UserSub = Add_Sub();
    }
    bool flag_Of_Rides = Check_No_Of_Rides();
    //wallet Wallet=Add_Wallet();

    float c = Calc_cost(start_Sta, end_sta);
    // check 3la type el sub
    if (UserSub==0) {
        if (flag_Of_Rides) {
            Rides r = *new Rides (currentDateTime, c, start_Sta, end_sta);
            No_Of_Rides.push_back(r);
            // in case if is a sub of student
            UserSub.no_of_trips--;
        }
    }
    else if (UserSub == 1) {
        if (flag_Of_Rides) {
            Rides r = *new Rides(currentDateTime, c, start_Sta, end_sta);
            No_Of_Rides.push_back(r);
            //check 3la el duraion
            // in case if is a sub of public
            UserSub.no_of_trips--;
        }
    }
    // check 3la lw wallet
    else if (UserSub.type_of_sub == 2) {
        if (flag_Of_Rides) {
            Rides r = *new Rides(currentDateTime, c, start_Sta, end_sta);
            No_Of_Rides.push_back(r);
            //in case if is wallet
            //will handel of amount in sub
            UserSub.amount_money-=c;
            //Wallet.Amount=Wallet.Amount-c;
        }
    }
}*/


