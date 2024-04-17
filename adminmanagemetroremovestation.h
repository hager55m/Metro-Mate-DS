#ifndef ADMINMANAGEMETROREMOVESTATION_H
#define ADMINMANAGEMETROREMOVESTATION_H

#include <QDialog>

namespace Ui {
class AdminManageMetroRemoveStation;
}

class AdminManageMetroRemoveStation : public QDialog
{
    Q_OBJECT

public:
    explicit AdminManageMetroRemoveStation(QWidget *parent = nullptr);
    ~AdminManageMetroRemoveStation();
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
    Ui::AdminManageMetroRemoveStation *ui;
};

#endif // ADMINMANAGEMETROREMOVESTATION_H
