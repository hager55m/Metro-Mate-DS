#include "subscriptionlist.h"
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "addsub.h"

QList<QString> SubscriptionList::Stations;

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


void SubscriptionList::removeSubscription(const QString &subName) {
    for (int i = 0; i < Stations.size(); ++i) {
        if (Stations[i] == subName) {
            Stations.removeAt(i);
            return;
        }
    }
}

void SubscriptionList::savedate(QString Sub_name, QString Rides_no , QString Duration){
    bool to_be_saved = false;
    addsub *ads = new addsub();
    QFile file("D:/QT/project/Metro-Mate-DS/img/files/Sub.txt");
    // checking if data is duplicate
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Failed to open file for reading:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();

        if (line.toLower() == Sub_name.toLower() && line == Duration)
        {
            file.close();
            QMessageBox::information(ads, "Add Subscription", "Data Duplicate Detected!\nThis Subscription already exists");
            to_be_saved = false;
            break;
        }
        else{
            to_be_saved = true;
        }

        if (line.toLower() == Sub_name.toLower()){
            SubscriptionList::Stations.push_back(line);
        }
    }
    file.close(); // Close the file

    if(to_be_saved){
        // saving data into file
        if (!file.open(QIODevice::Append | QIODevice::Text))
        {
            qDebug() << "Failed to open file for writing:" << file.errorString();
            return;
        }

        QTextStream out(&file);
        out << Sub_name << "\n";
        out << Rides_no << "\n";
        out << Duration << "\n";
        file.close();

        QMessageBox::information(ads, "Add Subscription", "Subscription added successfully!");
        SubscriptionList::Stations.push_back(Sub_name);
    }

    delete ads;
}
