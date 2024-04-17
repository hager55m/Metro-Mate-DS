#ifndef USERDATA_H
#define USERDATA_H

#include <QDialog>

namespace Ui {
class UserData;
}

class UserData : public QDialog
{
    Q_OBJECT

public:
    explicit UserData(QWidget *parent = nullptr);
    ~UserData();

signals:
    void SwitchToHome();
    void SwitchToHistory();
    void SwitchToLogin();
    void SwitchToSubMange();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_signup_clicked();

    void on_login_clicked();

private:
    Ui::UserData *ui;
};

#endif // USERDATA_H
