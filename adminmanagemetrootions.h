#ifndef ADMINMANAGEMETROOTIONS_H
#define ADMINMANAGEMETROOTIONS_H

#include <QDialog>

namespace Ui {
class AdminManageMetroOtions;
}

class AdminManageMetroOtions : public QDialog
{
    Q_OBJECT

public:
    explicit AdminManageMetroOtions(QWidget *parent = nullptr);
    ~AdminManageMetroOtions();
signals:
    void SwitchToAdminHome();
    void SwitchToLogin();
    void SwitchToAddStation();
private slots:
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();

private:
    Ui::AdminManageMetroOtions *ui;
};

#endif // ADMINMANAGEMETROOTIONS_H
