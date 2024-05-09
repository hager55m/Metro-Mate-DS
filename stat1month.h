#ifndef STAT1MONTH_H
#define STAT1MONTH_H

#include <QDialog>

namespace Ui {
class stat1month;
}

class stat1month : public QDialog
{
    Q_OBJECT

public:
    explicit stat1month(QWidget *parent = nullptr);
    ~stat1month();

signals:
    void SwitchToHome();
    void SwitchToTicket();
    void SwitchToSub();
    void SwitchToUser();
    void SwitchToLogin();
    void SwitchTo3Months();
    void SwitchTo6Months();
    void SwitchToSearch();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_7_clicked();

    void on_m3_clicked();

    void on_m6_clicked();

private:
    Ui::stat1month *ui;
};

#endif // STAT1MONTH_H
