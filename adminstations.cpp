#include "adminstations.h"
#include "ui_adminstations.h"
#include "userclass.h"
#include"userticket.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "Station.h"
AdminStations::AdminStations(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminStations)
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

    QPixmap homepic_3(":/images/img/home (1).png");
    ui->homepic_2->setPixmap(homepic_3.scaled(ui->homepic_2->width(), ui->homepic_2->height(),Qt::KeepAspectRatio));
    // QFile file(":/images/img/stations_name.txt");
    // if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    //     qDebug() << "Failed to open the file:" << file.errorString();
    // }
    // QTextStream in(&file);
    // while (!in.atEnd()) {
    //     QString station = in.readLine();
    //     stations.push_back(station);
    // }
    // while (!in.atEnd()) {
    //     QString line = in.readLine();
    //     // Split the line based on the separator
    //     QStringList parts = line.split(",");
    //     if (parts.size() >= 1) { // Ensure there's at least one part (station name)
    //         QString station = parts.at(0).trimmed(); // Extract the station name
    //         stations.push_back(station);
    //     }
    // }
    // file.close();
    foreach (Station station, Station::stations) {
        ui->comboBox->addItem(QString::fromStdString(station.name));

    }
    ui->comboBox->setCurrentText("Stations");






}
void AdminStations::on_pushButton_10_clicked()
{
    emit SwitchToHomePage();
}
void AdminStations::on_pushButton_21_clicked()
{
    emit SwitchToMangeMetro();
}
void AdminStations::on_pushButton_22_clicked()
{
    emit SwitchToTicket();
}
void AdminStations::on_pushButton_23_clicked()
{
    emit SwitchToSupscription();
}

void AdminStations::on_pushButton_11_clicked()
{
    emit SwitchTologin();
}

void AdminStations::on_pushButton_12_clicked()
{
    emit Display();
    int Counter_Station=0;
    float Total_Cost=0;
    QString Station_name=ui->comboBox->currentText();
    for(auto& it:UserClass::users){
        if(it.user_tickets.size()!=0){
        for(auto& i: it.user_tickets){
            if(i.Start_station==Station_name){
                Counter_Station++;
                Total_Cost+=i.Cost;
            }

            }
    }

    }
    ui->name->setText(QString::number(Total_Cost));
    ui->pass->setText(QString::number(Counter_Station));
    ui->pass_2->setText(QString::number(Counter_Station));
}
AdminStations::~AdminStations()
{
    delete ui;
}
