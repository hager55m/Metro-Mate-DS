#ifndef MANAGE_METRO_H
#define MANAGE_METRO_H

#include <QDockWidget>

namespace Ui {
class manage_metro;
}

class manage_metro : public QDockWidget
{
    Q_OBJECT

public:
    explicit manage_metro(QWidget *parent = nullptr);
    ~manage_metro();





signals:
    void switchtomanage();
    void switchtoticket();
    void switchtoadmin();
    void switchtosubsctiption();
    void switchtostation();

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton1_clicked();
void on_pushButton_5_clicked();

private:
    Ui::manage_metro *ui;
};

#endif // MANAGE_METRO_H
