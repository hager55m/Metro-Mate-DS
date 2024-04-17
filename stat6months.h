#ifndef STAT6MONTHS_H
#define STAT6MONTHS_H

#include <QDialog>

namespace Ui {
class stat6months;
}

class stat6months : public QDialog
{
    Q_OBJECT

public:
    explicit stat6months(QWidget *parent = nullptr);
    ~stat6months();

signals:
    void SwitchToHome();
    void SwitchToTicket();
    void SwitchToSub();
    void SwitchToUser();
    void SwitchToLogin();
    void SwitchTo1Months();
    void SwitchTo3Months();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_m1_clicked();

    void on_m3_clicked();

private:
    Ui::stat6months *ui;
};

#endif // STAT6MONTHS_H
