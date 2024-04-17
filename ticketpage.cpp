#include "ticketpage.h"
#include "ui_ticketpage.h"
#include <QFile>
#include <QTextStream>

TicketPage::TicketPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TicketPage)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    // hashing Card Code
    ui->code->setEchoMode(QLineEdit::EchoMode::Password);

    // adding pics
    QPixmap i(":/images/img/map-point.png");
    ui->searchicon->setPixmap(i.scaled(ui->searchicon->width(), ui->searchicon->height(),Qt::KeepAspectRatio));

    QPixmap h(":/images/img/home (1).png");
    ui->home->setPixmap(h.scaled(ui->home->width(), ui->home->height(),Qt::KeepAspectRatio));

    QPixmap t(":/images/img/ticket.png");
    ui->ticket->setPixmap(t.scaled(ui->ticket->width(), ui->ticket->height(),Qt::KeepAspectRatio));

    QPixmap s(":/images/img/subway.png");
    ui->sub->setPixmap(s.scaled(ui->sub->width(), ui->sub->height(),Qt::KeepAspectRatio));

    QPixmap st(":/images/img/infographic.png");
    ui->state->setPixmap(st.scaled(ui->state->width(), ui->state->height(),Qt::KeepAspectRatio));

    QPixmap u(":/images/img/man.png");
    ui->user->setPixmap(u.scaled(ui->user->width(), ui->user->height(),Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->metro->setPixmap(m.scaled(ui->metro->width(), ui->metro->height(),Qt::KeepAspectRatio));

    QPixmap r(":/images/img/422833-PE4141-817 (2).png");
    ui->receipt->setPixmap(r.scaled(ui->receipt->width(), ui->receipt->height(),Qt::KeepAspectRatio));

    // adding stations to combomoxes
    QFile file("E:/QT/trial/proj_trial_3/img/stations_name.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open the file:" << file.errorString();
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString station = in.readLine();
        ui->start->addItem(station);
        ui->end->addItem(station);
    }
    file.close();
}

TicketPage::~TicketPage()
{
    delete ui;
}

void TicketPage::on_pushButton_clicked()
{
    emit SwitchToLogin();
}


void TicketPage::on_pushButton_2_clicked() // home
{
    emit SwitchToHome();
}

void TicketPage::on_pushButton_4_clicked() //sub
{
    emit SwitchToSub();
}


void TicketPage::on_pushButton_5_clicked() //state
{
    emit SwitchToState();
}


void TicketPage::on_pushButton_6_clicked() //user
{
    emit SwitchToUser();
}


void TicketPage::on_code_editingFinished()
{
    if(ui->code->text() == "123")
    {
        emit SwitchToVerf();
    }
}

