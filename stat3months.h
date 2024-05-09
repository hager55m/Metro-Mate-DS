#ifndef STAT3MONTHS_H
#define STAT3MONTHS_H

#include <QDialog>

namespace Ui {
class stat3months;
}

class stat3months : public QDialog
{
    Q_OBJECT

public:
    explicit stat3months(QWidget *parent = nullptr);
    ~stat3months();

signals:
    void SwitchToHome();
    void SwitchToTicket();
    void SwitchToSub();
    void SwitchToUser();
    void SwitchToLogin();
    void SwitchTo1Months();
    void SwitchTo6Months();
    void SwitchToSearch();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_7_clicked();

    void on_m1_clicked();

    void on_m6_clicked();

private:
    Ui::stat3months *ui;
};

#endif // STAT3MONTHS_H
