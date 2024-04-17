#ifndef ADMIN_H
#define ADMIN_H

#include <QDockWidget>

namespace Ui {
class admin;
}

class admin : public QDockWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

signals:
    void switchtomanage();
    void switchtoticket();
    void switchtoadmin();
    void switchtosubsctiption();
    void switchtostation();

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton1_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_5_clicked();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
