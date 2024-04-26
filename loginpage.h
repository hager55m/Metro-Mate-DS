#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginPage;
}
QT_END_NAMESPACE

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

signals:
    void SwitchTOSignup();
    void SwitchToMainPage();

private slots:
    void on_login_clicked();

    void on_signup_clicked();

private:
    Ui::LoginPage *ui;
};
#endif // LOGINPAGE_H
