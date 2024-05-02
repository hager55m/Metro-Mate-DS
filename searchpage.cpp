#include "searchpage.h"
#include "ui_searchpage.h"
#include "Graph.h"
#include "Station.h"
#include <QFile>
#include <QTextStream>

SearchPage::SearchPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchPage)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    Station::readstations();
    foreach (const auto& station, Station::stations) {
        ui->start->addItem(QString::fromStdString(station.getName()));
        ui->end->addItem(QString::fromStdString(station.getName()));
    }
    ui->start->setCurrentText(QString::fromStdString(Station::stations.at(0).getName()));
    ui->end->setCurrentText(QString::fromStdString(Station::stations.at(0).getName()));
}

SearchPage::~SearchPage()
{
    delete ui;
}

void SearchPage::on_m1_clicked()
{
    emit SwitchToHome();
}

void SearchPage::on_buy_clicked()
{
    emit SwitchToTicket();
}


void SearchPage::on_buy_2_clicked()
{
    qInfo() << "Log: " << ui->data->toPlainText();
    vector<vector<string>> bfs;
    bool found = false;
    for (int i = 0; i < Station::stations.size(); i++) {
        Graph::addStation(Station::stations[i].getName(), i);
    }
    qDebug("in");
    for(int i = 0; i < Station::stations.size(); i++) {
        if(ui->start->currentText() == QString::fromStdString(Station::stations[i].getName())) {
            for(int j = 0; j < Station::stations.size(); j++) {
                if(ui->end->currentText() == QString::fromStdString(Station::stations[j].getName())) {
                    ui->data->insertPlainText("Start: " + QString::fromStdString(Station::stations[i].getName()));
                    qDebug() << "Start: " << QString::fromStdString(Station::stations[i].getName());
                    ui->data->insertPlainText("End: " + QString::fromStdString(Station::stations[j].getName()));
                    qDebug() << "End: " << QString::fromStdString(Station::stations[j].getName());
                    bfs = Graph::allPossiblePathsFunctionality(Station::stations[i].getName(), Station::stations[j].getName());
                    qDebug() << "Paths: " << bfs.size();
                    ui->data->insertPlainText("Paths: " + bfs.size());
                    found = true;
                    break;
                }
            }
            if(found) {
                break;
            }
        }
    }
    if(bfs.empty()) qDebug("empty");
    for(const auto& path : bfs) {
        qDebug() << "Path: ";
        ui->data->insertPlainText("Paths: ");
        for(const auto& station : path) {
            qDebug() << QString::fromStdString(station);
            ui->data->insertPlainText(QString::fromStdString(station));
        }
    }
}

