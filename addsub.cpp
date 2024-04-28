#include "addsub.h"
#include "ui_addsub.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <subscriptionlist.h>

addsub::addsub(QWidget *parent)
    : QDockWidget(parent)
    , ui(new Ui::addsub)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));
    setStyleSheet("background-color:#BDBDBD;");

    QPixmap i(":/images/img/home (1).png");
    ui->label_3->setPixmap(i.scaled(ui->label_3->width(), ui->label_3->height(),Qt::KeepAspectRatio));

    QPixmap h(":/images/img/train.png");
    ui->label_5->setPixmap(h.scaled(ui->label_5->width(), ui->label_5->height(),Qt::KeepAspectRatio));

    QPixmap h1(":/images/img/man.png");
    ui->adminimg->setPixmap(h1.scaled(ui->adminimg->width(), ui->adminimg->height(),Qt::KeepAspectRatio));

    QPixmap t(":/images/img/ticket.png");
    ui->label_7->setPixmap(t.scaled(ui->label_7->width(), ui->label_7->height(),Qt::KeepAspectRatio));

    QPixmap s(":/images/img/subway.png");
    ui->label_9->setPixmap(s.scaled(ui->label_9->width(), ui->label_9->height(),Qt::KeepAspectRatio));

    QPixmap st(":/images/img/entrance.png");
    ui->label_11->setPixmap(st.scaled(ui->label_11->width(), ui->label_11->height(),Qt::KeepAspectRatio));



    QPixmap m(":/images/img/download.png");
    ui->metroimg->setPixmap(m.scaled(ui->metroimg->width(), ui->metroimg->height(),Qt::KeepAspectRatio));
}

addsub::~addsub()
{
    delete ui;
}

//void addsub::on_m1_clicked(){
//    emit switchtoSub();
//}



void addsub::on_pushButton_7_clicked()
{
    emit addsubscription();
}
void addsub::on_pushButton_8_clicked()
{
    emit removesubscription();

}

void addsub::on_pushButton_6_clicked()
{
    emit SwitchToHomePAGE();
}
void addsub::on_pushButton_4_clicked()
{
    emit SwitchToMangeMetro();
}
void addsub::on_pushButton_3_clicked()
{
    emit SwitchToTickets();
}
void addsub::on_pushButton_5_clicked()
{
    emit SwitchToStation();

}
void addsub::on_pushButton_2_clicked()
{
    emit SwitchTosubscription();

}

void addsub::on_save_clicked()
{

    if (!ui->name->text().isEmpty() && !ui->rides->text().isEmpty() && !ui->month->text().isEmpty())
    {
        // putting data into variables
        QString Sub_name = ui->name->text();
        QString Rides_no = ui->rides->text();
        QString Duration = ui->month->text();

        for (SubscriptionList station : SubscriptionList::Stations) {
            if(Sub_name == station.sub_name && Duration == station.duration){
                QMessageBox::information(this, "Add Subscription", "Data Duplicate Detected!\nThis Subscription already exists");
                break;
            }
            else{
                SubscriptionList::Stations.push_back(SubscriptionList(Sub_name, Rides_no, Duration));
                QMessageBox::information(this, "Add Subscription", "Subscription added successfully!");
                break;
            }
        }
        for (int var = 0; var < SubscriptionList::Stations.length(); ++var) {
            qDebug() << SubscriptionList::Stations.at(var).sub_name;
        }


    }
}
/*
void savedate(){
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
            QMessageBox::information(this, "Add Subscription", "Data Duplicate Detected!\nThis Subscription already exists");
            to_be_saved = false;
            break;
        }
        else{
            to_be_saved = true;
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


        QMessageBox::information(this, "Add Subscription", "Subscription added successfully!");
    }
}
*/

void addsub::on_logout_clicked()
{
    emit SwitchToLogin();
}

