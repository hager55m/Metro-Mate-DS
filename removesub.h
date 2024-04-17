#ifndef REMOVESUB_H
#define REMOVESUB_H

#include <QDockWidget>

namespace Ui {
class removesub;
}

class removesub : public QDockWidget
{
    Q_OBJECT

public:
    explicit removesub(QWidget *parent = nullptr);
    ~removesub();

signals:
    void switchtoSub();
private slots:
    void on_m1_clicked();
private:
    Ui::removesub *ui;
};

#endif // REMOVESUB_H
