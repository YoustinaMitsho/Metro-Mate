/********************************************************************************
** Form generated from reading UI file 'subscription.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSCRIPTION_H
#define UI_SUBSCRIPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Subscription
{
public:
    QLabel *receipt;
    QLabel *total;
    QGroupBox *groupBox;
    QLineEdit *search;
    QLabel *searchicon;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *home;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *ticket;
    QGroupBox *groupBox_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *sub;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_5;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *state;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_6;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *user;
    QFrame *line;
    QPushButton *pushButton;
    QLabel *metro;
    QLabel *label_12;
    QLineEdit *code;
    QComboBox *end;
    QLabel *label_2;
    QComboBox *start;
    QLabel *date;

    void setupUi(QDialog *Subscription)
    {
        if (Subscription->objectName().isEmpty())
            Subscription->setObjectName("Subscription");
        Subscription->resize(1200, 700);
        Subscription->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        receipt = new QLabel(Subscription);
        receipt->setObjectName("receipt");
        receipt->setGeometry(QRect(570, 0, 631, 701));
        total = new QLabel(Subscription);
        total->setObjectName("total");
        total->setGeometry(QRect(920, 390, 71, 21));
        QFont font;
        font.setPointSize(18);
        total->setFont(font);
        total->setStyleSheet(QString::fromUtf8("background-color: white;"));
        groupBox = new QGroupBox(Subscription);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 450, 711));
        search = new QLineEdit(groupBox);
        search->setObjectName("search");
        search->setGeometry(QRect(22, 41, 401, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font1.setPointSize(18);
        search->setFont(font1);
        search->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;\n"
"color: black;"));
        searchicon = new QLabel(groupBox);
        searchicon->setObjectName("searchicon");
        searchicon->setGeometry(QRect(360, 40, 51, 41));
        searchicon->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 110, 451, 80));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 451, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 61, 61));
        label->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;\n"
""));
        home = new QLabel(groupBox_2);
        home->setObjectName("home");
        home->setGeometry(QRect(30, 20, 49, 41));
        home->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(0, 190, 451, 80));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 0, 451, 81));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 20, 171, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font2.setPointSize(22);
        label_4->setFont(font2);
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 61, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;\n"
""));
        ticket = new QLabel(groupBox_3);
        ticket->setObjectName("ticket");
        ticket->setGeometry(QRect(30, 20, 49, 41));
        ticket->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
""));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(0, 270, 451, 80));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 20, 251, 41));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 10, 61, 61));
        label_5->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        sub = new QLabel(groupBox_4);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(30, 20, 49, 41));
        sub->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(0, 350, 451, 80));
        pushButton_5 = new QPushButton(groupBox_5);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 0, 451, 81));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(100, 20, 171, 41));
        label_8->setFont(font2);
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 10, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        state = new QLabel(groupBox_5);
        state->setObjectName("state");
        state->setGeometry(QRect(30, 20, 49, 41));
        state->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(0, 470, 451, 80));
        pushButton_6 = new QPushButton(groupBox_6);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(0, 0, 451, 81));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(100, 20, 171, 41));
        label_10->setFont(font2);
        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 10, 61, 61));
        label_9->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        user = new QLabel(groupBox_6);
        user->setObjectName("user");
        user->setGeometry(QRect(30, 20, 49, 41));
        user->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 440, 421, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 570, 231, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font3.setPointSize(18);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        metro = new QLabel(groupBox);
        metro->setObjectName("metro");
        metro->setGeometry(QRect(10, 640, 61, 51));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(80, 660, 131, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font4.setPointSize(16);
        label_12->setFont(font4);
        code = new QLineEdit(Subscription);
        code->setObjectName("code");
        code->setGeometry(QRect(930, 430, 61, 22));
        code->setFont(font3);
        code->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 5;"));
        end = new QComboBox(Subscription);
        end->setObjectName("end");
        end->setGeometry(QRect(770, 290, 231, 31));
        end->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10;"));
        label_2 = new QLabel(Subscription);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 130, 171, 41));
        label_2->setFont(font2);
        start = new QComboBox(Subscription);
        start->setObjectName("start");
        start->setGeometry(QRect(768, 240, 231, 31));
        start->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10;"));
        date = new QLabel(Subscription);
        date->setObjectName("date");
        date->setGeometry(QRect(730, 180, 251, 21));
        date->setFont(font);
        date->setStyleSheet(QString::fromUtf8("background-color: white;"));

        retranslateUi(Subscription);

        QMetaObject::connectSlotsByName(Subscription);
    } // setupUi

    void retranslateUi(QDialog *Subscription)
    {
        Subscription->setWindowTitle(QCoreApplication::translate("Subscription", "Dialog", nullptr));
        receipt->setText(QString());
        total->setText(QCoreApplication::translate("Subscription", "total $", nullptr));
        groupBox->setTitle(QString());
        search->setText(QCoreApplication::translate("Subscription", "Search.....", nullptr));
        searchicon->setText(QString());
        groupBox_2->setTitle(QString());
        pushButton_2->setText(QString());
        label->setText(QString());
        home->setText(QString());
        groupBox_3->setTitle(QString());
        pushButton_4->setText(QString());
        label_4->setText(QCoreApplication::translate("Subscription", "Buy Ticket", nullptr));
        label_3->setText(QString());
        ticket->setText(QString());
        groupBox_4->setTitle(QString());
        label_6->setText(QCoreApplication::translate("Subscription", "Buy Subscription", nullptr));
        label_5->setText(QString());
        sub->setText(QString());
        groupBox_5->setTitle(QString());
        pushButton_5->setText(QString());
        label_8->setText(QCoreApplication::translate("Subscription", "Statistics", nullptr));
        label_7->setText(QString());
        state->setText(QString());
        groupBox_6->setTitle(QString());
        pushButton_6->setText(QString());
        label_10->setText(QCoreApplication::translate("Subscription", "User", nullptr));
        label_9->setText(QString());
        user->setText(QString());
        pushButton->setText(QCoreApplication::translate("Subscription", "Log out", nullptr));
        metro->setText(QString());
        label_12->setText(QCoreApplication::translate("Subscription", "Egypt Metro", nullptr));
        label_2->setText(QCoreApplication::translate("Subscription", "Home Page", nullptr));
        date->setText(QCoreApplication::translate("Subscription", "Date and time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Subscription: public Ui_Subscription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSCRIPTION_H