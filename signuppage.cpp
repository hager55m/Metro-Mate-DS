#include "signuppage.h"
#include "ui_signuppage.h"
#include <QMessageBox>

SignupPage::SignupPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignupPage)
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

SignupPage::~SignupPage()
{
    delete ui;
}

// addjust data to be saved to files
void SignupPage::on_signup_clicked()
{
    if(!ui->name->text().isEmpty() && !ui->pass->text().isEmpty() && !ui->mail->text().isEmpty())
    {
        if(ui->stud->isChecked() || ui->non->isChecked())
        {
            emit SwitchToLogin();
        }
        else
        {
            QMessageBox::information(this, "Sign up", "Data is Missing");
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

