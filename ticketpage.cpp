#include "ticketpage.h"
#include "ui_ticketpage.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <chrono>
#include <ctime>

TicketPage::TicketPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TicketPage)
{
    TicketPage tp;
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


    // to add the date
    std::time_t currentTime;
    std::time(&currentTime);
    QString currentDate2;

    // Convert the current time to a tm structure representing local time
    std::tm localTime;
    if (localtime_s(&localTime, &currentTime) == 0) {
        // Format the tm structure into a string
        char buffer[80]; // Buffer to hold the formatted string
        if (std::strftime(buffer, sizeof(buffer),  "%d/%m/%Y", &localTime) > 0) {
            // Convert the buffer to a std::string
            std::string currentDate(buffer);
            currentDate2=QString::fromStdString(currentDate);
            // Print the current date
            // std::cout << "Current date: " << currentDate << std::endl;
        }
        else {
            // Error handling if formatting fails
            // std::cerr << "Failed to format current date" << std::endl;
        }
    }
    else {
        // Error handling if conversion fails
        //std::cerr << "Failed to convert current time to local time" << std::endl;
    }


    ui->date->setText( currentDate2);
    // adding stations to combomoxes

    QFile file("E:/level 2/DS/mm/Metro-Mate/proj_trial_3/img/stations_name.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open the file:" << file.errorString();
    } else {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString station = in.readLine();
            qDebug() << "Read line:" << station; // Debugging information
            ui->start->addItem(station);
            ui->end->addItem(station);
        }
        file.close();
    }




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



