#ifndef VERFICATION_H
#define VERFICATION_H

#include <QDialog>

namespace Ui {
class verfication;
}

class verfication : public QDialog
{
    Q_OBJECT

public:
    explicit verfication(QWidget *parent = nullptr);
    ~verfication();

signals:
    void SwitchToHome();

private slots:
    void on_m1_clicked();

private:
    Ui::verfication *ui;
};

#endif // VERFICATION_H
