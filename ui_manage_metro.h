/********************************************************************************
** Form generated from reading UI file 'manage_metro.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_METRO_H
#define UI_MANAGE_METRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manage_metro
{
public:
    QWidget *dockWidgetContents;
    QGroupBox *groupBox;
    QGroupBox *manage;
    QPushButton *pushButton1;
    QLabel *imghome;
    QLabel *label_3;
    QGroupBox *ticket;
    QPushButton *pushButton_3;
    QLabel *ticimg;
    QLabel *label_7;
    QGroupBox *sub;
    QPushButton *pushButton_5;
    QLabel *subimg;
    QLabel *label_9;
    QGroupBox *station;
    QPushButton *pushButton_2;
    QLabel *staimg;
    QLabel *label_11;
    QLabel *metroimg;
    QLabel *label_13;
    QLabel *adminimg;
    QLabel *label;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_4;
    QLabel *manimg;
    QLabel *label_5;

    void setupUi(QDockWidget *manage_metro)
    {
        if (manage_metro->objectName().isEmpty())
            manage_metro->setObjectName("manage_metro");
        manage_metro->resize(970, 783);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 10, 450, 721));
        manage = new QGroupBox(groupBox);
        manage->setObjectName("manage");
        manage->setGeometry(QRect(0, 200, 451, 80));
        pushButton1 = new QPushButton(manage);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setGeometry(QRect(0, 0, 451, 81));
        QFont font;
        font.setPointSize(22);
        pushButton1->setFont(font);
        imghome = new QLabel(manage);
        imghome->setObjectName("imghome");
        imghome->setGeometry(QRect(20, 20, 49, 41));
        imghome->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        label_3 = new QLabel(manage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 61, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;\n"
""));
        ticket = new QGroupBox(groupBox);
        ticket->setObjectName("ticket");
        ticket->setGeometry(QRect(0, 380, 451, 80));
        pushButton_3 = new QPushButton(ticket);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 0, 451, 81));
        pushButton_3->setFont(font);
        ticimg = new QLabel(ticket);
        ticimg->setObjectName("ticimg");
        ticimg->setGeometry(QRect(10, 20, 49, 41));
        ticimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_7 = new QLabel(ticket);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        sub = new QGroupBox(groupBox);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(0, 470, 451, 80));
        pushButton_5 = new QPushButton(sub);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 0, 451, 81));
        pushButton_5->setFont(font);
        subimg = new QLabel(sub);
        subimg->setObjectName("subimg");
        subimg->setGeometry(QRect(20, 20, 49, 41));
        subimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_9 = new QLabel(sub);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 10, 61, 61));
        label_9->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        station = new QGroupBox(groupBox);
        station->setObjectName("station");
        station->setGeometry(QRect(0, 560, 451, 80));
        pushButton_2 = new QPushButton(station);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 451, 81));
        pushButton_2->setFont(font);
        staimg = new QLabel(station);
        staimg->setObjectName("staimg");
        staimg->setGeometry(QRect(20, 20, 49, 41));
        staimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_11 = new QLabel(station);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 10, 61, 61));
        label_11->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        metroimg = new QLabel(groupBox);
        metroimg->setObjectName("metroimg");
        metroimg->setGeometry(QRect(10, 660, 61, 51));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(90, 680, 131, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(16);
        label_13->setFont(font1);
        adminimg = new QLabel(groupBox);
        adminimg->setObjectName("adminimg");
        adminimg->setGeometry(QRect(130, 10, 151, 141));
        adminimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 160, 101, 21));
        QFont font2;
        font2.setPointSize(14);
        label->setFont(font2);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 290, 451, 80));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 0, 451, 81));
        pushButton_4->setFont(font);
        manimg = new QLabel(groupBox_2);
        manimg->setObjectName("manimg");
        manimg->setGeometry(QRect(10, 20, 61, 41));
        manimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
""));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 61, 61));
        label_5->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        manage_metro->setWidget(dockWidgetContents);

        retranslateUi(manage_metro);

        QMetaObject::connectSlotsByName(manage_metro);
    } // setupUi

    void retranslateUi(QDockWidget *manage_metro)
    {
        manage_metro->setWindowTitle(QCoreApplication::translate("manage_metro", "DockWidget", nullptr));
        groupBox->setTitle(QString());
        manage->setTitle(QString());
        pushButton1->setText(QCoreApplication::translate("manage_metro", "Home Page", nullptr));
        imghome->setText(QString());
        label_3->setText(QString());
        ticket->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("manage_metro", "Tickets", nullptr));
        ticimg->setText(QString());
        label_7->setText(QString());
        sub->setTitle(QString());
        pushButton_5->setText(QCoreApplication::translate("manage_metro", "Subscription", nullptr));
        subimg->setText(QString());
        label_9->setText(QString());
        station->setTitle(QString());
        pushButton_2->setText(QCoreApplication::translate("manage_metro", "Station", nullptr));
        staimg->setText(QString());
        label_11->setText(QString());
        metroimg->setText(QString());
        label_13->setText(QCoreApplication::translate("manage_metro", "Egypt Metro", nullptr));
        adminimg->setText(QString());
        label->setText(QCoreApplication::translate("manage_metro", "Admin", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_4->setText(QCoreApplication::translate("manage_metro", "Manage Matro", nullptr));
        manimg->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class manage_metro: public Ui_manage_metro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_METRO_H
