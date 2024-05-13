#include "searchpage.h"
#include "ui_searchpage.h"
#include "Graph.h"
#include "Station.h"
#include <QFile>
#include <QTextStream>
#include "userticket.h"

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
    from_search = true;
    UserTicket::starting = ui->start->currentText();
    UserTicket::ending = ui->end->currentText();
    emit SwitchToTicket();
}


void SearchPage::on_buy_2_clicked()
{
    vector<vector<string>> bfs;
    bool found = false;
    for (int i = 0; i < Station::stations.size(); i++) {
        Graph::addStation(Station::stations[i].getName(), i);
        qDebug("addstation loop");
    }
    for(int i = 0; i < Station::stations.size(); i++) {
        qDebug("loop 2");
        if(ui->start->currentText() == QString::fromStdString(Station::stations[i].getName())) {
            for(int j = 0; j < Station::stations.size(); j++) {
                qDebug("loop 3");
                if(ui->end->currentText() == QString::fromStdString(Station::stations[j].getName())) {
                    qDebug("if");
                    bfs = Graph::allPossiblePathsFunctionality(Station::stations[i].getName(), Station::stations[j].getName());
                    QString sz = QString::number(bfs.size());
                    ui->data->insertPlainText("Paths: " + sz);
                    ui->data->insertPlainText("\n");
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
        ui->data->insertPlainText("Path: \n" );
        for(const auto& station : path) {
            ui->data->insertPlainText(QString::fromStdString(station) + " - ");
        }
        ui->data->insertPlainText("\n");
    }
}

