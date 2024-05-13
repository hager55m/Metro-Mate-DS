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
    static std::vector<float>Costs;
    explicit Ticket(QWidget *parent = nullptr);
    ~Ticket();

    void DataOfTicketToDisplay();
signals:
    void switshtoadmin();
     void switshtomanage();
     void switshtosub();
     void switshtostation();
     void switshtologin();


private slots:
    void on_pushButton1_clicked();
    void on_pushButton_4_clicked();
     void on_pushButton_5_clicked();

     void on_station_2_clicked();
     void on_pushButton_6_clicked();
     void on_logout_clicked();

 private:
    Ui::Ticket *ui;
};

#endif // TICKET_H
