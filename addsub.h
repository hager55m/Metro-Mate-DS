#ifndef ADDSUB_H
#define ADDSUB_H

#include <QDockWidget>

namespace Ui {
class addsub;
}

class addsub : public QDockWidget
{
    Q_OBJECT

public:
    explicit addsub(QWidget *parent = nullptr);
    ~addsub();
signals:
    void switchtoSub();
private slots:
    void on_m1_clicked();

private:
    Ui::addsub *ui;
};

#endif // ADDSUB_H
