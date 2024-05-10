#include "renewsub.h"
#include "ui_renewsub.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QIntValidator>
#include <QString>
#include"Station.h"
QList <QString> RenewSub::stations;

RenewSub::RenewSub(QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::RenewSub)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    
    QIntValidator* validatorr = new QIntValidator(ui->money);
    ui->money->setValidator(validatorr);

    // adding pics
    QPixmap i(":/images/img/map-point.png");
    ui->searchicon->setPixmap(i.scaled(ui->searchicon->width(), ui->searchicon->height(), Qt::KeepAspectRatio));

    QPixmap h(":/images/img/home (1).png");
    ui->home->setPixmap(h.scaled(ui->home->width(), ui->home->height(), Qt::KeepAspectRatio));

    QPixmap t(":/images/img/ticket.png");
    ui->ticket->setPixmap(t.scaled(ui->ticket->width(), ui->ticket->height(), Qt::KeepAspectRatio));

    QPixmap s(":/images/img/subway.png");
    ui->sub->setPixmap(s.scaled(ui->sub->width(), ui->sub->height(), Qt::KeepAspectRatio));

    QPixmap st(":/images/img/infographic.png");
    ui->state->setPixmap(st.scaled(ui->state->width(), ui->state->height(), Qt::KeepAspectRatio));

    QPixmap u(":/images/img/man.png");
    ui->user->setPixmap(u.scaled(ui->user->width(), ui->user->height(), Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->metro->setPixmap(m.scaled(ui->metro->width(), ui->metro->height(), Qt::KeepAspectRatio));


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


}
    
RenewSub::~RenewSub()
{
    delete ui;
}

void RenewSub::on_pushButton_2_clicked() // home
{
    emit SwitchToHome();
}

void RenewSub::on_pushButton_4_clicked() // ticket
{
    emit SwitchToTicket();
}

void RenewSub::on_change_clicked() // change
{
    if (ui->type->currentIndex() == 1) 
    {
        if (ui->start->currentIndex() != 0 && ui->end->currentIndex() != 0 && ui->month3->isChecked() && ui->money->text().isEmpty())
        {
            emit SwitchToSub();
        }
        else
        {
            QMessageBox::information(this, "Student Subscription", "please choose start , end and 3 Months only");
        }
    }

    else if (ui->type->currentIndex() == 2)
    {
             if (ui->start->currentIndex() != 0 && ui->end->currentIndex() != 0 && ui->money->text().isEmpty())
             {
                 if (ui->month1->isChecked() || ui->year->isChecked())
                 {
                     emit SwitchToSub();
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

    else if (ui->type->currentIndex() == 3)//for wallet
    {
        if (ui->start->currentIndex() == 0 && ui->end->currentIndex() == 0 && !ui->money->text().isEmpty())
        {
            bool isInteger = false;
            int rem = ui->money->text().toInt(&isInteger);

            if (ui->money->text() == "50" || ui->money->text() == "60" || ui->money->text() == "70" || ui->money->text() == "80" || ui->money->text() == "90")
            {
                emit SwitchToSub();
            }

            else if (ui->money->text() <= "400" && rem % 10 == 0)
            {
                emit SwitchToSub();
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

    else
    {
        QMessageBox::information(this, "Change", "Nothing Change");
        emit SwitchToSub();
    }

    
}


void RenewSub::on_pushButton_5_clicked() // state
{
    emit SwitchToState();
}


void RenewSub::on_pushButton_6_clicked() // user
{
    emit SwitchToUser();
}


void RenewSub::on_pushButton_clicked() // logout
{
    emit SwitchToLogin();
}

void RenewSub::on_pushButton_7_clicked() // search
{
    emit SwitchToSearch();
}



