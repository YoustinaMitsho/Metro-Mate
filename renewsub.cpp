#include "renewsub.h"
#include "ui_renewsub.h"
#include "user_subscribtion.h"
#include "userclass.h"
#include "subscription.h"
#include "subscriptionlist.h"
#include "QDebug"
#include "Graph.h"
#include "Station.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QIntValidator>
#include <QString>
#include"Station.h"

QString RenewSub::changed_sub_name;
RenewSub::RenewSub(QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::RenewSub)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));

    
    QIntValidator* validatorr = new QIntValidator(ui->money);
    ui->money->setValidator(validatorr);

    // adding pics
    QPixmap i(":/images/img/map-point.png");
    ui->searchicon->setPixmap(i.scaled(ui->searchicon->width(), ui->searchicon->height(), Qt::KeepAspectRatio));

    QPixmap h(":/images/img/home (1).png");
    ui->home->setPixmap(h.scaled(ui->home->width(), ui->home->height(), Qt::KeepAspectRatio));

    QPixmap t(":/images/img/ticket.png");
    ui->ticket->setPixmap(t.scaled(ui->ticket->width(), ui->ticket->height(), Qt::KeepAspectRatio));

    QPixmap s(":/images/img/subway.png");
    ui->sub->setPixmap(s.scaled(ui->sub->width(), ui->sub->height(), Qt::KeepAspectRatio));

    QPixmap st(":/images/img/infographic.png");
    ui->state->setPixmap(st.scaled(ui->state->width(), ui->state->height(), Qt::KeepAspectRatio));

    QPixmap u(":/images/img/man.png");
    ui->user->setPixmap(u.scaled(ui->user->width(), ui->user->height(), Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->metro->setPixmap(m.scaled(ui->metro->width(), ui->metro->height(), Qt::KeepAspectRatio));

    for (const auto&  station : Station::stations) {
        ui->start->addItem(QString::fromStdString(station.getName()));
        ui->end->addItem(QString::fromStdString(station.getName()));
    }
    ui->start->setCurrentText(QString::fromStdString(Station::stations.at(0).getName()));
    ui->end->setCurrentText(QString::fromStdString(Station::stations.at(0).getName()));

    for(int i = 0; i < SubscriptionList::adminSubscriptions.size(); i++){
        ui->type->addItem(SubscriptionList::adminSubscriptions[i].sub_name);
    }

}
    
RenewSub::~RenewSub()
{
    delete ui;
}

void RenewSub::on_pushButton_2_clicked() // home
{
    emit SwitchToHome();
}

void RenewSub::on_pushButton_4_clicked() // ticket
{
    emit SwitchToTicket();
}

void RenewSub::on_change_clicked() // change
{

    if (ui->type->currentIndex() == 1)
    {
        if (ui->start->currentIndex() != 0 && ui->end->currentIndex() != 0 && ui->month3->isChecked() && ui->money->text().isEmpty())
        {
            Station starter;
            Station ender;

            for (int i = 0; i < Station::stations.size(); ++i)
            {
                if (ui->start->currentText() == QString::fromStdString(Station::stations[i].name))
                {
                    starter = Station::stations[i];
                }
                if (ui->end->currentText() == QString::fromStdString(Station::stations[i].name))
                {
                    ender = Station::stations[i];
                }
            }
            stack <Station> bfs = Graph::ShortestPathBFS(starter, ender);


            if (UserClass::thisuser.balance >= price(bfs.size()))
            {
                UserClass::thisuser.balance -=price(bfs.size());
                User_subscribtion stud = User_subscribtion(student,0,ui->start->currentText(),ui->end->currentText());
                UserClass::thisuser.UserSub=stud;

                for( auto& it:UserClass::users)
                {
                    if(it.Username==UserClass::thisuser.Username)
                    {
                        it.balance -=price(bfs.size());
                        it.UserSub = stud;
                    }
                }

                QMessageBox::information(this, "Change", "Change Your Subscription to Student");
                emit SwitchToSub();
            }
            else
            {
                QMessageBox::information(this, "Change", "Can't Change Check Your Balance");
                emit SwitchToUser();
            }
        }
        else
        {
            QMessageBox::information(this, "Student Subscription", "please choose start , end and 3 Months only");
        }
    }

    else if (ui->type->currentIndex() == 2)
    {
        if (ui->start->currentIndex() != 0 && ui->end->currentIndex() != 0 && ui->money->text().isEmpty())
        {
            Station starter;
            Station ender;

            for (int i = 0; i < Station::stations.size(); ++i)
            {
                if (ui->start->currentText() == QString::fromStdString(Station::stations[i].name))
                {
                    starter = Station::stations[i];
                }
                if (ui->end->currentText() == QString::fromStdString(Station::stations[i].name))
                {
                    ender = Station::stations[i];
                }
            }
            stack <Station> bfs = Graph::ShortestPathBFS(starter, ender);

            if (ui->month1->isChecked())
            {
                if (UserClass::thisuser.balance >= price(bfs.size()))
                {
                    UserClass::thisuser.balance -=price(bfs.size());
                    User_subscribtion pub_month = User_subscribtion(pub,0,1,ui->start->currentText(),ui->end->currentText());
                    UserClass::thisuser.UserSub=pub_month;

                    for( auto& it:UserClass::users)
                    {
                        if(it.Username==UserClass::thisuser.Username)
                        {
                            it.balance -=price(bfs.size());
                            it.UserSub = pub_month;
                        }
                    }

                    QMessageBox::information(this, "Change", "Change Your Subscription to Public");
                    emit SwitchToSub();
                }

                else
                {
                    QMessageBox::information(this, "Change", "Can't Change Check Your Balance");
                    emit SwitchToUser();
                }
            }
            else if( ui->year->isChecked())
            {
                if (UserClass::thisuser.balance >= price(bfs.size()))
                {
                    UserClass::thisuser.balance -=price(bfs.size());
                    User_subscribtion pub_year = User_subscribtion(pub,0,0,ui->start->currentText(),ui->end->currentText());
                    UserClass::thisuser.UserSub=pub_year;

                    for( auto& it:UserClass::users)
                    {
                        if(it.Username==UserClass::thisuser.Username)
                        {
                            it.balance -=price(bfs.size());
                            it.UserSub = pub_year;
                        }
                    }

                    QMessageBox::information(this, "Change", "Change Your Subscription to Public");
                    emit SwitchToSub();
                }

                else
                {
                    QMessageBox::information(this, "Change", "Can't Change Check Your Balance");
                    emit SwitchToUser();
                }
            }

            else
            {
                QMessageBox::information(this, "Public Subscription", "please choose 1 Month or year");
            }
        }

        else
        {
            QMessageBox::information(this, "Public Subscription", "please choose start , end and 1 Month or year only");
        }
    }

    else if (ui->type->currentIndex() == 3)//for wallet
    {
        if (ui->start->currentIndex() == 0 && ui->end->currentIndex() == 0 && !ui->money->text().isEmpty())
        {
            bool isInteger = false;
            int rem = ui->money->text().toInt(&isInteger);

            if (ui->money->text() == "50" || ui->money->text() == "60" || ui->money->text() == "70" || ui->money->text() == "80" || ui->money->text() == "90")
            {
                QString str = ui->money->text();
                int mon = str.toInt();

                if(UserClass::thisuser.balance >= mon){

                    UserClass::thisuser.balance -= mon;
                    UserClass::thisuser.UserSub.wallet = mon;
                    User_subscribtion Wallet = User_subscribtion(wallet,mon);
                    UserClass::thisuser.UserSub=Wallet;

                    for( auto& it:UserClass::users)
                    {
                        if(it.Username==UserClass::thisuser.Username)
                        {
                            it.balance -=mon;
                            it.UserSub = Wallet;
                            it.UserSub.wallet = mon;
                        }
                    }

                    QMessageBox::information(this, "Change", "Change Your Subscription to wallet");
                    emit SwitchToSub();
                }
                else
                {
                    QMessageBox::information(this, "Change", "Can't Change Check Your Balance");
                    emit SwitchToUser();
                }
            }

            else if (ui->money->text() <= "400" && rem % 10 == 0)
            {
                QString str = ui->money->text();
                int mon = str.toInt();

                if (UserClass::thisuser.balance >= mon){
                    UserClass::thisuser.balance -=mon;
                    UserClass::thisuser.UserSub.wallet = mon;
                    User_subscribtion Wallet = User_subscribtion(wallet,mon);
                    UserClass::thisuser.UserSub=Wallet;

                    for( auto& it:UserClass::users)
                    {
                        if(it.Username==UserClass::thisuser.Username)
                        {
                            it.balance -=mon;
                            it.UserSub = Wallet;
                            it.UserSub.wallet = mon;
                        }
                    }

                    QMessageBox::information(this, "Change", "Change Your Subscription to wallet");
                    emit SwitchToSub();
                }
                else
                {
                    QMessageBox::information(this, "Change", "Can't Change Check Your Balance");
                    emit SwitchToUser();
                }
            }
            else
            {
                QMessageBox::information(this, "Wallet Subscription", "please write money less than 400 LE and can Divided to 10 only");
            }
        }
        else
        {
            QMessageBox::information(this, "Wallet Subscription", "please write money less than 400 LE and can Divided to 10 only");
        }
    }

    else
    {
        if (ui->start->currentIndex() != 0 && ui->end->currentIndex() != 0 && ui->money->text().isEmpty())
        {
            Station starter;
            Station ender;

            for (int i = 0; i < Station::stations.size(); ++i)
            {
                if (ui->start->currentText() == QString::fromStdString(Station::stations[i].name))
                {
                    starter = Station::stations[i];
                }
                if (ui->end->currentText() == QString::fromStdString(Station::stations[i].name))
                {
                    ender = Station::stations[i];
                }
            }
            stack <Station> bfs = Graph::ShortestPathBFS(starter, ender);

            if (ui->month1->isChecked())
            {
                if (UserClass::thisuser.balance >= price(bfs.size()))
                {
                    UserClass::thisuser.balance -=price(bfs.size());
                    User_subscribtion pub_month = User_subscribtion(pub,0,1,ui->start->currentText(),ui->end->currentText());
                    UserClass::thisuser.UserSub=pub_month;

                    for( auto& it:UserClass::users)
                    {
                        if(it.Username==UserClass::thisuser.Username)
                        {
                            it.balance -=price(bfs.size());
                            it.UserSub = pub_month;
                        }
                    }

                    QMessageBox::information(this, "Change", "Change Your Subscription ");
                    emit SwitchToSub();
                }

                else
                {
                    QMessageBox::information(this, "Change", "Can't Change Check Your Balance");
                    emit SwitchToUser();
                }
            }
            else if( ui->year->isChecked())
            {
                if (UserClass::thisuser.balance >= price(bfs.size()))
                {
                    UserClass::thisuser.balance -=price(bfs.size());
                    User_subscribtion pub_year = User_subscribtion(pub,0,0,ui->start->currentText(),ui->end->currentText());
                    UserClass::thisuser.UserSub=pub_year;

                    for( auto& it:UserClass::users)
                    {
                        if(it.Username==UserClass::thisuser.Username)
                        {
                            it.balance -=price(bfs.size());
                            it.UserSub = pub_year;
                        }
                    }

                    QMessageBox::information(this, "Change", "Change Your Subscription ");
                    emit SwitchToSub();
                }

                else
                {
                    QMessageBox::information(this, "Change", "Can't Change Check Your Balance");
                    emit SwitchToUser();
                }
            }

            else
            {
                QMessageBox::information(this, " Subscription", "please choose 1 Month or year");
            }
        }

        else
        {
            QMessageBox::information(this, " Subscription", "please choose start , end and 1 Month or year only");
        }
       // QMessageBox::information(this, "Change", "Nothing Change");
        emit SwitchToSub();
    }
    changed_sub_name = ui->type->currentText();
}


int RenewSub::price(int stage)
{

    if (ui->type->currentIndex() == 1)
    {
        if (stage >= 1 && stage <= 9)
            return 33;
        else if (stage >= 10 && stage <= 16)
            return 41;
        else if (stage >= 17 && stage <= 23)
            return 50;
        else
            return 65;
    }
    else if (ui->type->currentIndex() == 2 && ui->month1->isChecked())
    {
        if (stage >= 1 && stage <= 9)
            return 230;
        else if (stage >= 10 && stage <= 16)
            return 290;
        else if (stage >= 17 && stage <= 23)
            return 340;
        else
            return 450;
    }
    else if (ui->type->currentIndex() == 2 && ui->year->isChecked())
    {
        if (stage >= 1 && stage <= 9)
            return 1500;
        else if (stage >= 10 && stage <= 16)
            return 2500;
        else if (stage >= 17 && stage <= 23)
            return 3500;
        else
            return 4500;
    }

}

void RenewSub::on_pushButton_5_clicked() // state
{
    emit SwitchToState();
}


void RenewSub::on_pushButton_6_clicked() // user
{
    emit SwitchToUser();
}


void RenewSub::on_pushButton_clicked() // logout
{
    emit SwitchToLogin();
}

void RenewSub::on_pushButton_7_clicked() // search
{
    emit SwitchToSearch();
}



