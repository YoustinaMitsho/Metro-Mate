/********************************************************************************
** Form generated from reading UI file 'ticket.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKET_H
#define UI_TICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ticket
{
public:
    QWidget *dockWidgetContents;
    QGroupBox *groupBox;
    QLabel *metroimg;
    QLabel *label_13;
    QLabel *adminimg;
    QLabel *label;
    QGroupBox *manage_2;
    QPushButton *pushButton1;
    QLabel *imghome;
    QLabel *label_3;
    QPushButton *logout;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QLabel *label_9;
    QPushButton *station_2;
    QLabel *label_11;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *mail;
    QLineEdit *mail_2;
    QLineEdit *mail_3;
    QPushButton *pushButton_6;
    QLabel *label_10;
    QLineEdit *mail_4;
    QLineEdit *mail_5;

    void setupUi(QDockWidget *Ticket)
    {
        if (Ticket->objectName().isEmpty())
            Ticket->setObjectName("Ticket");
        Ticket->resize(1198, 700);
        QFont font;
        font.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        Ticket->setFont(font);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, -20, 450, 731));
        metroimg = new QLabel(groupBox);
        metroimg->setObjectName("metroimg");
        metroimg->setGeometry(QRect(10, 640, 61, 51));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(80, 660, 131, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(16);
        label_13->setFont(font1);
        adminimg = new QLabel(groupBox);
        adminimg->setObjectName("adminimg");
        adminimg->setGeometry(QRect(130, 20, 151, 141));
        adminimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 160, 101, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font2.setPointSize(26);
        label->setFont(font2);
        manage_2 = new QGroupBox(groupBox);
        manage_2->setObjectName("manage_2");
        manage_2->setGeometry(QRect(0, 200, 451, 80));
        pushButton1 = new QPushButton(manage_2);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setGeometry(QRect(0, 0, 451, 81));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font3.setPointSize(22);
        pushButton1->setFont(font3);
        imghome = new QLabel(manage_2);
        imghome->setObjectName("imghome");
        imghome->setGeometry(QRect(20, 20, 49, 41));
        imghome->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        label_3 = new QLabel(manage_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 61, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;\n"
""));
        logout = new QPushButton(groupBox);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(240, 640, 191, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font4.setPointSize(18);
        logout->setFont(font4);
        logout->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 290, 61, 61));
        label_5->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 280, 451, 81));
        pushButton_4->setFont(font3);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 360, 451, 81));
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 370, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 440, 451, 81));
        pushButton_5->setFont(font3);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 450, 61, 61));
        label_9->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        station_2 = new QPushButton(groupBox);
        station_2->setObjectName("station_2");
        station_2->setGeometry(QRect(0, 520, 451, 81));
        station_2->setFont(font3);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 530, 61, 61));
        label_11->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        pushButton_4->raise();
        metroimg->raise();
        label_13->raise();
        adminimg->raise();
        label->raise();
        manage_2->raise();
        logout->raise();
        label_5->raise();
        pushButton_3->raise();
        label_7->raise();
        pushButton_5->raise();
        label_9->raise();
        station_2->raise();
        label_11->raise();
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(750, 70, 241, 61));
        label_2->setFont(font3);
        layoutWidget = new QWidget(dockWidgetContents);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(490, 220, 216, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font3);

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font3);

        verticalLayout->addWidget(label_6);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font3);

        verticalLayout->addWidget(label_8);

        mail = new QLineEdit(dockWidgetContents);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(830, 240, 291, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font5.setPointSize(18);
        mail->setFont(font5);
        mail->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        mail_2 = new QLineEdit(dockWidgetContents);
        mail_2->setObjectName("mail_2");
        mail_2->setGeometry(QRect(830, 320, 291, 41));
        mail_2->setFont(font5);
        mail_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        mail_3 = new QLineEdit(dockWidgetContents);
        mail_3->setObjectName("mail_3");
        mail_3->setGeometry(QRect(830, 400, 291, 41));
        mail_3->setFont(font5);
        mail_3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        pushButton_6 = new QPushButton(dockWidgetContents);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(690, 560, 261, 41));
        pushButton_6->setFont(font4);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_10 = new QLabel(dockWidgetContents);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(491, 464, 214, 76));
        label_10->setFont(font3);
        mail_4 = new QLineEdit(dockWidgetContents);
        mail_4->setObjectName("mail_4");
        mail_4->setGeometry(QRect(1320, 710, 291, 41));
        mail_4->setFont(font5);
        mail_4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        mail_5 = new QLineEdit(dockWidgetContents);
        mail_5->setObjectName("mail_5");
        mail_5->setGeometry(QRect(830, 480, 291, 41));
        mail_5->setFont(font5);
        mail_5->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        Ticket->setWidget(dockWidgetContents);

        retranslateUi(Ticket);

        QMetaObject::connectSlotsByName(Ticket);
    } // setupUi

    void retranslateUi(QDockWidget *Ticket)
    {
        Ticket->setWindowTitle(QCoreApplication::translate("Ticket", "DockWidget", nullptr));
        groupBox->setTitle(QString());
        metroimg->setText(QString());
        label_13->setText(QCoreApplication::translate("Ticket", "Egypt Metro", nullptr));
        adminimg->setText(QString());
        label->setText(QCoreApplication::translate("Ticket", "Admin", nullptr));
        manage_2->setTitle(QString());
        pushButton1->setText(QCoreApplication::translate("Ticket", "Home Page", nullptr));
        imghome->setText(QString());
        label_3->setText(QString());
        logout->setText(QCoreApplication::translate("Ticket", "Log out", nullptr));
        label_5->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("Ticket", "Manage Metro", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Ticket", "Tickets", nullptr));
        label_7->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("Ticket", "Subsctiption", nullptr));
        label_9->setText(QString());
        station_2->setText(QCoreApplication::translate("Ticket", "Station", nullptr));
        label_11->setText(QString());
        label_2->setText(QCoreApplication::translate("Ticket", "Ticket Cost", nullptr));
        label_4->setText(QCoreApplication::translate("Ticket", "Tire #1 Cost :", nullptr));
        label_6->setText(QCoreApplication::translate("Ticket", "Tire #2 Cost :", nullptr));
        label_8->setText(QCoreApplication::translate("Ticket", "Tire #3 Cost :", nullptr));
        mail->setText(QString());
        mail_2->setText(QString());
        mail_3->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("Ticket", "Change", nullptr));
        label_10->setText(QCoreApplication::translate("Ticket", "Tire #4 Cost :", nullptr));
        mail_4->setText(QString());
        mail_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ticket: public Ui_Ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKET_H
