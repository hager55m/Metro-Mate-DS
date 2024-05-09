#include "subscription.h"
#include "ui_subscription.h"
#include <QFile>
#include <QTextStream>

Subscription::Subscription(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Subscription)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));


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

    
}

Subscription::~Subscription()
{
    delete ui;
}


void Subscription::on_pushButton_2_clicked() // home
{
    emit SwitchToHome();
}

void Subscription::on_pushButton_4_clicked() // ticket
{
    emit SwitchToTicket();
}

void Subscription::on_change_clicked() // renew
{
    emit SwitchToRenew();
}


void Subscription::on_pushButton_5_clicked() // state
{
    emit SwitchToState();
}


void Subscription::on_pushButton_6_clicked() // user
{
    emit SwitchToUser();
}


void Subscription::on_pushButton_clicked() // logout
{
    emit SwitchToLogin();
}

void Subscription::on_pushButton_7_clicked() // search
{
    emit SwitchToSearch();
}


