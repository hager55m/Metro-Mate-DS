#ifndef SUBSCRIPTION_H
#define SUBSCRIPTION_H

#include <QDockWidget>

namespace Ui {
class Subscription;
}

class Subscription : public QDockWidget
{
    Q_OBJECT

public:
    explicit Subscription(QWidget *parent = nullptr);
    ~Subscription();


signals:
    void switchtoAdding();
    void switchtoremoving();
    void switchtomanage();
    void switchtoticket();
    void switchtoadmin();

private slots:
    void on_pushButton_7_clicked();
void on_pushButton_6_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton1_clicked();
    void on_pushButton_3_clicked();
private:
    Ui::Subscription *ui;
};

#endif // SUBSCRIPTION_H
