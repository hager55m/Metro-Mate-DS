#include "admin.h"
#include "ui_admin.h"
#include<userclass.h>
admin::admin(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));
    setStyleSheet("background-color:#BDBDBD;");
    QFont font(" Baxautrial",12);
    setFont(font);
    QPixmap i(":/images/img/home (1).png");
    ui->label_3->setPixmap(i.scaled(ui->label_3->width(), ui->label_3->height(),Qt::KeepAspectRatio));

    QPixmap h(":/images/img/train.png");
    ui->label_5->setPixmap(h.scaled(ui->label_5->width(), ui->label_5->height(),Qt::KeepAspectRatio));

    QPixmap h1(":/images/img/man.png");
    ui->adminimg->setPixmap(h1.scaled(ui->adminimg->width(), ui->adminimg->height(),Qt::KeepAspectRatio));

    QPixmap t(":/images/img/ticket.png");
    ui->label_7->setPixmap(t.scaled(ui->label_7->width(), ui->label_7->height(),Qt::KeepAspectRatio));

    QPixmap s(":/images/img/subway.png");
   ui->label_9->setPixmap(s.scaled(ui->label_9->width(), ui->label_9->height(),Qt::KeepAspectRatio));

    //QPixmap st(":/images/img/infographic.png");
   // ui->state->setPixmap(st.scaled(ui->state->width(), ui->state->height(),Qt::KeepAspectRatio));

   QPixmap st(":/images/img/entrance.png");
   ui->label_11->setPixmap(st.scaled(ui->label_11->width(), ui->label_11->height(),Qt::KeepAspectRatio));


    QPixmap m(":/images/img/download.png");
    ui->metroimg->setPixmap(m.scaled(ui->metroimg->width(), ui->metroimg->height(),Qt::KeepAspectRatio));
    for(const auto& it:UserClass::users){
        ui->userhistorybutton->setText(it.Username);
        //ui->userhistorybutton->setText(it.Email);
}
}

admin::~admin()
{
    delete ui;
}
void admin::on_pushButton_4_clicked(){
    emit switchtomanage();
}
void admin::on_pushButton1_clicked(){
    emit switchtoadmin();
}
void admin::on_pushButton_3_clicked(){
    emit switchtoticket();
}
void admin::on_pushButton_5_clicked(){
    emit switchtosubsctiption();
}

void admin::on_pushButton_11_clicked() {
    emit switchtologin();
}
void admin::on_pushButton_2_clicked() {
    emit switchtostation();
}
void admin::on_userhistorybutton_clicked() {
    emit switchtouserhistory();
}
