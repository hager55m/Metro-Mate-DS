#include "subscription.h"
#include "ui_subscription.h"

Subscription::Subscription(QWidget *parent)
    : QDockWidget(parent)
    , ui(new Ui::Subscription)
{
    ui->setupUi(this);

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
}

Subscription::~Subscription()
{
    delete ui;
}

void Subscription::on_pushButton_7_clicked(){
    emit switchtoAdding();
}

void Subscription::on_pushButton_6_clicked(){
    emit switchtoremoving();
}

void Subscription::on_pushButton_4_clicked(){
    emit switchtomanage();
}
void Subscription::on_pushButton1_clicked(){
    emit switchtoadmin();
}
void Subscription::on_pushButton_3_clicked(){
    emit switchtoticket();
}
