#include "loginpage.h"
#include "ui_loginpage.h"
#include <QPixmap>
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
    if(ui->name->text() == "test" && ui->pass->text() == "123456")
    {
        QMessageBox::information(this, "Login", "Login Successfully");
        emit SwitchToMainPage();
    }
    else if (ui->name->text() == "test" && ui->pass->text() == "1")
    {
        QMessageBox::information(this, "Login", "Login Successfully");
        emit SwitchToAdminPage();
    }
    else
    {
        QMessageBox::information(this, "Login", "Username or password is incorrect");
    }

}

