#include "AdminAddAdge.h"

AdminAddAdge::AdminAddAdge(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}
void AdminAddAdge::on_pushButton_10_clicked()
{
    emit SwitchToAdminHome();
}
void AdminAddAdge::on_pushButton_11_clicked()
{
    emit SwitchToLogin();
}
void AdminAddAdge::on_pushButton_21_clicked()
{
    emit SwitchToMnageMetroOption();
}
void AdminAddAdge::on_pushButton_16_clicked()
{
    emit ToAddAdge();
}
AdminAddAdge::~AdminAddAdge()
{
}
