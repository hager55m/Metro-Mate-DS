#ifndef RENEWSUB_H
#define RENEWSUB_H

#include <QDialog>

namespace Ui {
class RenewSub;
}

class RenewSub : public QDialog
{
    Q_OBJECT

public:
    explicit RenewSub(QWidget *parent = nullptr);
     static QList <QString> stations;
    ~RenewSub();

signals:
    void SwitchToHome();
    void SwitchToTicket();
    void SwitchToState();
    void SwitchToUser();
    void SwitchToLogin();
    void SwitchToSub();
    void SwitchToSearch();
   
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_change_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::RenewSub *ui;
};

#endif // RENEWSUB_H
