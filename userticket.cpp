#include "userticket.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <userclass.h>
#include <QDebug>

using namespace std;
UserTicket::UserTicket() {}

UserTicket::UserTicket( float c, QString start, QString end)
{
    date=DateTime();
    Cost=c;
    Start_station=start;
    End_station=end;
}

void UserTicket::Read_History()
{
    ifstream file ("E:\\User_history.txt");
    if (!file.is_open()){
        qDebug()<<"error the file is open";
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string Username,cost,start_str,end_srt;
        getline(ss, Username, ',');
        getline(ss, cost, ',');
        getline(ss, start_str, ',');
        getline(ss, end_srt, ',');
        QString qusername = QString::fromStdString(Username);
        QString qstart = QString::fromStdString(start_str);
        QString qend = QString::fromStdString(end_srt);
        float cast_f = std::stof(cost);
        for(auto& it:UserClass::users){

            if(it.Username==qusername){
                it.user_tickets.push_back(UserTicket(cast_f,qstart,qend));

                break;
            }
        }


    }
    file.close();
    for(const auto& it :UserClass::users){
        for(auto i =it.user_tickets.begin();i!= it.user_tickets.end();++i){
            qDebug()<<it.Username;
            qDebug()<<(*i).Cost;
            qDebug()<<(*i).Start_station;
            qDebug()<<(*i).End_station;

        }
    }
}

void UserTicket::Write_History()
{
    ofstream outFile("E:\\User_history.txt");

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        //return 1; // Return an error code
    }
    for(const auto& it :UserClass::users){
        for(const auto& i:it.user_tickets){
            outFile<<it.Username.toStdString()<<','<<i.Cost<<','<<i.Start_station.toStdString()<<','<<i.End_station.toStdString()<<endl;
        }

    }
//outFile.close();
}
