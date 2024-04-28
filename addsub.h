#ifndef ADDSUB_H
#define ADDSUB_H

#include <QDockWidget>

namespace Ui {
class addsub;
}

class addsub : public QDockWidget
{
    Q_OBJECT

public:
    explicit addsub(QWidget *parent = nullptr);
    ~addsub();
//signals:
//    void switchtoSub();
//private slots:
//    void on_m1_clicked();
signals:
    void addsubscription();
    void removesubscription();
    void SwitchToHomePAGE();
    void SwitchToMangeMetro();
    void SwitchToTickets();
    void SwitchTosubscription();
    void SwitchToStation();
    void LogoutSub();
    void SwitchToLogin();

private slots:
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    //void on_pushButton_1_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_2_clicked();
    void on_save_clicked();

    void on_logout_clicked();

private:
    Ui::addsub *ui;
};

#endif // ADDSUB_H
