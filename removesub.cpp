#include "removesub.h"
#include "ui_removesub.h"
#include "subscriptionlist.h"
#include "addsub.h"

removesub::removesub(QWidget *parent)
    : QDockWidget(parent)
    , ui(new Ui::removesub)
{
    ui->setupUi(this);

    setStyleSheet("background-color:#BDBDBD;");
    QFont font(" Baxautrial",12);
    setFont(font);
    //ui->subscription->setStyleSheet("background-color:#D9D9D9 ;");
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

    QPixmap st(":/images/img/entrance.png");
    ui->label_11->setPixmap(st.scaled(ui->label_11->width(), ui->label_11->height(),Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->metroimg->setPixmap(m.scaled(ui->metroimg->width(), ui->metroimg->height(),Qt::KeepAspectRatio));

    for (const auto& subscription : SubscriptionList::Stations) {
        ui->start->addItem(subscription);
    }
}

removesub::~removesub()
{
    delete ui;
}

void removesub::on_m1_clicked(){
    emit SwitchTosubscription();
}

void removesub::on_pushButton_clicked()
{
    updateSubscriptions();
    QString selectedSub = ui->start->currentText();
    SubscriptionList::removeSubscription(selectedSub);
    addsub::updateremove();
}

void removesub::on_pushButton1_clicked() // home
{
    emit SwitchToHomePAGE();
}


void removesub::on_pushButton_4_clicked() // metro
{
    emit SwitchToMangeMetro();
}


void removesub::on_pushButton_3_clicked() // ticket
{
    emit SwitchToTickets();
}




void removesub::on_pushButton_2_clicked() // station
{
    emit SwitchToStation();
}


void removesub::on_logout_clicked() // login
{
    emit SwitchToLogin();
}


void removesub::updateSubscriptions() {
    ui->start->clear();
    for (const auto& subscription : SubscriptionList::Stations) {
        ui->start->addItem(subscription);
    }
}
