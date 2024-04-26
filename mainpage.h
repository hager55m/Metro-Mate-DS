#ifndef MAINPAGE_H
#define MAINPAGE_H
#include "user.h"
#include <QDialog>

namespace Ui {
class MainPage;
}

class MainPage : public QDialog
{
    Q_OBJECT
    User user;

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

signals:
    void SwitchToLogin();
    void SwitchToTicket();
    void SwitchToSub();
    void SwitchToState();
    void SwitchToUser();
    void SwitchToSearch();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainPage *ui;
};

#endif // MAINPAGE_H
