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

signals:
    void SwitchToLogin();

private slots:
    void on_signup_clicked();

    void on_login_clicked();

private:
    Ui::SignupPage *ui;
};

#endif // SIGNUPPAGE_H
