#ifndef ADMONMANAGEMETROOPTIONS_H
#define ADMONMANAGEMETROOPTIONS_H

#include <QDialog>

namespace Ui {
class AdmonManageMetroOptions;
}

class AdmonManageMetroOptions : public QDialog
{
    Q_OBJECT

public:
    explicit AdmonManageMetroOptions(QWidget *parent = nullptr);
    ~AdmonManageMetroOptions();
signals:
    void SwitchToAdminHome();
    void SwitchToLogin();
    void SwitchToAddStation();
private slots:
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();

private:
    Ui::AdmonManageMetroOptions *ui;
};

#endif // ADMONMANAGEMETROOPTIONS_H
