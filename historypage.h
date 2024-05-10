#ifndef HISTORYPAGE_H
#define HISTORYPAGE_H

#include <QDialog>

namespace Ui {
class HistoryPage;
}

class HistoryPage : public QDialog
{
    Q_OBJECT

public:
    explicit HistoryPage(QWidget *parent = nullptr);
    ~HistoryPage();
    void display_history();

signals:
    void SwitchToHome();
    void SwitchToUserData();
    void SwitchToLogin();
    void SwitchTohappy();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();
    void on_pushButton_10_clicked();

private:

    Ui::HistoryPage *ui;
};

#endif // HISTORYPAGE_H
