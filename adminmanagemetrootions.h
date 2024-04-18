#ifndef ADMINMANAGEMETROOTIONS_H
#define ADMINMANAGEMETROOTIONS_H

#include <QDialog>

namespace Ui {
class AdminManageMetroOtions;
}

class AdminManageMetroOtions : public QDialog
{
    Q_OBJECT

public:
    explicit AdminManageMetroOtions(QWidget *parent = nullptr);
    ~AdminManageMetroOtions();
signals:
    void SwitchToAdminHome();
    void SwitchToLogin();
    void SwitchToAddStation();
    void SwitchToRemoveStation();
   // void SwitchToAdminHome();
    void SwitchToSub();
    void SwitchToTicket();
    void SwitchToStation();
    //void SwitchTo();
private slots:
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_12_clicked();

  //  void on_pushButton_21_clicked();
    void on_pushButton_22_clicked();
    void on_pushButton_23_clicked();
    void on_pushButton_25_clicked();

private:
    Ui::AdminManageMetroOtions *ui;
};

#endif // ADMINMANAGEMETROOTIONS_H
