#include "types_sub.h"
#include "ui_types_sub.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QString>

using namespace std;

types_sub::types_sub(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::types_sub)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));
    
    //read from file
    ui->start->addItem("Start");
    ui->end->addItem("end");
    ui->start->addItem("marvel");
    ui->end->addItem("marvel");

   
    QIntValidator* validatorr = new QIntValidator(ui->money);
    ui->money->setValidator(validatorr);
    
   
    // add metro pic
    QPixmap pix(":/images/img/16041_tn_eg-cairo-metro-line3-train-impression-hyundairotem.jpg");
    ui->pic->setPixmap(pix.scaled(ui->pic->width(), ui->pic->height(),Qt::KeepAspectRatio));
}

types_sub::~types_sub()
{
    delete ui;
}

// addjust data to be saved to files
void types_sub::on_ok_clicked()
{
    if (ui->type->currentIndex() == 1)//for student
    {
        if (ui->start->currentIndex() != 0 && ui->end->currentIndex() != 0 && ui->month3->isChecked() && ui->money->text().isEmpty())
        {
            emit SwitchToSignup();
        }
        else
        {
            QMessageBox::information(this, "Student Subscription", "please choose start , end and 3 Months only");
        }
    }

    if (ui->type->currentIndex() == 2)//for public
    {
        if (ui->start->currentIndex() != 0 && ui->end->currentIndex() != 0 && ui->money->text().isEmpty())
        {
            if (ui->month1->isChecked() || ui->year->isChecked())
            {
                emit SwitchToSignup();
            }
            else
            {
                QMessageBox::information(this, "Public Subscription", "please choose 1 Month or year");
            }
        }
        else
        {
            QMessageBox::information(this, "Public Subscription", "please choose start , end and 1 Month or year only");
        }
    }
    

    if (ui->type->currentIndex() == 3)//for wallet
    {
        if (ui->start->currentIndex() == 0 && ui->end->currentIndex() == 0 && !ui->money->text().isEmpty())
        {
            bool isInteger = false;
            int rem = ui->money->text().toInt(&isInteger);

            if (ui->money->text() == "50" || ui->money->text() == "60" || ui->money->text() == "70" || ui->money->text() == "80" || ui->money->text() == "90")
            {
                emit SwitchToSignup();
            }

            else if (ui->money->text() <= "400" && rem % 10 == 0)
            {
                emit SwitchToSignup();
            }
            
            else
            {
                QMessageBox::information(this, "Wallet Subscription", "please write money less than 400 LE and can Divided to 10 only");
            }      
        }
        else
        {
            QMessageBox::information(this, "Wallet Subscription", "please write money less than 400 LE and can Divided to 10 only");
        }
    }
}
