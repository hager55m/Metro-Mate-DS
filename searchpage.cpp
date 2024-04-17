#include "searchpage.h"
#include "ui_searchpage.h"
#include <QFile>
#include <QTextStream>

SearchPage::SearchPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchPage)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

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

SearchPage::~SearchPage()
{
    delete ui;
}

void SearchPage::on_m1_clicked()
{
    emit SwitchToHome();
}

