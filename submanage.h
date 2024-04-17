#ifndef SUBMANAGE_H
#define SUBMANAGE_H

#include <QDialog>

namespace Ui {
class SubManage;
}

class SubManage : public QDialog
{
    Q_OBJECT

public:
    explicit SubManage(QWidget *parent = nullptr);
    ~SubManage();

signals:
    void SwitchToHome();
    void SwitchToHistory();
    void SwitchToLogin();
    void SwitchToRenew();
    void SwitchToUserData();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_signup_clicked();

    void on_m1_clicked();

private:
    Ui::SubManage *ui;
};

#endif // SUBMANAGE_H
