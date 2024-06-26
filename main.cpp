#include "loginpage.h"
#include "signuppage.h"
#include "types_sub.h"
#include "mainpage.h"
#include "subscriptionlist.h"
#include "ticketpage.h"
#include "subscription.h"
#include "stat1month.h"
#include "stat3months.h"
#include "stat6months.h"
#include "userdata.h"
#include "renewsub.h"
#include "historypage.h"
#include "searchpage.h"
#include "verfication.h"
#include"adminmanagemetroaddstation.h"
#include"adminmanagemetrootions.h"
#include"admonmanagemetrooptions.h"
#include "adminmanagemetroremovestation.h"
#include"admin.h"
#include"addsub.h"
#include "removesub.h"
#include "ticket.h"
#include "adminstations.h"
#include "admindatapage.h"
#include "admineditstation.h"
#include "intro.h"

#include <QApplication>
#include <userclass.h>
#include <Station.h>
#include <cstdlib>

void Write_all();

int main(int argc, char *argv[])
{

    UserClass::Read_File();
    UserClass::Read_User_Signed();
    Station::Read_Staion();
    QApplication a(argc, argv);
    SubscriptionList spl = *new SubscriptionList();
    SubscriptionList::adminSubscriptions.push_back(spl);

    LoginPage lp;
    SignupPage sp;
    types_sub ts;
    MainPage mp;
    TicketPage tp;
    Subscription s;
    stat1month s1;
    stat3months s3;
    stat6months s6;
    UserData ud;
    RenewSub rs;
    HistoryPage hs;
    SearchPage sh;
    verfication v;
    AdminManageMetroOtions admm;
    AdmonManageMetroOptions sub;
    AdminManageMetroAddStation adStation;
    AdminManageMetroRemoveStation adreStation;
    admin admin;
    addsub addsub;
    removesub removesub;
    Ticket ticket;
    AdminStations AdminStation;
    AdminDataPage adp;
    AdminEditStation editst;
    intro i;

    ticket.DataOfTicketToDisplay();

    i.show();

    // intro page
    QObject::connect(&i, &intro::SwitchToLogin, [&]() {
        lp.show();
        i.hide();
        });

    QObject::connect(&removesub, &removesub::SwitchToHomePAGE, [&](){
        admin.show();
        removesub.hide();
    });

    QObject::connect(&removesub, &removesub::SwitchToLogin, [&](){
        lp.show();
        removesub.hide();
    });

    QObject::connect(&removesub, &removesub::SwitchToMangeMetro, [&](){
        admm.show();
        admm.display_station();
        removesub.hide();
    });

    QObject::connect(&removesub, &removesub::SwitchToStation, [&](){
        AdminStation.show();
        removesub.hide();
    });

    QObject::connect(&removesub, &removesub::SwitchToTickets, [&](){
        ticket.show();
        removesub.hide();
    });

    QObject::connect(&removesub, &removesub::SwitchTosubscription, [&](){
        sub.show();
        removesub.hide();
    });


    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToAddMetro, [&](){
        admm.show();
        admm.display_station();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToAddRemove, [&](){
        removesub.updateSubscriptions();
        removesub.show();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToAddStation, [&](){
        addsub.show();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToAddTicket, [&](){
        ticket.show();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToAdminHome, [&](){
        admin.show();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToLogin, [&](){
        lp.show();
        sub.hide();
    });

    QObject::connect(&sub, &AdmonManageMetroOptions::SwitchToStation, [&](){
        AdminStation.show();
        sub.hide();
    });
    //addsub.show();
    QObject::connect(&adp, &AdminDataPage::SwitchToLogin, [&](){
        lp.show();
        adp.hide();
    });

     QObject::connect(&adp, &AdminDataPage::SwitchToHome, [&](){
         admin.show();
         adp.hide();
     });

    QObject::connect(&adp, &AdminDataPage::SwitchToMangeMetro, [&](){
        admm.show();
         admm.display_station();
        adp.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToStation, [&](){
        AdminStation.show();
        adp.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToSub, [&](){
        sub.show();
        adp.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToTicket, [&](){
        ticket.DataOfTicketToDisplay();
        ticket.show();
        adp.hide();
    });

    QObject::connect(&adp, &AdminDataPage::SwitchToUserData, [&](){
        hs.show();
        adp.hide();
    });

    QObject::connect(&adreStation, &AdminManageMetroRemoveStation::SwitchToLogin, [&](){
        lp.show();
        adreStation.hide();
    });

     QObject::connect(&admin, &admin::switchtoticket, [&]() {
         ticket.DataOfTicketToDisplay();
         ticket.show();
         admin.hide();
         });

     QObject::connect(&admin, &admin::switchtomanage, [&]() {
         admm.show();
         admm.display_station();
         admin.hide();
         });

     QObject::connect(&admin, &admin::switchtologin, [&]() {
         lp.show();
         admin.hide();
         });

     QObject::connect(&admin, &admin::switchtosubsctiption, [&]() {
         sub.show();
         admin.hide();
         });

     QObject::connect(&admin, &admin::switchtoapptoval, [&]() {
         
         });
     
     QObject::connect(&admin, &admin::switchtonext_signed, [&]() {

         });   
     QObject::connect(&admin, &admin::switchtonext_login, [&]() {

             });
     QObject::connect(&admin, &admin::switchtouserhistory, [&]() {
         ud.dispaly_data();
         hs.display_history();
         ud.show();
         admin.hide();
         });

      QObject::connect(&admin, &admin::switchtostation, [&]() {
         AdminStation.show();
          admin.hide();
          });
    

     //final
    QObject::connect(&adreStation, &AdminManageMetroRemoveStation::SwitchToMnageMetroOption, [&](){
        admm.show();
          admm.display_station();
        adreStation.hide();
    });

   

    QObject::connect(&adStation, &AdminManageMetroAddStation::SwitchToLogin, [&](){
        lp.show();
        adStation.hide();
    });
    QObject::connect(&adStation, &AdminManageMetroAddStation::SwitchToMnageMetroOption, [&](){
        admm.show();
        admm.display_station();
        adStation.hide();
    });

    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToLogin, [&](){
        lp.show();
        admm.hide();
    });
   
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToAddStation, [&](){
        adStation.show();
        admm.hide();
    });
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToRemoveStation, [&]() {
        adreStation.show();
        admm.hide();
        });
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToAdminHome, [&]() {
        admin.show();
        admm.hide();
        });

    QObject::connect(&admm, &::AdminManageMetroOtions::SwitchToAddStation, [&]() {
        AdminStation.show();
        admm.hide();
        });
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToSub, [&]() {
        sub.show();
        admm.hide();
        });
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToTicket, [&]() {
        ticket.DataOfTicketToDisplay();
        ticket.show();
        admm.hide();
        });
    QObject::connect(&admm, &AdminManageMetroOtions::SwitchToEdit, [&]() {
        editst.display();
        editst.show();
        admm.hide();
    });

    QObject::connect(&editst, &AdminEditStation::SwitchToHome, [&]() {
        admin.show();
        editst.hide();
    });
    QObject::connect(&editst, &AdminEditStation::SwitchToLogin, [&]() {
        lp.show();
        editst.hide();
    });
    QObject::connect(&editst, &AdminEditStation::SwitchToMetro, [&]() {
        admm.show();
        editst.hide();
    });
    QObject::connect(&editst, &AdminEditStation::SwitchToStation, [&]() {
        AdminStation.show();
        editst.hide();
    });
    QObject::connect(&editst, &AdminEditStation::SwitchToSub, [&]() {
        sub.show();
        editst.hide();
    });
    QObject::connect(&editst, &AdminEditStation::SwitchToTicket, [&]() {
        ticket.show();
        editst.hide();
    });
    QObject::connect(&ticket, &Ticket::switshtoadmin, [&]() {
        admin.show();
        ticket.hide();
        });
    QObject::connect(&ticket, &Ticket::switshtomanage, [&]() {
        admm.show();
        ticket.hide();
        });

    QObject::connect(&ticket, &Ticket::switshtologin, [&]() {
        lp.show();
        ticket.hide();
        });
    QObject::connect(&ticket, &Ticket::switshtosub, [&]() {
        sub.show();
        ticket.hide();
        });
    QObject::connect(&ticket, &Ticket::switshtostation, [&]() {
        AdminStation.show();
        ticket.hide();
        });
    QObject::connect(&s, &Subscription::SwitchToHome, [&]() {
        admin.show();
        s.hide();
        });
    

    // login page
    QObject::connect(&lp, &LoginPage::SwitchTOSignup, [&](){
        sp.show();
        lp.hide();
    });

    QObject::connect(&lp, &LoginPage::SwitchToAdminPage, [&]() {
        admin.show();
        lp.hide();
        });

    QObject::connect(&lp, &LoginPage::SwitchToMainPage, [&](){
        mp.show();
        lp.hide();
    });

    //signup page
    QObject::connect(&sp, &SignupPage::SwitchToLogin, [&](){
        lp.show();
        sp.hide();
        //ts.hide();
    });

    QObject::connect(&sp, &SignupPage::SwitchTotypes_sub, [&](){
        ts.show();
        sp.hide();
    });

    //types of subscribtion
    QObject::connect(&ts, &types_sub::SwitchToSignup, [&](){
        sp.show();
        ts.hide();
    });


    // home page
    QObject::connect(&mp, &MainPage::SwitchToLogin, [&](){
        lp.show();
        mp.hide();
    });

    QObject::connect(&mp, &MainPage::SwitchToTicket, [&](){
        tp.show();
        mp.hide();
    });

    QObject::connect(&mp, &MainPage::SwitchToSub, [&](){
        s.show();

        mp.hide();
    });

    QObject::connect(&mp, &MainPage::SwitchToState, [&](){
         s1.display();
        s1.show();

        mp.hide();
    });

    QObject::connect(&mp, &MainPage::SwitchToUser, [&](){
         ud.dispaly_data();
        ud.show();

        mp.hide();
    });


    QObject::connect(&mp, &MainPage::SwitchToSearch, [&](){
        sh.show();
        mp.hide();
    });

    // search page
    QObject::connect(&sh, &SearchPage::SwitchToHome, [&](){
        mp.show();
        sh.hide();
    });

    QObject::connect(&sh, &SearchPage::SwitchToTicket, [&]() {
        tp.show();
        sh.hide();
        });

    // ticket page
    QObject::connect(&tp, &TicketPage::SwitchToSearch, [&]() {
        sh.show();
        tp.hide();
    });

    QObject::connect(&tp, &TicketPage::SwitchToLogin, [&](){
        lp.show();
        tp.hide();
    });

    QObject::connect(&tp, &TicketPage::SwitchToHome, [&](){
        mp.show();
        tp.hide();
    });

    QObject::connect(&tp, &TicketPage::SwitchToSub, [&](){
        s.show();
        tp.hide();
    });

    QObject::connect(&tp, &TicketPage::SwitchToState, [&](){
         s1.display();
        s1.show();
        tp.hide();
    });

    QObject::connect(&tp, &TicketPage::SwitchToUser, [&](){
         ud.dispaly_data();
        ud.show();

        tp.hide();
    });

    QObject::connect(&tp, &TicketPage::SwitchToVerf, [&](){
        v.SetQr();
        v.show();
        tp.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToHome, [&](){
        mp.show();
        s.hide();
    });

    // subscription page


    QObject::connect(&s, &Subscription::SwitchToTicket, [&](){
        tp.show();
        s.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToSearch, [&]() {
        sh.show();
        s.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToHome, [&]() {
        mp.show();
        s.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToLogin, [&](){
        lp.show();
        s.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToState, [&](){
        s1.display();
        s1.show();
        s.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToUser, [&](){
         ud.dispaly_data();
        ud.show();

        s.hide();
    });

    QObject::connect(&s, &Subscription::SwitchToRenew, [&]() {
        rs.show();
        s.hide();
    });

    // renew subscription page
    QObject::connect(&rs, &RenewSub::SwitchToSearch, [&]() {
        sh.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToHome, [&]() {
        mp.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToTicket, [&]() {
        tp.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToLogin, [&]() {
        lp.show();
        rs.hide();
        });

    QObject::connect(&rs, &RenewSub::SwitchToState, [&]() {
         s1.display();
        s1.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToUser, [&]() {
        ud.dispaly_data();

        ud.show();
        rs.hide();
    });

    QObject::connect(&rs, &RenewSub::SwitchToSub, [&]() {
        s.show();
        rs.hide();
    });

    // verfication page
    QObject::connect(&v, &verfication::SwitchToHome, [&](){
        mp.show();
        v.hide();
    });

    // statistics pages (1,3,6)
    QObject::connect(&s1, &stat1month::SwitchToSearch, [&]() {
        sh.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchToHome, [&](){
        mp.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchToTicket, [&](){
        tp.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchToSub, [&](){
        s.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchToUser, [&](){
         ud.dispaly_data();
        ud.show();

        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchToLogin, [&](){
        lp.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchTo3Months, [&](){
        s3.show();
        s1.hide();
    });

    QObject::connect(&s1, &stat1month::SwitchTo6Months, [&](){
        s6.show();
        s1.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchToSearch, [&]() {
        sh.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchToHome, [&](){
        mp.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchToTicket, [&](){
        tp.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchToSub, [&](){
        s.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchToUser, [&](){
         ud.dispaly_data();
        ud.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchToLogin, [&](){
        lp.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchTo1Months, [&](){
         s1.display();
        s1.show();
        s3.hide();
    });

    QObject::connect(&s3, &stat3months::SwitchTo6Months, [&](){
        s6.show();
        s3.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchToSearch, [&]() {
        sh.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchToHome, [&](){
        mp.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchToTicket, [&](){
        tp.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchToSub, [&](){
        s.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchToUser, [&](){
        ud.dispaly_data();
        ud.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchToLogin, [&](){
        lp.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchTo1Months, [&](){
         s1.display();
        s1.show();
        s6.hide();
    });

    QObject::connect(&s6, &stat6months::SwitchTo3Months, [&](){
        s3.show();
        s6.hide();
    });

    // user data page
    QObject::connect(&ud, &UserData::SwitchToHome, [&](){
        mp.show();
        ud.hide();
    });

    QObject::connect(&ud, &UserData::SwitchToHistory, [&](){
        admin.SetFromAdmin();
        hs.show();
        hs.display_history();
        ud.hide();
    });

    QObject::connect(&ud, &UserData::SwitchToLogin, [&](){
        lp.show();
        ud.hide();
    });


    // history page
    QObject::connect(&hs, &HistoryPage::SwitchToLogin, [&](){
        lp.show();
        hs.hide();
    });
    QObject::connect(&hs, &HistoryPage::SwitchToAdmin, [&]() {
        admin.show();
        hs.hide();
    });
    QObject::connect(&hs, &HistoryPage::SwitchTohappy, [&]() {
        
        });

    QObject::connect(&AdminStation, &AdminStations::SwitchToMangeMetro, [&]() {
        admm.show();
        AdminStation.hide();
        });

    QObject::connect(&AdminStation, &AdminStations::SwitchToHomePage, [&]() {
        admin.show();
        AdminStation.hide();
        });

    QObject::connect(&AdminStation, &AdminStations::SwitchToTicket, [&]() {
        ticket.DataOfTicketToDisplay();
        ticket.show();
        AdminStation.hide();
        });


    QObject::connect(&AdminStation, &AdminStations::SwitchTologin, [&]() {
        lp.show();
        AdminStation.hide();
        });
    QObject::connect(&AdminStation, &AdminStations::Display, [&]() {

    });
    QObject::connect(&AdminStation, &AdminStations::SwitchToSupscription, [&]() {
        sub.show();
        AdminStation.hide();
        });

    /// addsub 
    QObject::connect(&addsub, &addsub::SwitchToHomePAGE, [&]() {
            admin.show();
            addsub.hide();
        });
    QObject::connect(&addsub, &addsub::SwitchTosubscription, [&]() {
        AdminStation.show();
        addsub.hide();
        });
    QObject::connect(&addsub, &addsub::LogoutSub, [&]() {
        lp.show();
        addsub.hide();
        });
    QObject::connect(&addsub, &addsub::SwitchToSub, [&]() {
        sub.show();
        addsub.hide();
    });

    QObject::connect(&addsub, &addsub::addsubscription, [&]() {
        addsub.show();
        addsub.hide();
        });

    QObject::connect(&addsub, &addsub::removesubscription, [&]() {
        removesub.updateSubscriptions();
        removesub.show();
        addsub.hide();
        });

    QObject::connect(&addsub, &addsub::SwitchToMangeMetro, [&]() {
        admm.show();
        addsub.hide();
        });

    QObject::connect(&addsub, &addsub::SwitchToTickets, [&]() {
        ticket.DataOfTicketToDisplay();
        ticket.show();
        addsub.hide();
        });

    QObject::connect(&addsub, &addsub::SwitchToLogin, [&]() {
        lp.show();
        addsub.hide();

    });
    
    QObject::connect(&hs, &HistoryPage::SwitchToHome, [&]() {
        mp.show();
        hs.hide();
    });

    QObject::connect(&hs, &HistoryPage::SwitchToUserData, [&]() {
        ud.dispaly_data();
        ud.show();
        hs.hide();
    });

   atexit(Write_all);

    return a.exec();

}
void Write_all(){

    UserClass::Write_users();
    UserClass::Write_users_Signed();
    Station::Write_Staion();

}
