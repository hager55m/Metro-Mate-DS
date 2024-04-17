#include "adminstations.h"
#include "ui_adminstations.h"

AdminStations::AdminStations(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminStations)
{
    ui->setupUi(this);
}

AdminStations::~AdminStations()
{
    delete ui;
}
