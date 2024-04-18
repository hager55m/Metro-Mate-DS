#ifndef ADMINSTATIONS_H
#define ADMINSTATIONS_H

#include <QDialog>

namespace Ui {
class AdminStations;
}

class AdminStations : public QDialog
{
    Q_OBJECT

public:
    explicit AdminStations(QWidget *parent = nullptr);
    ~AdminStations();
signals:
    void SwitchToHomePage();
    void SwitchToMangeMetro();
    void SwitchToTicket();
    void SwitchToSupscription();
    void SwitchTologin();
    


private slots:
    void on_pushButton_10_clicked();
    void on_pushButton_21_clicked();
    void on_pushButton_22_clicked();
    void on_pushButton_23_clicked();
    void on_pushButton_11_clicked();
private:
    Ui::AdminStations *ui;
};

#endif // ADMINSTATIONS_H
