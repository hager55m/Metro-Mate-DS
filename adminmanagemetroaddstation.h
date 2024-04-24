#ifndef ADMINMANAGEMETROADDSTATION_H
#define ADMINMANAGEMETROADDSTATION_H
#include "Station.h" 
#include<unordered_set>
#include <QDialog>

namespace Ui {
class AdminManageMetroAddStation;
}

class AdminManageMetroAddStation : public QDialog
{
    Q_OBJECT

public:
    explicit AdminManageMetroAddStation(QWidget *parent = nullptr);
    ~AdminManageMetroAddStation();
signals:
    void SwitchToAdminHome();
    void SwitchToLogin();
    void SwitchToMnageMetroOption();
    void saveComplete();
private slots:
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_21_clicked();
    void  on_pushButton_12_clicked(); 
    
private:
    Ui::AdminManageMetroAddStation *ui;
};

#endif // ADMINMANAGEMETROADDSTATION_H
