#include "userclass.h"
#include "ticketpage.h"

QVector<UserClass> UserClass::users;
QVector<UserClass> UserClass::users_sign_up;
UserClass UserClass::thisuser;
QList<UserTicket> user_tickets;

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
    ifstream file("E:\\testing_signed.txt");
    if (!file.is_open()){
        qDebug()<<"error the file is open";
    }
    string line;
    while (getline(file, line)) {
        stringstream ss(line);

        string email, name, password, card_number_str, balance_str,type_sub,start_str,end_srt,stage_str,boolean_is_mounth_str,mouny_str;
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
            QString qstart = QString::fromStdString(start_str);
            QString qend = QString::fromStdString(end_srt);
            int stage = stoi(stage_str);
            User_subscribtion s1(type,stage,qstart,qend);
            UserClass user(qEmail, qName, qPassword, s1, card_number, balance);
            users_sign_up.push_back(user);


        }
        else if(type==pub){
            getline(ss, stage_str, ',');
            getline(ss, boolean_is_mounth_str, ',');
            getline(ss, start_str, ',');
            getline(ss, end_srt, ',');
            QString qstart = QString::fromStdString(start_str);
            QString qend = QString::fromStdString(end_srt);
            int stage = stoi(stage_str);
            int boolean_is_mounth = stoi(boolean_is_mounth_str);
            User_subscribtion s2(type,stage,boolean_is_mounth,qstart,qend);
            UserClass user2(qEmail, qName, qPassword, s2, card_number, balance);
            users_sign_up.push_back(user2);
        }
        else{
            getline(ss, mouny_str, ',');
            qDebug()<< "before";
            int mouny = stoi(mouny_str);
            qDebug()<< "before"<<mouny;
            User_subscribtion s3(type,mouny);
            UserClass user3(qEmail, qName, qPassword, s3, card_number, balance);
            qDebug()<<" wallet mony"<<user3.UserSub.wallet;
            users_sign_up.push_back(user3);

        }

        //users_sign_up.push_back(UserClass(qEmail, qName, qPassword, qSubscription, card_number, balance));
    }
    file.close();
    qDebug()<<"the users sighed but not login";

    for(const auto& it :users_sign_up){
        qDebug()<<it.Username;
        qDebug()<<it.Password;
        qDebug()<<it.Email;
        qDebug()<<it.balance;
        qDebug()<<it.UserSub.type_of_sub<<"\n";
    }
}

void UserClass::Write_users()
{
    ofstream outFile("E:\\testing.txt");

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        //return 1; // Return an error code
    }

    for(const auto& it:users){
        if(it.UserSub.type_of_sub==student){
            string sub=User_subscribtion::enumToString(it.UserSub.type_of_sub);
            qDebug()<<"user is srars and end "<<it.UserSub.sub_start_station<<" and "<<it.UserSub.sub_end_station;
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<','<<sub<<','<<it.Credit<<','<<it.balance<<','<<it.UserSub.stage<<','<<it.UserSub.sub_start_station.toStdString()<<','<<it.UserSub.sub_end_station.toStdString()<<endl;
        }
        else if(it.UserSub.type_of_sub==pub){
            string sub=User_subscribtion::enumToString(it.UserSub.type_of_sub);
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<','<<sub<<','<<it.Credit<<','<<it.balance<<','<<it.UserSub.stage<<','<<it.UserSub.dur_in_pub<<','<<it.UserSub.sub_start_station.toStdString()<<','<<it.UserSub.sub_end_station.toStdString()<<endl;

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
    ofstream outFile("E:\\testing_signed.txt");

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        //return 1; // Return an error code
    }

    for(const auto& it:users_sign_up){
        if(it.UserSub.type_of_sub==student){
            string sub=User_subscribtion::enumToString(it.UserSub.type_of_sub);
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<','<<sub<<','<<it.Credit<<','<<it.balance<<','<<it.UserSub.stage<<','<<it.UserSub.sub_start_station.toStdString()<<','<<it.UserSub.sub_end_station.toStdString()<<endl;
        }
        else if(it.UserSub.type_of_sub==pub){
            string sub=User_subscribtion::enumToString(it.UserSub.type_of_sub);
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<','<<sub<<','<<it.Credit<<','<<it.balance<<','<<it.UserSub.stage<<','<<it.UserSub.dur_in_pub<<it.UserSub.sub_start_station.toStdString()<<','<<it.UserSub.sub_end_station.toStdString()<<endl;

        }
        else{
            string sub=User_subscribtion::enumToString(it.UserSub.type_of_sub);
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<','<<sub<<','<<it.Credit<<','<<it.balance<<','<<it.UserSub.wallet<<endl;

        }
        if(it.Username=="ali"){
            outFile<<it.Email.toStdString()<<','<<it.Username.toStdString()<<','<<it.Password.toStdString()<<endl;
        }

    }

    outFile.close();
    qDebug()<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ after write";
    for(const auto& it :users_sign_up){

        qDebug()<<it.Username;
        qDebug()<<it.Password;
        qDebug()<<it.Email;
        qDebug()<<it.balance;
        qDebug()<<it.UserSub.type_of_sub<<"\n";
    }

}


 void UserClass::Read_File()
{
    ifstream file("E:\\testing.txt");
    if (!file.is_open()){
        qDebug()<<"error the file is open";
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string email, name, password, card_number_str, balance_str,type_sub,start_str,end_srt,stage_str,boolean_is_mounth_str,mouny_str;
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
            QString qEmail = QString::fromStdString(email);
            QString qName = QString::fromStdString(name);
            QString qPassword = QString::fromStdString(password);
            //QString qSubscription = QString::fromStdString(subscription);
            int card_number = stoi(card_number_str);
            int balance = stoi(balance_str);
            //qDebug() << "stage: " << QString::fromStdString(stage_str);
            QString qstart = QString::fromStdString(start_str);
            QString qend = QString::fromStdString(end_srt);
            int stage = stoi(stage_str);

            User_subscribtion s1(type,stage,qstart,qend);
            UserClass user(qEmail, qName, qPassword, s1, card_number, balance);
            qDebug()<<"staion start student"<<user.UserSub.sub_start_station<<"and "<<user.UserSub.sub_end_station;
            users.push_back(user);

        }
        else if(type==pub){

            getline(ss, stage_str, ',');
            getline(ss, boolean_is_mounth_str, ',');
            getline(ss, start_str, ',');
            getline(ss, end_srt, ',');
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
            User_subscribtion s2(type,stage,boolean_is_mounth,qstart,qend);
            UserClass user2(qEmail, qName, qPassword, s2, card_number, balance);
            qDebug()<<"staion start pub"<<user2.UserSub.sub_start_station<<"and "<<user2.UserSub.sub_end_station;
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
qDebug()<<"the users  login";
for(const auto& it :users){


        qDebug()<<it.Username;
        qDebug()<<it.Password;
        qDebug()<<it.Email;
        qDebug()<<it.balance;
        //qDebug()<<it.UserSub<<"\n";


    }
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


