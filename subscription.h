#ifndef SUBSCRIPTION_H
#define SUBSCRIPTION_H

#include <QDialog>

namespace Ui {
class Subscription;
}

class Subscription : public QDialog
{
    Q_OBJECT


public:
    explicit Subscription(QWidget *parent = nullptr);
    ~Subscription();

signals:
    void SwitchToHome();
    void SwitchToTicket();
    void SwitchToState();
    void SwitchToUser();
    void SwitchToLogin();
    void SwitchToRenew();
    void SwitchToSearch();

    

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_change_clicked();

    void on_renew_clicked();


    void on_display_clicked();

private:
    Ui::Subscription *ui;
};

#endif // SUBSCRIPTION_H
