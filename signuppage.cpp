#include "signuppage.h"
#include "ui_signuppage.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QString>
#include <userclass.h>



SignupPage::SignupPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignupPage)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    QIntValidator* validator = new QIntValidator(ui->card);
    ui->card->setValidator(validator);
    QIntValidator* validatorr = new QIntValidator(ui->balance);
    ui->balance->setValidator(validatorr);

    // hashing password
    ui->pass->setEchoMode(QLineEdit::EchoMode::Password);

    // add metro pic
    QPixmap pix(":/images/img/16041_tn_eg-cairo-metro-line3-train-impression-hyundairotem.jpg");
    ui->pic->setPixmap(pix.scaled(ui->pic->width(), ui->pic->height(),Qt::KeepAspectRatio));

    // add user pic
    QPixmap pic(":/images/img/149071.png");
    ui->user->setPixmap(pic.scaled(ui->user->width(), ui->user->height(),Qt::KeepAspectRatio));
}

SignupPage::~SignupPage()
{
    delete ui;
}
 
// addjust data to be saved to files
void SignupPage::on_signup_clicked()
{
    bool isInteger = false; 
    if(!ui->name->text().isEmpty() && !ui->pass->text().isEmpty() && !ui->mail->text().isEmpty() && !ui->card->text().isEmpty() && !ui->balance->text().isEmpty() && ui->card->text().toInt(&isInteger) && ui->balance->text().toInt(&isInteger))
    {
        if(check == true)
        {
                //sub
            int cardValue = ui->card->text().toInt(&isInteger);
            int balanceValue = ui->balance->text().toInt(&isInteger);// ageb el type of sub mnen?????
            UserClass usersignin(ui->mail->text(),ui->name->text(),ui->pass->text(),UserClass::thissub,cardValue, balanceValue);

            //UserClass::set_this_user(usersignin);
            // equal thisuser = suersigned
            UserClass::thisuser=usersignin;

            //qDebug()<<UserClass::thisuser.Username;

            UserClass::users_sign_up.push_back(usersignin);
            qDebug()<<"user adding done"<<UserClass::thisuser.Username;
            qDebug()<<"user adding done in sign in "<<UserClass::thissub.type_of_sub;
           // usersignin.index_in_vector=std::distance(UserClass::users.begin(),usersignin);
           // qDebug()<<"///////////////////////"<<index_user; // index start from 1
            emit SwitchToLogin();
        }
        else
        {
            QMessageBox::information(this, "Sign up", "Please choose Subscription ");
        }
    }
    else
    {
        QMessageBox::information(this, "Sign up", "Data is Missing");
    }
}

void SignupPage::on_login_clicked()
{
    emit SwitchToLogin();
}


bool SignupPage::on_choose_clicked()
{

   //on_signup_clicked();
    emit SwitchTotypes_sub();
    check = true;

    return true;
}


