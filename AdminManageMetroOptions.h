#ifndef ADMINMANAGEMETROOPTIONS_H
#define ADMINMANAGEMETROOPTIONS_H

#include <QDialog>

namespace Ui {
class AdminManageMetro;
}

class AdminManageMetro : public QDialog
{
    Q_OBJECT

public:
    explicit AdminManageMetro(QWidget *parent = nullptr);
    ~AdminManageMetro();

private:
    Ui::AdminManageMetro *ui;
};

#endif // ADMINMANAGEMETROOPTIONS_H
