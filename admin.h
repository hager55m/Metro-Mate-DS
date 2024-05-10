#ifndef ADMIN_H
#define ADMIN_H

#include <QDockWidget>

namespace Ui {
class admin;
}

class admin : public QDockWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

signals:
    void switchtomanage();
    void switchtoticket();
    void switchtoadmin();
    void switchtosubsctiption();
    void switchtostation();
    void switchtouserhistory();
    void switchtologin();
    void switchtoapptoval();
    void switchtonext_signed();
    void switchtonext_login();

   // void switchto();
private slots:
    void on_pushButton_4_clicked();
    void on_pushButton1_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_2_clicked();
    void on_userhistorybutton_clicked();

    void on_pushButton_12_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_15_clicked();

private:
    Ui::admin *ui;
    int currentIndex_sign;
    int currentIndex_log;
};

#endif // ADMIN_H
