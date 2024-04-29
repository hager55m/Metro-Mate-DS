#include "addsub.h"
#include "ui_addsub.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <subscriptionlist.h>


Ui_AdmonManageMetroOptions* addsub::uisub;
Ui_removesub* addsub::uirs;

addsub::addsub(QWidget *parent)
    : QDockWidget(parent)
    , ui(new Ui::addsub)
{
    ui->setupUi(this);
    // Initialize uisub
    uisub = new Ui_AdmonManageMetroOptions;
    // Initialize uirs
    uirs = new Ui_removesub;

    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));
    setStyleSheet("background-color:#BDBDBD;");

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
}

addsub::~addsub()
{
    // Delete uisub
    delete uisub;
    // Delete uirs
    delete uirs;
    delete ui;
}

//void addsub::on_m1_clicked(){
//    emit switchtoSub();
//}



void addsub::on_pushButton_7_clicked()
{
    emit addsubscription();
}
void addsub::on_pushButton_8_clicked()
{
    emit removesubscription();

}

void addsub::on_pushButton_6_clicked()
{
    emit SwitchToHomePAGE();
}
void addsub::on_pushButton_4_clicked()
{
    emit SwitchToMangeMetro();
}
void addsub::on_pushButton_3_clicked()
{
    emit SwitchToTickets();
}
void addsub::on_pushButton_5_clicked()
{
    emit SwitchToStation();

}
void addsub::on_pushButton_2_clicked()
{
    emit SwitchTosubscription();

}

void addsub::on_save_clicked()
{
    if (!ui->name->text().isEmpty() && !ui->rides->text().isEmpty() && !ui->month->text().isEmpty())
    {
        QString subName = ui->name->text();
        QString ridesNo = ui->rides->text();
        QString duration = ui->month->text();
        SubscriptionList::savedate(subName, ridesNo, duration);
    }
}


void addsub::on_logout_clicked()
{
    emit SwitchToLogin();
}


void addsub::on_m1_clicked()
{
    emit SwitchToSub();
}

void addsub::updateremove() {
    if (!uirs)
        uirs = new Ui_removesub; // Initialize if null

    if (uirs->start) { // Check if start is not null
        uirs->start->clear();
        for (const auto& subscription : SubscriptionList::Stations) {
            uirs->start->addItem(subscription);
        }
    }
}
