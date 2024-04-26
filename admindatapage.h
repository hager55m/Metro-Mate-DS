#ifndef ADMINDATAPAGE_H
#define ADMINDATAPAGE_H

#include <QDialog>

namespace Ui {
class AdminDataPage;
}

class AdminDataPage : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDataPage(QWidget *parent = nullptr);
    ~AdminDataPage();
signals:
    void SwitchToHome();
    void SwitchToUserData();
    void SwitchToLogin();
    void SwitchToMangeMetro();
    void SwitchToTicket();
    void SwitchToSub();
    void SwitchToStation();

private slots:
    void on_pushButton_11_clicked();
    void on_pushButton_21_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_12_clicked();

    void on_m1_clicked();

private:
    Ui::AdminDataPage *ui;
};

#endif // ADMINDATAPAGE_H
