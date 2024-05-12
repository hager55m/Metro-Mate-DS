#include "ticketpage.h"
#include "ui_ticketpage.h"
#include "datetime.h"
#include "userclass.h"
#include "subscription.h"
#include <QFile>
#include <QTextStream>
#include "userticket.h"
#include "Station.h"
//QList <QString> TicketPage::stations;

UserTicket ticket= UserTicket();

TicketPage::TicketPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TicketPage)
{

    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    // hashing Card Code
    ui->code->setEchoMode(QLineEdit::EchoMode::Password);

    // adding pics
    QPixmap i(":/images/img/map-point.png");
    ui->searchicon->setPixmap(i.scaled(ui->searchicon->width(), ui->searchicon->height(),Qt::KeepAspectRatio));

    QPixmap h(":/images/img/home (1).png");
    ui->home->setPixmap(h.scaled(ui->home->width(), ui->home->height(),Qt::KeepAspectRatio));

    QPixmap t(":/images/img/ticket.png");
    ui->ticket->setPixmap(t.scaled(ui->ticket->width(), ui->ticket->height(),Qt::KeepAspectRatio));

    QPixmap s(":/images/img/subway.png");
    ui->sub->setPixmap(s.scaled(ui->sub->width(), ui->sub->height(),Qt::KeepAspectRatio));

    QPixmap st(":/images/img/infographic.png");
    ui->state->setPixmap(st.scaled(ui->state->width(), ui->state->height(),Qt::KeepAspectRatio));

    QPixmap u(":/images/img/man.png");
    ui->user->setPixmap(u.scaled(ui->user->width(), ui->user->height(),Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->metro->setPixmap(m.scaled(ui->metro->width(), ui->metro->height(),Qt::KeepAspectRatio));

    QPixmap r(":/images/img/422833-PE4141-817 (2).png");
    ui->receipt->setPixmap(r.scaled(ui->receipt->width(), ui->receipt->height(),Qt::KeepAspectRatio));

    std::string dateandtime = std::to_string(ticket.date.day) + "/" + std::to_string(ticket.date.month) + "/" + std::to_string(ticket.date.year) + " " + std::to_string(ticket.date.hour) + ":" + std::to_string(ticket.date.minute);
    ui->date->setText(QString::fromStdString(dateandtime));
/*
    // adding stations to combomoxes
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
*/
    for (const auto& st : Station::stations) {
        ui->start->addItem(QString::fromStdString(st.getName()));
        ui->end->addItem(QString::fromStdString(st.getName()));
    }
    ui->start->setCurrentText(QString::fromStdString(Station::stations.front().getName()));
    ui->end->setCurrentText(QString::fromStdString(Station::stations.front().getName()));

}

TicketPage::~TicketPage()
{
    delete ui;
}

void TicketPage::on_pushButton_clicked()
{
    emit SwitchToLogin();
}


void TicketPage::on_pushButton_2_clicked() // home
{
    emit SwitchToHome();
}

void TicketPage::on_pushButton_4_clicked() //sub
{
    emit SwitchToSub();
}


void TicketPage::on_pushButton_5_clicked() //state
{
    emit SwitchToState();
}


void TicketPage::on_pushButton_6_clicked() //user
{
    emit SwitchToUser();
}

void TicketPage::on_pushButton_7_clicked() // search
{
    emit SwitchToSearch();
}

void TicketPage::on_code_editingFinished()
{
    if(ui->code->text() == "123")
    {
        float c = UserClass::thisuser.Calc_cost(ticket.Start_station,ticket.End_station);
        bool ticket_can_be_add=  UserClass::thisuser.Add_Ticket(c,ticket);
        if(ticket_can_be_add==1){
        UserTicket t= UserClass::thisuser.user_tickets.back();
         qDebug()<<"cost:"<< t.Cost<<t.Start_station;
        }else if(ticket_can_be_add==2){
            //message that no of trips has ended
        }
        else if (ticket_can_be_add==3){
            // message that subs has ended
        }else if(ticket_can_be_add==4){
            //message that wallet is zero
        }
       //is going to be editted after finshing sign up--> needs index of user in vector
        emit SwitchToVerf();
    }
}



void TicketPage::on_start_currentIndexChanged(int index)
{

  ticket.Start_station=ui->start->currentText();
    //qDebug()<<"start station"<<ui->start->currentText();
}


void TicketPage::on_end_currentTextChanged(const QString &arg1)
{
   ticket.End_station= ui->end->currentText();
    //qDebug()<<"end station"<<ui->end->currentText();
}

