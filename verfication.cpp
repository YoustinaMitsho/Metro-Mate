#include "verfication.h"
#include "ticket.h"
#include "ui_verfication.h"
#include "ticketpage.h"
verfication::verfication(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::verfication)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    QPixmap i(":/images/img/6.jpg");
    ui->label_2->setPixmap(i.scaled(ui->label_2->width(), ui->label_2->height(), Qt::KeepAspectRatio));

    QPixmap j(":/images/img/8.jpg");
    ui->label_3->setPixmap(j.scaled(ui->label_3->width(), ui->label_3->height(), Qt::KeepAspectRatio));

    QPixmap k(":/images/img/12.jpg");
    ui->label_4->setPixmap(k.scaled(ui->label_4->width(), ui->label_4->height(), Qt::KeepAspectRatio));

    QPixmap l(":/images/img/15.jpg");
    ui->label_5->setPixmap(l.scaled(ui->label_5->width(), ui->label_5->height(), Qt::KeepAspectRatio));

}

verfication::~verfication()
{
    delete ui;
}

void verfication::on_m1_clicked()
{
    emit SwitchToHome();
}

void verfication::SetQr(){
    qDebug() << "cost: " << TicketPage::ticket_cost << "\n";
    if (TicketPage::ticket_cost == Ticket::Costs[0]) {
        ui->label_2->show();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
    }
    else if (TicketPage::ticket_cost == Ticket::Costs[1]) {
        ui->label_3->show();
        ui->label_2->hide();
        ui->label_4->hide();
        ui->label_5->hide();
    }
    else if (TicketPage::ticket_cost == Ticket::Costs[2]) {
        ui->label_4->show();
        ui->label_3->hide();
        ui->label_2->hide();
        ui->label_5->hide();
    }
    else if (TicketPage::ticket_cost == Ticket::Costs[3]) {
        ui->label_5->show();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_2->hide();
    }
}
