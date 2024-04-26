
#ifndef ADMINHOMEBAGE_H
#define ADMINHOMEBAGE_H

#include <QDialog>

namespace Ui {
class Admin;
}
class Admin : public QDialog
{
    Q_OBJECT
public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();
signals:
    void SwitchToHome();
    void SwitchToUserData();
    void SwitchToLogin();
    void SwitchToMangeMetro();
private slots:
    void on_pushButton_11_clicked();
    void on_pushButton_21_clicked();


private:
    Ui::Admin *ui;
};

#endif // ADMINHOMEBAGE_H
