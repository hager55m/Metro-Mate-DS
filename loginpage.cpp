#include "loginpage.h"
#include "ui_loginpage.h"
#include "userclass.h"
#include <QPixmap>
//#include <userclass.h>
#include <QMessageBox>

LoginPage::LoginPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    // hashing password
    ui->pass->setEchoMode(QLineEdit::EchoMode::Password);

    // add metro pic
    QPixmap pix(":/images/img/16041_tn_eg-cairo-metro-line3-train-impression-hyundairotem.jpg");
    ui->pic->setPixmap(pix.scaled(ui->pic->width(), ui->pic->height(),Qt::KeepAspectRatio));

    // add user pic
    QPixmap pic(":/images/img/149071.png");
    ui->user->setPixmap(pic.scaled(ui->user->width(), ui->user->height(),Qt::KeepAspectRatio));
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_signup_clicked()
{
    emit SwitchTOSignup();
}

// addjust data to be read from files
void LoginPage::on_login_clicked()
{
    bool IsFound=false;
    int index_user;
    QVector<UserClass>::iterator it =UserClass::users.begin();
    QVector<UserClass>::iterator it_sign =UserClass::users_sign_up.begin();
    //UserClass user = UserClass();
    for (it ;it != UserClass::users.end();++it) {
        if(ui->name->text() == it->Username)// && ui->pass->text() == it->Password)
        {
            if(ui->pass->text() == it->Password){
                IsFound =true;
                //var.thisuser = var;// ehhhh???
                //auto index=std::find(UserClass::users.begin(),UserClass::users.end(),it);
                index_user=std::distance(UserClass::users.begin(),it);
                qDebug()<<"///////////////////////"<<index_user; // index start from 1
                it->index_in_vector=index_user;
                UserClass::thisuser=*it;
                qDebug()<<"/////////////////////// in user"<<it->index_in_vector;
                QMessageBox::information(this, "Login", "Login Successfully");
                emit SwitchToMainPage();
                break;
            }
            else{
                IsFound =true;
            QMessageBox::information(this, "Login"," password is incorrect");
            }

        }
        /*else if(ui->name->text() == it->Username){
            IsFound =true;
            QMessageBox::information(this, "Login"," password is incorrect");

        }*/

        else if(ui->pass->text() == it->Password){
            IsFound =true;
            QMessageBox::information(this, "Login"," username is incorrect");

        }
        else if (ui->name->text() == "admin" && ui->pass->text() == "1")
        {
            IsFound =true;
            QMessageBox::information(this, "Login", "Login Successfully");
            emit SwitchToAdminPage();
            break;
        }
        /*else
        {
            QMessageBox::information(this, "Login", "Username or password is incorrect");
        }*/
    }

    for(it_sign;it_sign!=UserClass::users_sign_up.end();++it_sign){
        if(ui->name->text() == it_sign->Username)// && ui->pass->text() == it->Password)
        {
            if(ui->pass->text() == it_sign->Password){
                IsFound =true;
                //var.thisuser = var;// ehhhh???
                //auto index=std::find(UserClass::users.begin(),UserClass::users.end(),it);
                //index_user=std::distance(UserClass::users.begin(),it);
                //qDebug()<<"///////////////////////"<<index_user; // index start from 1
                //it->index_in_vector=index_user;
                //qDebug()<<"/////////////////////// in user"<<it->index_in_vector;
                QMessageBox::information(this, "Login", "your account need admin approval :)  ");
                //emit SwitchToMainPage();
                break;
            }
            else{
                IsFound =true;
                QMessageBox::information(this, "Login"," password is incorrect");
            }

    }
    }

    if(!IsFound){
        QMessageBox::information(this, "Login", "please sign up first");
        emit SwitchTOSignup();
    }

}

