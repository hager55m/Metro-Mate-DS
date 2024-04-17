#ifndef RENEWSUB_H
#define RENEWSUB_H

#include <QDialog>

namespace Ui {
class RenewSub;
}

class RenewSub : public QDialog
{
    Q_OBJECT

public:
    explicit RenewSub(QWidget *parent = nullptr);
    ~RenewSub();

signals:
    void SwitchToHome();
    void SwitchToHistory();
    void SwitchToLogin();
    void SwitchToSubMange();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_m1_clicked();

    void on_signup_clicked();

private:
    Ui::RenewSub *ui;
};

#endif // RENEWSUB_H
