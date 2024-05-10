#include "historypage.h"
#include "ui_historypage.h"
#include "userclass.h"
#include "QDebug"
#include <iostream>
#include <QMessageBox>
HistoryPage::HistoryPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HistoryPage)
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
    //qDebug()<< UserClass::thisuser.Username;
    ui->textBrowser->setStyleSheet("QTextBrowser {"
        "color: #D9D9D9;" // Change text color to light gray
        "}");


}

HistoryPage::~HistoryPage()
{
    delete ui;
}

void HistoryPage::display_history()
{ int i =1;
    ui->textBrowser->setStyleSheet("QTextBrowser {"
                                   "font-size: 16pt;"
                                   "}");


    //ui->textBrowser->insertPlainText(UserClass::thisuser.Username);
    QString name = UserClass::thisuser.Username;
    ui->label->setText( "the tickets of "+name+" are ");
    if(UserClass::thisuser.user_tickets.size()!=0){

    qDebug()<<"the log in user "<< UserClass::thisuser.Username;

    for (const auto& it : UserClass::thisuser.user_tickets) {
        ui->textBrowser->insertPlainText("start staion of ticket "+QString::number(i)+" is : "+it.Start_station+"\n");
        ui->textBrowser->insertPlainText("end staion of ticket  "+QString::number(i)+" is : "+it.End_station+"\n");
        QString costString = QString::number(it.Cost);
        ui->textBrowser->insertPlainText("the cost of the ticker "+QString::number(i)+" is : "+costString+"\n");
        ui->textBrowser->insertPlainText("\n"); // Insert a newline after the cost
        //QString costString = QString::(it.date);
        //ui->textBrowser->insertPlainText(it.date);
        ++i;
    }
    }
    else{
        ui->textBrowser->clear();
    }


}

void HistoryPage::on_pushButton_7_clicked()
{
    emit SwitchToHome();
}


void HistoryPage::on_pushButton_8_clicked()
{
    emit SwitchToUserData();
}


void HistoryPage::on_pushButton_6_clicked()
{
    emit SwitchToLogin();
}

void HistoryPage::on_pushButton_10_clicked()
{
    emit SwitchTohappy();
    QMessageBox::information(this, "Message", "we hope you to  make more and more rides <3 ");
}

