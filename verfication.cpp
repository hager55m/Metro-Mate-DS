#include "verfication.h"
#include "ui_verfication.h"

verfication::verfication(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::verfication)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));
}

verfication::~verfication()
{
    delete ui;
}

void verfication::on_m1_clicked()
{
    emit SwitchToHome();
}

