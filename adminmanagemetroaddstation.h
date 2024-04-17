#ifndef ADMINMANAGEMETROADDSTATION_H
#define ADMINMANAGEMETROADDSTATION_H

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
private slots:
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_21_clicked();
private:
    Ui::AdminManageMetroAddStation *ui;
};

#endif // ADMINMANAGEMETROADDSTATION_H
