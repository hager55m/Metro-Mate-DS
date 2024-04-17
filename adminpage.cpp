#include "adminpage.h"
#include "ui_adminPage.h"

adminpage::adminpage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminPage)
{
    ui->setupUi(this);
}

adminpage::~adminpage()
{
    delete ui;
}
