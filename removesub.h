#ifndef REMOVESUB_H
#define REMOVESUB_H

#include <QDockWidget>

namespace Ui {
class removesub;
}

class removesub : public QDockWidget
{
    Q_OBJECT

public:
    explicit removesub(QWidget *parent = nullptr);
    ~removesub();

signals:
    void addsubscription();
    void SwitchToHomePAGE();
    void SwitchToMangeMetro();
    void SwitchToTickets();
    void SwitchTosubscription();
    void SwitchToStation();
    void SwitchToLogin();
    void listUpdated();

private slots:
    void on_m1_clicked();
    void on_pushButton_clicked();

    void on_pushButton1_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_logout_clicked();
    void updateSubscriptions();

private:
    Ui::removesub *ui;
};

#endif // REMOVESUB_H
