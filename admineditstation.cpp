#include "admineditstation.h"
#include "ui_admineditstation.h"
#include "Station.h"
#include "Graph.h"
#include <QMessageBox>

AdminEditStation::AdminEditStation(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminEditStation)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    QPixmap u(":/images/img/man.png");
    ui->userpic_2->setPixmap(u.scaled(ui->userpic_2->width(), ui->userpic_2->height(), Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->Metro_2->setPixmap(m.scaled(ui->Metro_2->width(), ui->Metro_2->height(), Qt::KeepAspectRatio));

    QPixmap h(":/images/img/home (1).png");
    ui->homepic_2->setPixmap(h.scaled(ui->homepic_2->width(), ui->homepic_2->height(), Qt::KeepAspectRatio));

    QPixmap d(":/images/img/train.png");
    ui->ManageMetro->setPixmap(d.scaled(ui->ManageMetro->width(), ui->ManageMetro->height(), Qt::KeepAspectRatio));

    QPixmap ticket(":/images/img/ticket.png");
    ui->Ticket->setPixmap(ticket.scaled(ui->Ticket->width(), ui->Ticket->height(), Qt::KeepAspectRatio));

    QPixmap subscribtion(":/images/img/subway.png");
    ui->Subscribtion->setPixmap(subscribtion.scaled(ui->Subscribtion->width(), ui->Subscribtion->height(), Qt::KeepAspectRatio));

    QPixmap entrance(":/images/img/entrance.png");
    ui->Station->setPixmap(entrance.scaled(ui->Station->width(), ui->Station->height(), Qt::KeepAspectRatio));

    // for (int i = 0; i < Station::stations.size(); ++i) {
    //     ui->comboBox->addItem(QString::fromStdString(Station::stations[i].name));
    // }
}

void AdminEditStation::display()
{


    ui->comboBox->clear();
    ui->comboBox->setStyleSheet("font-size: 14pt;font-weight: 600;");
    for(auto it:Station::stations){

        ui->comboBox->addItem( QString::fromStdString(it.name) );
       // ui->textBrowser->insertPlainText("Station number (" + QString::number(i) + ") is in line : " +  QString::number(it.lines) + "\n\n");


    }
}

AdminEditStation::~AdminEditStation()
{
    delete ui;
}

void AdminEditStation::on_pushButton_10_clicked() // home
{
    emit SwitchToHome();
}


void AdminEditStation::on_pushButton_21_clicked() // mange metro
{
    emit SwitchToMetro();
}


void AdminEditStation::on_pushButton_22_clicked() // ticket
{
    emit SwitchToTicket();
}


void AdminEditStation::on_pushButton_23_clicked() // sub
{
    emit SwitchToSub();
}


void AdminEditStation::on_pushButton_25_clicked() // station
{
    emit SwitchToStation();
}


void AdminEditStation::on_pushButton_11_clicked() // login
{
    emit SwitchToLogin();
}


void AdminEditStation::on_pushButton_15_clicked() // manage metro
{
    emit SwitchToMetro();
}


void AdminEditStation::on_pushButton_14_clicked()
{
    if(!ui->name_21->text().isEmpty() && !ui->name_22->text().isEmpty()){
        for (int i = 0; i < Station::stations.size(); ++i) {
            if(ui->comboBox->currentText() == QString::fromStdString(Station::stations[i].name)){
                Station::stations[i].name = ui->name_22->text().toStdString();
            }
        }
        QMessageBox::information(this, "Station Name", "Saved Successfully");
        for (int i = 0; i < Station::stations.size(); i++)
        {
            qDebug() << Station::stations[i].name << "\n";
        }
    }
    else {
        QMessageBox::warning(this, "Empty Station Name", "Please enter a station name.");
    }
}

