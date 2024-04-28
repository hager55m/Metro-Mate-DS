#ifndef ADMONMANAGEMETROOPTIONS_H
#define ADMONMANAGEMETROOPTIONS_H

#include <QDialog>

namespace Ui {
class AdmonManageMetroOptions;
}

class AdmonManageMetroOptions : public QDialog
{
    Q_OBJECT

public:
    explicit AdmonManageMetroOptions(QWidget *parent = nullptr);
    ~AdmonManageMetroOptions();
signals:
    void SwitchToAdminHome();
    void SwitchToLogin();
    void SwitchToAddStation();
    void SwitchToAddTicket();
    void SwitchToAddMetro();
    void SwitchToAddRemove();
    void SwitchToStation();
private slots:
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_25_clicked();

private:
    Ui::AdmonManageMetroOptions *ui;
};

#endif // ADMONMANAGEMETROOPTIONS_H
