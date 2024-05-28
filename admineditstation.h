#ifndef ADMINEDITSTATION_H
#define ADMINEDITSTATION_H

#include <QDialog>

namespace Ui {
class AdminEditStation;
}

class AdminEditStation : public QDialog
{
    Q_OBJECT

public:
    explicit AdminEditStation(QWidget *parent = nullptr);
    void display();
    ~AdminEditStation();
signals:
    void SwitchToHome();
    void SwitchToMetro();
    void SwitchToTicket();
    void SwitchToSub();
    void SwitchToStation();
    void SwitchToLogin();
private slots:
    void on_pushButton_10_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_14_clicked();

private:
    Ui::AdminEditStation *ui;
};

#endif // ADMINEDITSTATION_H
