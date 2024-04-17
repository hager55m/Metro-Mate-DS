#include "renewsub.h"
#include "ui_renewsub.h"
#include <QFile>
#include <QTextStream>

RenewSub::RenewSub(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RenewSub)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    // adding pics
    QPixmap u(":/images/img/man.png");
    ui->userpic->setPixmap(u.scaled(ui->userpic->width(), ui->userpic->height(),Qt::KeepAspectRatio));

    QPixmap h(":/images/img/home (1).png");
    ui->homepic->setPixmap(h.scaled(ui->homepic->width(), ui->homepic->height(),Qt::KeepAspectRatio));

    QPixmap d(":/images/img/health-report.png");
    ui->userdata->setPixmap(d.scaled(ui->userdata->width(), ui->userdata->height(),Qt::KeepAspectRatio));

    QPixmap his(":/images/img/location.png");
    ui->history->setPixmap(his.scaled(ui->history->width(), ui->history->height(),Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->Metro->setPixmap(m.scaled(ui->Metro->width(), ui->Metro->height(),Qt::KeepAspectRatio));

    // adding stations to combomoxes
    QFile file("E:/QT/trial/proj_trial_3/img/stations_name.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open the file:" << file.errorString();
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString station = in.readLine();
        ui->start->addItem(station);
        ui->end->addItem(station);
    }
    file.close();
}

RenewSub::~RenewSub()
{
    delete ui;
}

void RenewSub::on_pushButton_7_clicked()
{
    emit SwitchToHome();
}


void RenewSub::on_pushButton_8_clicked()
{
    emit SwitchToHistory();
}


void RenewSub::on_pushButton_6_clicked()
{
    emit SwitchToLogin();
}


void RenewSub::on_m1_clicked()
{
    emit SwitchToSubMange();
}


void RenewSub::on_signup_clicked() // renew sub
{

}

