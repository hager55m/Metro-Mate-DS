#include "stat1month.h"
#include "ui_stat1month.h"

stat1month::stat1month(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::stat1month)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

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
}

stat1month::~stat1month()
{
    delete ui;
}

void stat1month::on_pushButton_2_clicked() //home
{
    emit SwitchToHome();
}


void stat1month::on_pushButton_5_clicked() //ticket
{
    emit SwitchToTicket();
}


void stat1month::on_pushButton_4_clicked() // sub
{
    emit SwitchToSub();
}


void stat1month::on_pushButton_6_clicked() //user
{
    emit SwitchToUser();
}


void stat1month::on_pushButton_clicked() // log out
{
    emit SwitchToLogin();
}


void stat1month::on_m3_clicked() // 3 months
{
    emit SwitchTo3Months();
}


void stat1month::on_m6_clicked() // 6 months
{
    emit SwitchTo6Months();
}

void stat1month::on_pushButton_7_clicked() // search
{
    emit SwitchToSearch();
}


