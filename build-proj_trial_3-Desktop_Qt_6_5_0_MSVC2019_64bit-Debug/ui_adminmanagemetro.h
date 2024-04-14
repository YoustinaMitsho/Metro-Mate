/********************************************************************************
** Form generated from reading UI file 'adminmanagemetro.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMANAGEMETRO_H
#define UI_ADMINMANAGEMETRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminManageMetro
{
public:
    QLabel *userdata;
    QPushButton *pushButton_9;
    QLabel *label_13;
    QLabel *label_15;
    QGroupBox *groupBox_2;
    QLabel *holder_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label_19;
    QLabel *label_12;
    QLabel *history_2;
    QLabel *homepic_2;
    QLabel *label_20;
    QLabel *Metro_2;
    QLabel *label_21;
    QPushButton *pushButton_12;
    QLabel *username_2;
    QLabel *userpic_2;
    QLabel *label_22;
    QLabel *username_3;
    QPushButton *pushButton_13;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *userdata_2;

    void setupUi(QDialog *AdminManageMetro)
    {
        if (AdminManageMetro->objectName().isEmpty())
            AdminManageMetro->setObjectName("AdminManageMetro");
        AdminManageMetro->resize(1200, 700);
        userdata = new QLabel(AdminManageMetro);
        userdata->setObjectName("userdata");
        userdata->setGeometry(QRect(420, 760, 49, 41));
        userdata->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        pushButton_9 = new QPushButton(AdminManageMetro);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(390, 740, 451, 81));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 1;"));
        label_13 = new QLabel(AdminManageMetro);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(410, 750, 61, 61));
        label_13->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        label_15 = new QLabel(AdminManageMetro);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(480, 760, 171, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(22);
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        groupBox_2 = new QGroupBox(AdminManageMetro);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(130, -20, 450, 710));
        holder_2 = new QLabel(groupBox_2);
        holder_2->setObjectName("holder_2");
        holder_2->setGeometry(QRect(130, 30, 191, 181));
        holder_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(0, 200, 451, 81));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(0, 380, 451, 81));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(20, 390, 61, 61));
        label_19->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 250, 61, 61));
        label_12->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        history_2 = new QLabel(groupBox_2);
        history_2->setObjectName("history_2");
        history_2->setGeometry(QRect(30, 400, 49, 41));
        history_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        homepic_2 = new QLabel(groupBox_2);
        homepic_2->setObjectName("homepic_2");
        homepic_2->setGeometry(QRect(10, 270, 49, 41));
        homepic_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(100, 320, 171, 41));
        label_20->setFont(font);
        Metro_2 = new QLabel(groupBox_2);
        Metro_2->setObjectName("Metro_2");
        Metro_2->setGeometry(QRect(20, 630, 61, 51));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(90, 650, 131, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(16);
        label_21->setFont(font1);
        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(220, 600, 231, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font2.setPointSize(18);
        pushButton_12->setFont(font2);
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        username_2 = new QLabel(groupBox_2);
        username_2->setObjectName("username_2");
        username_2->setGeometry(QRect(140, 230, 171, 41));
        username_2->setFont(font);
        userpic_2 = new QLabel(groupBox_2);
        userpic_2->setObjectName("userpic_2");
        userpic_2->setGeometry(QRect(150, 50, 151, 141));
        userpic_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(100, 390, 191, 41));
        label_22->setFont(font);
        label_22->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        username_3 = new QLabel(groupBox_2);
        username_3->setObjectName("username_3");
        username_3->setGeometry(QRect(210, 210, 171, 41));
        username_3->setFont(font);
        pushButton_13 = new QPushButton(groupBox_2);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(10, 470, 451, 81));
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 1;"));
        label_23 = new QLabel(AdminManageMetro);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(90, 580, 171, 41));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_24 = new QLabel(AdminManageMetro);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(20, 570, 61, 61));
        label_24->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        userdata_2 = new QLabel(AdminManageMetro);
        userdata_2->setObjectName("userdata_2");
        userdata_2->setGeometry(QRect(50, 460, 49, 41));
        userdata_2->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));

        retranslateUi(AdminManageMetro);

        QMetaObject::connectSlotsByName(AdminManageMetro);
    } // setupUi

    void retranslateUi(QDialog *AdminManageMetro)
    {
        AdminManageMetro->setWindowTitle(QCoreApplication::translate("AdminManageMetro", "Dialog", nullptr));
        userdata->setText(QString());
        pushButton_9->setText(QString());
        label_13->setText(QString());
        label_15->setText(QCoreApplication::translate("AdminManageMetro", "History", nullptr));
        groupBox_2->setTitle(QString());
        holder_2->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        label_19->setText(QString());
        label_12->setText(QString());
        history_2->setText(QString());
        homepic_2->setText(QString());
        label_20->setText(QCoreApplication::translate("AdminManageMetro", "Home Page", nullptr));
        Metro_2->setText(QString());
        label_21->setText(QCoreApplication::translate("AdminManageMetro", "Egypt Metro", nullptr));
        pushButton_12->setText(QCoreApplication::translate("AdminManageMetro", "Log out", nullptr));
        username_2->setText(QCoreApplication::translate("AdminManageMetro", "Userename", nullptr));
        userpic_2->setText(QString());
        label_22->setText(QCoreApplication::translate("AdminManageMetro", "User Metomate", nullptr));
        username_3->setText(QCoreApplication::translate("AdminManageMetro", "Userename", nullptr));
        pushButton_13->setText(QString());
        label_23->setText(QCoreApplication::translate("AdminManageMetro", "History", nullptr));
        label_24->setText(QString());
        userdata_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminManageMetro: public Ui_AdminManageMetro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMANAGEMETRO_H
