#include "userdata.h"
#include "ui_userdata.h"

UserData::UserData(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserData)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    // hashing Card Code
    ui->pass->setEchoMode(QLineEdit::EchoMode::Password);

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
}

UserData::~UserData()
{
    delete ui;
}

void UserData::on_pushButton_7_clicked() // home
{
    emit SwitchToHome();
}


void UserData::on_pushButton_8_clicked() // history
{
    emit SwitchToHistory();
}


void UserData::on_pushButton_6_clicked() // login
{
    emit SwitchToLogin();
}


void UserData::on_signup_clicked() // save new data
{

}


void UserData::on_login_clicked() // sub man
{
    emit SwitchToSubMange();
}

