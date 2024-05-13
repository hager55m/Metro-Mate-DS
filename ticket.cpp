#include "ticket.h"
#include "ui_ticket.h"

std::vector<float> Ticket::Costs = { 6, 8, 12, 15 };

Ticket::Ticket(QWidget *parent)
    : QDockWidget(parent)
    , ui(new Ui::Ticket)
{
    ui->setupUi(this);
    setStyleSheet("background-color:#BDBDBD;");
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

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

Ticket::~Ticket()
{
    delete ui;
}

void Ticket::DataOfTicketToDisplay()
{
    
        QString s = QString::number(Costs[0]);
        ui->mail->setText(s);
        s = QString::number(Costs[1]);
        ui->mail_2->setText(s);
        s = QString::number(Costs[2]);
        ui->mail_3->setText(s);
        s = QString::number(Costs[3]);
        ui->mail_5->setText(s);
}

void Ticket::on_pushButton1_clicked(){
    emit switshtoadmin();
}
void Ticket::on_pushButton_4_clicked(){
    emit switshtomanage();
}

void Ticket::on_pushButton_5_clicked(){
    emit switshtosub();
}

void Ticket::on_station_2_clicked()
{
    emit switshtostation();
}

void Ticket::on_pushButton_6_clicked()
{
    std::vector<QString>tempForCosts;
    tempForCosts.push_back(ui->mail->text());
    tempForCosts.push_back(ui->mail_2->text());
    tempForCosts.push_back(ui->mail_3->text());
    tempForCosts.push_back(ui->mail_5->text());
    for (int i = 0; i < 4; i++)
    {
        if (tempForCosts[i].toFloat()!=0)
        Costs[i] = tempForCosts[i].toFloat();
        qDebug() << Costs[i];
    }
}

void Ticket::on_logout_clicked()
{
    emit switshtologin();
}

