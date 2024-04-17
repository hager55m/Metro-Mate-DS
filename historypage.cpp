#include "historypage.h"
#include "ui_historypage.h"

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
}

HistoryPage::~HistoryPage()
{
    delete ui;
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

