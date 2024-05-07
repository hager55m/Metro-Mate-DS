#include "types_sub.h"
#include "ui_types_sub.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QString>
#include <userclass.h>
#include <QFile>

#include <user_subscribtion.h>
using namespace std;
QList <QString> types_sub::stations;

types_sub::types_sub(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::types_sub)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));
    
    //read from file
    /*ui->start->addItem("Start");
    ui->end->addItem("end");
    ui->start->addItem("marvel");
    ui->end->addItem("marvel");*/
    //adding stations to combomoxes
    QFile file(":/images/img/stations_name.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open the file:" << file.errorString();
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString station = in.readLine();
        stations.push_back(station);
    }
    file.close();
    foreach (QString station, stations) {
        ui->start->addItem(station);
        ui->end->addItem(station);
    }
    ui->start->setCurrentText(stations.front());
    ui->end->setCurrentText(stations.front());

   
    QIntValidator* validatorr = new QIntValidator(ui->money);
    ui->money->setValidator(validatorr);
    
   
    // add metro pic
    QPixmap pix(":/images/img/16041_tn_eg-cairo-metro-line3-train-impression-hyundairotem.jpg");
    ui->pic->setPixmap(pix.scaled(ui->pic->width(), ui->pic->height(),Qt::KeepAspectRatio));
}

types_sub::~types_sub()
{
    delete ui;
}

// addjust data to be saved to files
void types_sub::on_ok_clicked()
{
    if (ui->type->currentIndex() == 1)//for student
    {
        if (ui->start->currentIndex() != 0 && ui->end->currentIndex() != 0 && ui->month3->isChecked() && ui->money->text().isEmpty())
        {
            // stage eh w a7taha b eh
            User_subscribtion sub_of_user(student,1,ui->start->currentText(),ui->end->currentText());
            //UserClass::thisuser.UserSub=sub_of_user;
            UserClass::thissub=sub_of_user;
            qDebug()<<"student adding done";
            qDebug()<< UserClass::thissub.type_of_sub;
            //UserClass::users_sign_up.push_back( UserClass::thisuser);


            emit SwitchToSignup();

        }
        else
        {
            QMessageBox::information(this, "Student Subscription", "please choose start , end and 3 Months only");
        }
    }

    if (ui->type->currentIndex() == 2)//for public
    {
        if (ui->start->currentIndex() != 0 && ui->end->currentIndex() != 0 && ui->money->text().isEmpty())
        {
            if (ui->month1->isChecked() || ui->year->isChecked())
            {
                User_subscribtion sub_of_user(pub,1,ui->month1->isChecked(),ui->start->currentText(),ui->end->currentText());
                UserClass::thissub=sub_of_user;
                //UserClass::thisuser.UserSub=sub_of_user;
                qDebug()<<"public adding done";
                qDebug()<< UserClass::thissub.type_of_sub;
                emit SwitchToSignup();
            }
            else
            {
                QMessageBox::information(this, "Public Subscription", "please choose 1 Month or year");
            }
        }
        else
        {
            QMessageBox::information(this, "Public Subscription", "please choose start , end and 1 Month or year only");
        }
    }
    

    if (ui->type->currentIndex() == 3)//for wallet
    {
        if (ui->start->currentIndex() == 0 && ui->end->currentIndex() == 0 && !ui->money->text().isEmpty())
        {
            bool isInteger = false;
            int rem = ui->money->text().toInt(&isInteger);

            if (ui->money->text() == "50" || ui->money->text() == "60" || ui->money->text() == "70" || ui->money->text() == "80" || ui->money->text() == "90")
            {
                User_subscribtion sub_of_user(wallet,rem);
                UserClass::thissub=sub_of_user;
                qDebug()<<"wallet adding done";
                qDebug()<< UserClass::thissub.type_of_sub;
                emit SwitchToSignup();
            }

            else if (ui->money->text() <= "400" && rem % 10 == 0)
            {
                User_subscribtion sub_of_user(wallet,rem);
                UserClass::thissub=sub_of_user;
                qDebug()<<"wallet adding done";
                qDebug()<< UserClass::thissub.type_of_sub;
                emit SwitchToSignup();
            }
            
            else
            {
                QMessageBox::information(this, "Wallet Subscription", "please write money less than 400 LE and can Divided to 10 only");
            }      
        }
        else
        {
            QMessageBox::information(this, "Wallet Subscription", "please write money less than 400 LE and can Divided to 10 only");
        }
    }
}
