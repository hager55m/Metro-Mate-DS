#ifndef TICKETPAGE_H
#define TICKETPAGE_H
#include "datetime.h"
#include <QString>
#include <QDialog>

namespace Ui {
class TicketPage;
}

class TicketPage : public QDialog
{
    Q_OBJECT

public:
    explicit TicketPage(QWidget *parent = nullptr);
    DateTime date;
    float Cost;
    QString First_station;
    QString End_station;
    //  type_subscribtion sub;
    //int Code;
    static QList <QString> stations;
    TicketPage( float, QString, QString);
    ~TicketPage();

signals:
    void SwitchToLogin();
    void SwitchToHome();
    void SwitchToSub();
    void SwitchToState();
    void SwitchToUser();
    void SwitchToVerf();
    void SwitchToSearch();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_code_editingFinished();

    void on_pushButton_7_clicked();
    void on_start_currentTextChanged(const QString &arg1);

    void on_start_editTextChanged(const QString &arg1);

    void on_start_currentIndexChanged(int index);

    void on_end_currentTextChanged(const QString &arg1);

private:
    Ui::TicketPage *ui;
};

#endif // TICKETPAGE_H
