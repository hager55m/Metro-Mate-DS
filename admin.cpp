#include "admin.h"
#include "ui_admin.h"
#include<userclass.h>
#include <QMessageBox>
#include <QDebug>
admin::admin(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));
    setStyleSheet("background-color:#BDBDBD;");
    QFont font(" Baxautrial",12);
    setFont(font);
    QPixmap i(":/images/img/home (1).png");
    ui->label_3->setPixmap(i.scaled(ui->label_3->width(), ui->label_3->height(),Qt::KeepAspectRatio));

    QPixmap h(":/images/img/train.png");
    ui->label_5->setPixmap(h.scaled(ui->label_5->width(), ui->label_5->height(),Qt::KeepAspectRatio));

    QPixmap h1(":/images/img/man.png");
    ui->adminimg->setPixmap(h1.scaled(ui->adminimg->width(), ui->adminimg->height(),Qt::KeepAspectRatio));

    QPixmap t(":/images/img/ticket.png");
    ui->label_7->setPixmap(t.scaled(ui->label_7->width(), ui->label_7->height(),Qt::KeepAspectRatio));

    QPixmap s(":/images/img/subway.png");
   ui->label_9->setPixmap(s.scaled(ui->label_9->width(), ui->label_9->height(),Qt::KeepAspectRatio));

    //QPixmap st(":/images/img/infographic.png");
   // ui->state->setPixmap(st.scaled(ui->state->width(), ui->state->height(),Qt::KeepAspectRatio));

   QPixmap st(":/images/img/entrance.png");
   ui->label_11->setPixmap(st.scaled(ui->label_11->width(), ui->label_11->height(),Qt::KeepAspectRatio));


    QPixmap m(":/images/img/download.png");
    ui->metroimg->setPixmap(m.scaled(ui->metroimg->width(), ui->metroimg->height(),Qt::KeepAspectRatio));
    for (const auto& it : UserClass::users) {
        ui->textBrowser_2->insertPlainText(it.Email);
        break;
    }
    for (const auto& it : UserClass::users_sign_up) {
        ui->textBrowser->insertPlainText(it.Email);
        break;
    }
    currentIndex_sign=1;
    currentIndex_log=1;

        //ui->userhistorybutton->setText(it.Email);
 }

admin::~admin()
{
    delete ui;
}
void admin::on_pushButton_4_clicked(){
    emit switchtomanage();
}
void admin::on_pushButton1_clicked(){
    emit switchtoadmin();
}
void admin::on_pushButton_3_clicked(){
    emit switchtoticket();
}
void admin::on_pushButton_5_clicked(){
    emit switchtosubsctiption();
}

void admin::on_pushButton_11_clicked() {
    emit switchtologin();
}
void admin::on_pushButton_2_clicked() {
    emit switchtostation();
}
void admin::on_userhistorybutton_clicked() {
    emit switchtouserhistory();
}

void admin::on_pushButton_12_clicked()
{
    emit switchtoapptoval();
    QString emil = ui->textBrowser->toPlainText();
    for (auto it = UserClass::users_sign_up.begin(); it != UserClass::users_sign_up.end();++it ) {
        if (it->Email == emil)
        {
            UserClass::users.push_back(*it);
            UserClass::users_sign_up.erase(it);
            QMessageBox::information(this, "admin", "this user successfuly approved");
            ui->textBrowser->clear();
        }
    }

    
    //add this user to vector of userlogin deleted from signup
    
}

void admin::on_pushButton_13_clicked()
{
    emit switchtonext_signed();
    currentIndex_sign++;

    // If currentIndex is beyond the bounds of users vector, loop back to the beginning
    if (currentIndex_sign >= UserClass::users_sign_up.size()) {
        currentIndex_sign = 0;
    }

    // Clear the text browser before displaying the next user
    ui->textBrowser->clear();

    // Display the next user
    ui->textBrowser->insertPlainText(UserClass::users_sign_up[currentIndex_sign].Email);
    
}

void admin::on_pushButton_14_clicked()
{
    emit switchtouserhistory();
    QString emil= ui->textBrowser_2->toPlainText();
    for (const auto& it : UserClass::users) {
        if (it.Email == emil) 
        {
            UserClass::thisuser = it;
            //QDebug() << "the user "<<UserClass::thisuser.Email;
        }
    }

}

void admin::on_pushButton_15_clicked()
{
    emit switchtonext_login();
    currentIndex_log++;

    // If currentIndex is beyond the bounds of users vector, loop back to the beginning
    if (currentIndex_log >= UserClass::users.size()) {
        currentIndex_log = 0;
    }

    // Clear the text browser before displaying the next user
    ui->textBrowser_2->clear();

    // Display the next user
    ui->textBrowser_2->insertPlainText(UserClass::users[currentIndex_log].Email);
    
}

