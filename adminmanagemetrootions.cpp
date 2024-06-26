#include "adminmanagemetrootions.h"
#include "ui_adminmanagemetrootions.h"
#include"Station.h"
AdminManageMetroOtions::AdminManageMetroOtions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminManageMetroOtions)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));
    QPixmap u(":/images/img/man.png");
    ui->userpic_2->setPixmap(u.scaled(ui->userpic_2->width(), ui->userpic_2->height(),Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->Metro_2->setPixmap(m.scaled(ui->Metro_2->width(), ui->Metro_2->height(),Qt::KeepAspectRatio));



    QPixmap h(":/images/img/home (1).png");
    ui->homepic_2->setPixmap(h.scaled(ui->homepic_2->width(), ui->homepic_2->height(),Qt::KeepAspectRatio));

    QPixmap d(":/images/img/train.png");
    ui->ManageMetro->setPixmap(d.scaled(ui->ManageMetro->width(), ui->ManageMetro->height(),Qt::KeepAspectRatio));

    QPixmap ticket(":/images/img/ticket.png");
    ui->Ticket->setPixmap(ticket.scaled(ui->Ticket->width(), ui->Ticket->height(),Qt::KeepAspectRatio));

    QPixmap subscribtion(":/images/img/subway.png");
    ui->Subscribtion->setPixmap(subscribtion.scaled(ui->Subscribtion->width(), ui->Subscribtion->height(),Qt::KeepAspectRatio));

    QPixmap entrance(":/images/img/entrance.png");
    ui->Station->setPixmap(entrance.scaled(ui->Station->width(), ui->Station->height(),Qt::KeepAspectRatio));



}

void AdminManageMetroOtions::display_station()
{
    int i=1;
     ui->textBrowser->clear();
    ui->textBrowser->setStyleSheet("font-size: 14pt;font-weight: 600;");
    for(auto it:Station::stations){

        ui->textBrowser->insertPlainText("Station number (" + QString::number(i) + ") is: " + QString::fromStdString(it.name) + "\n");
        ui->textBrowser->insertPlainText("Station number (" + QString::number(i) + ") is in line : " +  QString::number(it.lines) + "\n\n");

        ++i;
    }
}
void AdminManageMetroOtions::on_pushButton_10_clicked()
{
    emit SwitchToAdminHome();
}
void AdminManageMetroOtions::on_pushButton_11_clicked()
{
    emit SwitchToLogin();
}
void AdminManageMetroOtions::on_pushButton_13_clicked()
{
    emit SwitchToRemoveStation();
}
void AdminManageMetroOtions::on_pushButton_12_clicked()
{
    emit SwitchToAddStation();
}

void AdminManageMetroOtions::on_pushButton_22_clicked()
{
    emit SwitchToTicket();
}

void AdminManageMetroOtions::on_pushButton_23_clicked()
{
    emit SwitchToSub();
}

void AdminManageMetroOtions::on_pushButton_25_clicked()
{
    emit SwitchToAddStation();
}

void AdminManageMetroOtions::on_editStation_clicked()
{
    emit SwitchToEdit();
}


AdminManageMetroOtions::~AdminManageMetroOtions()
{
    delete ui;
}
