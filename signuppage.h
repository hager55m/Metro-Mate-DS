#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QDialog>

namespace Ui {
class SignupPage;
}

class SignupPage : public QDialog
{
    Q_OBJECT

public:
    explicit SignupPage(QWidget *parent = nullptr);
    ~SignupPage();
    bool check = false;

signals:
    void SwitchToLogin();
    void SwitchTotypes_sub();

private slots:
    void on_signup_clicked();
    void on_login_clicked();
    bool on_choose_clicked();

private:
    Ui::SignupPage *ui;
};

#endif // SIGNUPPAGE_H
