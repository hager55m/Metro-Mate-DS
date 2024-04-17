#ifndef TICKET_H
#define TICKET_H

#include <QDockWidget>

namespace Ui {
class Ticket;
}

class Ticket : public QDockWidget
{
    Q_OBJECT

public:
    explicit Ticket(QWidget *parent = nullptr);
    ~Ticket();


signals:
    void switshtoadmin();
     void switshtomanage();
     void switshtosub();


private slots:
    void on_pushButton1_clicked();
    void on_pushButton_4_clicked();
     void on_pushButton_5_clicked();


private:
    Ui::Ticket *ui;
};

#endif // TICKET_H
