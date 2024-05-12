#include "userclass.h"
#include "ticketpage.h"

QVector<UserClass> UserClass::users;
QVector<UserClass> UserClass::users_sign_up;
UserClass UserClass::thisuser;
User_subscribtion UserClass::thissub;
QList<UserTicket> user_tickets;
QString Username;
QString Password;
User_subscribtion UserSub;// elmafrod yb2a instant not just name
int Credit;
UserClass::UserClass(){

}

UserClass::UserClass(QString email ,QString name,QString pass,User_subscribtion type,int card,int b) {
    Email=email;
    Username=name;
    Password = pass;
    UserSub = type;
    Credit=card;
    balance =b;


}

UserClass::UserClass(QString email, QString name, QString pass, int card, int b)
{
    Email=email;
    Username=name;
    Password = pass;
    Credit=card;
    balance =b;
}

void UserClass::set_this_user(UserClass s1)
{
    thisuser=s1;
}
void UserClass::Read_User_Signed(){
    ifstream file("C:/Users/DELL/Desktop/DS/Metro-Mate-DS/img/files/testing_signed.txt");
    if (!file.is_open()){
        qDebug()<<"error the file is open";
    }
    string line;
    while (getline(file, line)) {
        stringstream ss(line);

        string email, name, password, card_number_str, balance_str,type_sub,start_str,end_srt,stage_str,boolean_is_mounth_str,mouny_str,sac_str,min_str,hou_str,day_str,month_str,year_str;;
        //User_subscribtion subscription;

        // Read each comma-separated value from the line
        getline(ss, email, ',');
        getline(ss, name, ',');
        getline(ss, password, ',');
        getline(ss, type_sub, ',');
        getline(ss, card_number_str, ',');
        getline(ss, balance_str, ',');
        //QString qSubscription = QString::fromStdString(subscription);
        int card_number = stoi(card_number_str);
        int balance = stoi(balance_str);
        subType type=User_subscribtion::stringToEnum(type_sub);


        QString qEmail = QString::fromStdString(email);
        QString qName = QString::fromStdString(name);
        QString qPassword = QString::fromStdString(password);
        if(type==student){
            getline(ss, stage_str, ',');
            getline(ss, start_str, ',');
            getline(ss, end_srt, ',');
            getline(ss, sac_str, ',');
            getline(ss, min_str, ',');
            getline(ss, hou_str, ',');
            getline(ss, day_str, ',');
            getline(ss, month_str, ',');
            getline(ss, year_str, ',');

            QString qstart = QString::fromStdString(start_str);
            QString qend = QString::fromStdString(end_srt);
            int stage = stoi(stage_str);
            int sac_int = stoi(sac_str);
            int min_int = stoi(min_str);
            int hou_int = stoi(hou_str);
            int day_int = stoi(day_str);
            int month_int = stoi(month_str);
            int year_int = stoi(year_str);
            User_subscribtion s1(type,stage,qstart,qend);
            s1.Start_of_sub.second=sac_int;
            s1.Start_of_sub.minute=min_int;
            s1.Start_of_sub.hour=hou_int;
            s1.Start_of_sub.day=day_int;
            s1.Start_of_sub.month=month_int;
            s1.Start_of_sub.year=year_int;
            UserClass user(qEmail, qName, qPassword, s1, card_number, balance);
            users_sign_up.push_back(user);


        }
        else if(type==pub){
            getline(ss, stage_str, ',');
            getline(ss, boolean_is_mounth_str, ',');
            getline(ss, start_str, ',');
            getline(ss, end_srt, ',');
            getline(ss, sac_str, ',');
            getline(ss, min_str, ',');
            getline(ss, hou_str, ',');
            getline(ss, day_str, ',');
            getline(ss, month_str, ',');
            getline(ss, year_str, ',');

            QString qstart = QString::fromStdString(start_str);
            QString qend = QString::fromStdString(end_srt);
            int stage = stoi(stage_str);

            int boolean_is_mounth = stoi(boolean_is_mounth_str);
            int sac_int = stoi(sac_str);
            int min_int = stoi(min_str);
            int hou_int = stoi(hou_str);
            int day_int = stoi(day_str);
            int month_int = stoi(month_str);
            int year_int = stoi(year_str);
            User_subscribtion s2(type,stage,boolean_is_mounth,qstart,qend);
            s2.Start_of_sub.second=sac_int;
            s2.Start_of_sub.minute=min_int;
            s2.Start_of_sub.hour=hou_int;
            s2.Start_of_sub.day=day_int;
            s2.Start_of_sub.month=month_int;
            s2.Start_of_sub.year=year_int;
            UserClass user2(qEmail, qName, qPassword, s2, card_number, balance);
            users_sign_up.push_back(user2);
        }
        else{
            getline(ss, mouny_str, ',');
            //qDebug()<< "before";
            int mouny = stoi(mouny_str);
            //qDebug()<< "before"<<mouny;
            User_subscribtion s3(type,mouny);
            UserClass user3(qEmail, qName, qPassword, s3, card_number, balance);
            //qDebug()<<" wallet mony"<<user3.UserSub.wallet;
            users_sign_up.push_back(user3);

        }

        //users_sign_up.push_back(UserClass(qEmail, qName, qPassword, qSubscription, card_number, balance));
    }
    file.close();
    //qDebug()<<"the users sighed but not login";
}

void UserClass::Write_users()
{
    ofstream outFile("C:/Users/DELL/Desktop/DS/Metro-Mate-DS/img/files/testing.txt");

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        //return 1; // Return an error code
    }

    for(const auto& it:users){
        if(it.UserSub.type_of_sub==student){
            string sub=User_subscribtion::enumToString(it.UserSub.type_of_sub);
            //qDebug()<<"user is srars and end "<<it.UserSub.sub_start_station<<" and "<<it.UserSub.sub_end_station;
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<','<<sub<<','<<it.Credit<<','<<it.balance<<','<<it.UserSub.stage<<','<<it.UserSub.sub_start_station.toStdString()<<','<<it.UserSub.sub_end_station.toStdString()
                    <<','<<it.UserSub.Start_of_sub.second<<','<<it.UserSub.Start_of_sub.minute<<','<<it.UserSub.Start_of_sub.hour<<','<<it.UserSub.Start_of_sub.day<<','<<it.UserSub.Start_of_sub.month<<','<<it.UserSub.Start_of_sub.year<<endl;
        }
        else if(it.UserSub.type_of_sub==pub){
            string sub=User_subscribtion::enumToString(it.UserSub.type_of_sub);
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<','<<sub<<','<<it.Credit<<','<<it.balance<<','<<it.UserSub.stage<<','<<it.UserSub.dur_in_pub<<','<<it.UserSub.sub_start_station.toStdString()<<','<<it.UserSub.sub_end_station.toStdString()
                <<','<<it.UserSub.Start_of_sub.second<<','<<it.UserSub.Start_of_sub.minute<<','<<it.UserSub.Start_of_sub.hour<<','<<it.UserSub.Start_of_sub.day<<','<<it.UserSub.Start_of_sub.month<<','<<it.UserSub.Start_of_sub.year<<endl;

        }
        else{
            string sub=User_subscribtion::enumToString(it.UserSub.type_of_sub);
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<','<<sub<<','<<it.Credit<<','<<it.balance<<','<<it.UserSub.wallet<<endl;

        }
    }
    outFile.close();
}

void UserClass::Write_users_Signed()
{
    ofstream outFile("C:/Users/DELL/Desktop/DS/Metro-Mate-DS/img/files/testing_signed.txt");

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        //return 1; // Return an error code
    }

    for(const auto& it:users_sign_up){
        if(it.UserSub.type_of_sub==student){
            string sub=User_subscribtion::enumToString(it.UserSub.type_of_sub);
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<','<<sub<<','<<it.Credit<<','<<it.balance<<','<<it.UserSub.stage<<','<<it.UserSub.sub_start_station.toStdString()<<','<<it.UserSub.sub_end_station.toStdString()
            <<','<<it.UserSub.Start_of_sub.second<<','<<it.UserSub.Start_of_sub.minute<<','<<it.UserSub.Start_of_sub.hour<<','<<it.UserSub.Start_of_sub.day<<','<<it.UserSub.Start_of_sub.month<<','<<it.UserSub.Start_of_sub.year<<endl;
        }
        else if(it.UserSub.type_of_sub==pub){
            string sub=User_subscribtion::enumToString(it.UserSub.type_of_sub);
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<','<<sub<<','<<it.Credit<<','<<it.balance<<','<<it.UserSub.stage<<','<<it.UserSub.dur_in_pub<<','<<it.UserSub.sub_start_station.toStdString()<<','<<it.UserSub.sub_end_station.toStdString()
                    <<','<<it.UserSub.Start_of_sub.second<<','<<it.UserSub.Start_of_sub.minute<<','<<it.UserSub.Start_of_sub.hour<<','<<it.UserSub.Start_of_sub.day<<','<<it.UserSub.Start_of_sub.month<<','<<it.UserSub.Start_of_sub.year<<endl;


        }
        else{
            string sub=User_subscribtion::enumToString(it.UserSub.type_of_sub);
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<','<<sub<<','<<it.Credit<<','<<it.balance<<','<<it.UserSub.wallet<<endl;

        }


    }

    outFile.close();
}


 void UserClass::Read_File()
{
    ifstream file("C:/Users/DELL/Desktop/DS/Metro-Mate-DS/img/files/testing.txt");
    if (!file.is_open()){
        qDebug()<<"error the file is open";
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string email, name, password, card_number_str, balance_str,type_sub,start_str,end_srt,stage_str,boolean_is_mounth_str,mouny_str,sac_str,min_str,hou_str,day_str,month_str,year_str;
        User_subscribtion subscription;

        // Read each comma-separated value from the line
        getline(ss, email, ',');
        getline(ss, name, ',');
        getline(ss, password, ',');
        getline(ss, type_sub, ',');
        getline(ss, card_number_str, ',');

        getline(ss, balance_str, ',');


        //qDebug() << "card_number_str: " << QString::fromStdString(card_number_str);
        //qDebug() << "balance_str: " << QString::fromStdString(balance_str);
        subType type=User_subscribtion::stringToEnum(type_sub);


        if(type==student){


            getline(ss, stage_str, ',');
            getline(ss, start_str, ',');
            getline(ss, end_srt, ',');
            getline(ss, sac_str, ',');
            getline(ss, min_str, ',');
            getline(ss, hou_str, ',');
            getline(ss, day_str, ',');
            getline(ss, month_str, ',');
            getline(ss, year_str, ',');

            QString qEmail = QString::fromStdString(email);
            QString qName = QString::fromStdString(name);
            QString qPassword = QString::fromStdString(password);
            //QString qSubscription = QString::fromStdString(subscription);
            int card_number = stoi(card_number_str);
            int balance = stoi(balance_str);

            int sac_int = stoi(sac_str);
            int min_int = stoi(min_str);
            int hou_int = stoi(hou_str);
            int day_int = stoi(day_str);
            int month_int = stoi(month_str);
            int year_int = stoi(year_str);
            //qDebug() << "stage: " << QString::fromStdString(stage_str);
            QString qstart = QString::fromStdString(start_str);
            QString qend = QString::fromStdString(end_srt);
            int stage = stoi(stage_str);

            User_subscribtion s1(type,stage,qstart,qend);
            s1.Start_of_sub.second=sac_int;
            s1.Start_of_sub.minute=min_int;
            s1.Start_of_sub.hour=hou_int;
            s1.Start_of_sub.day=day_int;
            s1.Start_of_sub.month=month_int;
            s1.Start_of_sub.year=year_int;


            UserClass user(qEmail, qName, qPassword, s1, card_number, balance);
            //qDebug()<<"staion start student"<<user.UserSub.sub_start_station<<"and "<<user.UserSub.sub_end_station;
            users.push_back(user);

        }
        else if(type==pub){

            getline(ss, stage_str, ',');
            getline(ss, boolean_is_mounth_str, ',');
            getline(ss, start_str, ',');
            getline(ss, end_srt, ',');
            getline(ss, sac_str, ',');
            getline(ss, min_str, ',');
            getline(ss, hou_str, ',');
            getline(ss, day_str, ',');
            getline(ss, month_str, ',');
            getline(ss, year_str, ',');

            //subType type=User_subscribtion::stringToEnum(type_sub);
            QString qEmail = QString::fromStdString(email);
            QString qName = QString::fromStdString(name);
            QString qPassword = QString::fromStdString(password);
            //QString qSubscription = QString::fromStdString(subscription);
            int card_number = stoi(card_number_str);
            int balance = stoi(balance_str);
            QString qstart = QString::fromStdString(start_str);
            QString qend = QString::fromStdString(end_srt);
            int stage = stoi(stage_str);
            int boolean_is_mounth = stoi(boolean_is_mounth_str);
            int sac_int = stoi(sac_str);
            int min_int = stoi(min_str);
            int hou_int = stoi(hou_str);
            int day_int = stoi(day_str);
            int month_int = stoi(month_str);
            int year_int = stoi(year_str);
            User_subscribtion s2(type,stage,boolean_is_mounth,qstart,qend);
            s2.Start_of_sub.second=sac_int;
            s2.Start_of_sub.minute=min_int;
            s2.Start_of_sub.hour=hou_int;
            s2.Start_of_sub.day=day_int;
            s2.Start_of_sub.month=month_int;
            s2.Start_of_sub.year=year_int;
            UserClass user2(qEmail, qName, qPassword, s2, card_number, balance);
            //qDebug()<<"staion start pub"<<user2.UserSub.sub_start_station<<"and "<<user2.UserSub.sub_end_station;
            users.push_back(user2);
        }
        else{


            getline(ss, mouny_str, ',');
            //subType type=User_subscribtion::stringToEnum(type_sub);
            QString qEmail = QString::fromStdString(email);
            QString qName = QString::fromStdString(name);
            QString qPassword = QString::fromStdString(password);
            //QString qSubscription = QString::fromStdString(subscription);
            int card_number = stoi(card_number_str);
            int balance = stoi(balance_str);
            int mouny = stoi(mouny_str);
            User_subscribtion s3(type,mouny);
            UserClass user3(qEmail, qName, qPassword, s3, card_number, balance);
            users.push_back(user3);

        }
    }
    file.close();
}


float UserClass:: Calc_cost(QString,QString){
    return 11;
}

bool  UserClass:: Check_No_Of_Rides_left(){

    if(UserSub.no_of_trips==0){
        return false;
    }else{
        return true;
    }
}

bool UserClass:: Check_Of_Duration_Of_Subscription()
{

    DateTime currentDateTime;
    if (UserSub.type_of_sub == 0 || UserSub.type_of_sub == 1) {
        if (UserSub.end_of_sub.compare(currentDateTime)<=0) {
            return 1;
        }
        else {
            return -1;
        }
    }
    else {
        return 1;
    }
    return 1;
}
// 1 = done 2 = no of rides are 0 3= subscribtion ended 4 = wallet is not enough
int  UserClass:: Add_Ticket(float c,UserTicket t ){
    t.Cost=c;

     bool  flag_Of_Rides=Check_No_Of_Rides_left();
   bool flag_sub= Check_Of_Duration_Of_Subscription();
    // check 3la type el sub

    if ( UserSub.type_of_sub==0) {
       if (flag_sub){
        if (flag_Of_Rides) {
           // UserTicket t =UserTicket(c,start, end);
            user_tickets.push_back(t);

            UserSub.no_of_trips--;
            return 1;

        }else{
            return 2;
        }
       }else{
           return 3;
       }
    }
    else if (UserSub.type_of_sub == 1) {
        if(flag_sub){
        if (flag_Of_Rides) {
            //UserTicket t =UserTicket(c,start, end);
            user_tickets.push_back(t);

            UserSub.no_of_trips--;
            return 1;
        }else{
            return 2;
        }
        }else{
            return 3;
        }
    }
    //check 3la lw wallet
    else if (UserSub.type_of_sub == 2) {
        if (UserSub.wallet>c) {
            //UserTicket t =UserTicket(c,start, end);
            user_tickets.push_back(t);
            // in case if is a sub of student
            UserSub.no_of_trips--;
           UserSub.wallet-=c;
            return 1;
        }
        else{
            //qDebug()<<"wallet not enough";
            return 4;
        }

    }
   // return true;

     // return false;

}


