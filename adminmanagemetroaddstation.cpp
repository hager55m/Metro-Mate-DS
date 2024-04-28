#include "adminmanagemetroaddstation.h"
#include "ui_adminmanagemetroaddstation.h"
#include <QMessageBox>
#include"Graph.h"
#include<unordered_map>
#include<vector>
unordered_map<std::string, int>stationAdded;
AdminManageMetroAddStation::AdminManageMetroAddStation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminManageMetroAddStation)
 
{
    ui->setupUi(this);
    connect(ui->pushButton_12, &QPushButton::clicked, this, &AdminManageMetroAddStation::on_pushButton_12_clicked);

    QPixmap u(":/images/img/man.png");
    ui->userpic_2->setPixmap(u.scaled(ui->userpic_2->width(), ui->userpic_2->height(),Qt::KeepAspectRatio));

    QPixmap t(":/images/img/left-arrow.png");
    ui->homepic_3->setPixmap(t.scaled(ui->homepic_3->width(),ui->homepic_3->height(),Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->Metro_2->setPixmap(m.scaled(ui->Metro_2->width(), ui->Metro_2->height(),Qt::KeepAspectRatio));

    QPixmap h(":/images/img/home (1).png");
    ui->homepic_2->setPixmap(h.scaled(ui->homepic_2->width(), ui->homepic_2->height(),Qt::KeepAspectRatio));

    QPixmap d(":/images/img/train.png");
    ui->ManageMetro->setPixmap(d.scaled(ui->ManageMetro->width(), ui->ManageMetro->height(),Qt::KeepAspectRatio));

    QPixmap ticket(":/images/img/ticket.png");
    ui->Ticket->setPixmap(ticket.scaled(ui->Ticket->width(), ui->Ticket->height(),Qt::KeepAspectRatio));

    QPixmap subscribtion(":/images/img/subway.png");
    ui->Subscribtion->setPixmap(subscribtion.scaled(ui->Subscribtion->width(), ui->Subscribtion->height(),Qt::KeepAspectRatio));

    QPixmap entrance(":/images/img/entrance.png");
    ui->Station->setPixmap(entrance.scaled(ui->Station->width(), ui->Station->height(),Qt::KeepAspectRatio));

}
void AdminManageMetroAddStation::on_pushButton_10_clicked()
{
    emit SwitchToAdminHome();
}
void AdminManageMetroAddStation::on_pushButton_11_clicked()
{
    emit SwitchToLogin();
}
void AdminManageMetroAddStation::on_pushButton_13_clicked()
{
    emit SwitchToMnageMetroOption();
}

void AdminManageMetroAddStation::on_pushButton_21_clicked()
{
    emit SwitchToMnageMetroOption();
}
void AdminManageMetroAddStation::on_pushButton_15_clicked()
{
    emit SwitchToMnageMetroOption();
}
void AdminManageMetroAddStation::on_pushButton_12_clicked()
{
    for (const auto& newStation : stationAdded) {

        if (newStation.second > 1)
        {
            QString stationName = "<font color='red'>" + QString::fromStdString(newStation.first) + "</font>";
            QMessageBox::warning(this, "Duplicate Station", "Station " + stationName + " already exists");
        }
    }
    stationAdded.clear();

    emit saveComplete();
}
void AdminManageMetroAddStation::on_pushButton_14_clicked()
{
    QString stationName = ui->name_19->text();
    int line = ui->name_21->text().toInt();
   
    if (stationName.isEmpty()) {
        QMessageBox::warning(this, "Empty Station Name", "Please enter a station name.");
        return; 
    }
    if (line == 0) {
        QMessageBox::warning(this, "Invalid Number of Lines", "Please enter a valid number of lines.");
        return; 
    }
    std::vector<int>lines;
    lines.emplace_back(line);
    Station newStation(stationName.toStdString(),lines);
   // newStation.lines.emplace_back(line);
    stationAdded[newStation.getName()]++;
       Graph::graph.stations.insert(newStation);
    QMessageBox::information(this, "Station Added", "Station added successfully!"); 
    qDebug() << "Saved Station:" << QString::fromStdString(newStation.getName()) << "Lines:" << line;
}

AdminManageMetroAddStation::~AdminManageMetroAddStation()
{
    delete ui;
}
