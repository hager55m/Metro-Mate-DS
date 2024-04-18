#include "adminstations.h"
#include "ui_adminstations.h"

AdminStations::AdminStations(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminStations)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));


        QPixmap u(":/images/img/man.png");
    ui->userpic_2->setPixmap(u.scaled(ui->userpic_2->width(), ui->userpic_2->height(),Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->Metro_2->setPixmap(m.scaled(ui->Metro_2->width(), ui->Metro_2->height(),Qt::KeepAspectRatio));

    QPixmap h(":/images/img/home (1).png");
    ui->homepic_2->setPixmap(h.scaled(ui->homepic_2->width(), ui->homepic_2->height(),Qt::KeepAspectRatio));

    QPixmap d(":/images/img/train.png");
    ui->ManageMetro->setPixmap(d.scaled(ui->ManageMetro->width(), ui->ManageMetro->height(),Qt::KeepAspectRatio));

    QPixmap ticket(":/images/img/ticket.png");
    ui->Ticket->setPixmap(ticket.scaled(ui->Ticket->width(), ui->Ticket->height(),Qt::KeepAspectRatio));

    QPixmap subscribtion(":/images/img/subway.png");
    ui->Subscribtion->setPixmap(subscribtion.scaled(ui->Subscribtion->width(), ui->Subscribtion->height(),Qt::KeepAspectRatio));

    QPixmap entrance(":/images/img/entrance.png");
    ui->Station->setPixmap(entrance.scaled(ui->Station->width(), ui->Station->height(),Qt::KeepAspectRatio));

    QPixmap homepic_3(":/images/img/home (1).png");
    ui->homepic_2->setPixmap(homepic_3.scaled(ui->homepic_2->width(), ui->homepic_2->height(),Qt::KeepAspectRatio));
}
void AdminStations::on_pushButton_10_clicked()
{
    emit SwitchToHomePage();
}
void AdminStations::on_pushButton_21_clicked()
{
    emit SwitchToMangeMetro();
}
void AdminStations::on_pushButton_22_clicked()
{
    emit SwitchToTicket();
}
void AdminStations::on_pushButton_23_clicked()
{
    emit SwitchToSupscription();
}
AdminStations::~AdminStations()
{
    delete ui;
}
