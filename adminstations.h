#ifndef ADMINSTATIONS_H
#define ADMINSTATIONS_H

#include <QDialog>

namespace Ui {
class AdminStations;
}

class AdminStations : public QDialog
{
    Q_OBJECT

public:
    explicit AdminStations(QWidget *parent = nullptr);
    ~AdminStations();

private:
    Ui::AdminStations *ui;
};

#endif // ADMINSTATIONS_H
