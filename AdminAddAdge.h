#pragma once

#include <QMainWindow>
#include "ui_AdminAddAdge.h"

class AdminAddAdge : public QMainWindow
{
	Q_OBJECT

public:
	AdminAddAdge(QWidget *parent = nullptr);
	~AdminAddAdge();
signals:
    void SwitchToAdminHome();
    void SwitchToLogin();
    void SwitchToMnageMetroOption();
    void ToAddAdge();
private slots:
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_21_clicked();
    void on_pushButton_16_clicked();
private:
	Ui::AdminAddAdgeClass ui;
};
