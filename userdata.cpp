#include "userdata.h"
#include "ui_userdata.h"
#include"userclass.h"
#include"QMessageBox"
#include "user_subscribtion.h"
UserData::UserData(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserData)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    // hashing Card Code
   // ui->pass->setEchoMode(QLineEdit::EchoMode::Password);

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

void UserData::dispaly_data()
{
    emit SwitchTodisply();
    ui->mail->setText(UserClass::thisuser.Email);
    ui->name->setText(UserClass::thisuser.Username);
    ui->pass->setText(UserClass::thisuser.Password);

    ui->card->setText(QString::number(UserClass::thisuser.Credit));
    ui->card_2->setText(QString::number(UserClass::thisuser.balance));
    ui->sub->setText(QString::fromStdString(User_subscribtion::enumToString( UserClass::thisuser.UserSub.type_of_sub)));

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
    bool change=false;
    if(UserClass::thisuser.Email!=ui->mail->text()){
        UserClass::thisuser.Email=ui->mail->text();
        QMessageBox::information(this, "edit", "the email has been changed successfully ");

         change=true;
        for( auto& it:UserClass::users){
            if(it.Username==UserClass::thisuser.Username){
                it.Email= ui->mail->text();
            }
        }
    }
    if(UserClass::thisuser.Username!=ui->name->text()){
        UserClass::thisuser.Username=ui->name->text();
        QMessageBox::information(this, "edit", "the username has been changed successfully ");

        change=true;
        for( auto& it:UserClass::users){
            if(it.Email==UserClass::thisuser.Email){
                it.Username=ui->name->text();
            }
        }
    }

    if(UserClass::thisuser.Password!=ui->pass->text()){
        UserClass::thisuser.Password=ui->pass->text();
        QMessageBox::information(this, "edit", "the password has been changed successfully ");

        change=true;
        for( auto& it:UserClass::users){
            if(it.Email==UserClass::thisuser.Email){
                it.Password=ui->pass->text();
            }
        }
    }
    if(UserClass::thisuser.Credit!= ui->card->text().toInt()){
        UserClass::thisuser.Credit=ui->card->text().toInt();
        QMessageBox::information(this, "edit", "the cridet has been changed successfully ");

        change=true;
        for( auto& it:UserClass::users){
            if(it.Email==UserClass::thisuser.Email){
                it.Credit=ui->card->text().toInt();
            }
        }
    }
    if(UserClass::thisuser.balance!=ui->card_2->text().toInt()){
        UserClass::thisuser.balance=ui->card_2->text().toInt();
        QMessageBox::information(this, "edit", "the balance has been changed successfully ");

        change=true;
        for( auto& it:UserClass::users){
            if(it.Email==UserClass::thisuser.Email){
                it.balance=ui->card_2->text().toInt();
            }
        }
    }
    // if(QString::fromStdString(User_subscribtion::enumToString( UserClass::thisuser.UserSub.type_of_sub))!=ui->sub->text()){
    //     QMessageBox::information(this, "error", "you can't change name of subscription !!! ");

    // }
    // if(UserClass::thisuser.Email==ui->mail->text()&&UserClass::thisuser.Username==ui->name->text()&&UserClass::thisuser.Password==ui->pass->text()
    //     &&UserClass::thisuser.Credit== ui->card->text().toInt()&&UserClass::thisuser.balance==ui->card_2->text().toInt()){
    //     QMessageBox::information(this, "error", " nothing have been changed ");

    // }
    if(!change){
       QMessageBox::information(this, "error", " nothing have been changed ");

    }
}


void UserData::on_login_clicked() // sub man
{
    emit SwitchToSubMange();
}

