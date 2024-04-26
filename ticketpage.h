#ifndef TICKETPAGE_H
#define TICKETPAGE_H
#include<user.h>
#include <QDialog>

namespace Ui {
class TicketPage;
}

class TicketPage : public QDialog
{
    Q_OBJECT

public:
    explicit TicketPage(QWidget *parent = nullptr);
    ~TicketPage();

signals:
    void SwitchToLogin();
    void SwitchToHome();
    void SwitchToSub();
    void SwitchToState();
    void SwitchToUser();
    void SwitchToVerf();




private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_code_editingFinished();

    // Gui with code
  //void on_start_currentIndexChanged(int index);




private:
    Ui::TicketPage *ui;
};

#endif // TICKETPAGE_H
