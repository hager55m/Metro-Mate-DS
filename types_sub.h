#ifndef TYPES_SUB_H
#define TYPES_SUB_H

#include <QDialog>

namespace Ui {
class types_sub;
}

class types_sub : public QDialog
{
    Q_OBJECT

public:
    explicit types_sub(QWidget *parent = nullptr);
    static QList <QString> stations;
    ~types_sub();
    
signals:
     void SwitchToSignup();

private slots:
    void on_ok_clicked();

private:
    Ui::types_sub *ui;
};

#endif // TYPES_SUB_H
