/********************************************************************************
** Form generated from reading UI file 'verfication.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERFICATION_H
#define UI_VERFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_verfication
{
public:
    QLabel *label;
    QPushButton *m1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *verfication)
    {
        if (verfication->objectName().isEmpty())
            verfication->setObjectName("verfication");
        verfication->resize(1200, 700);
        verfication->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        label = new QLabel(verfication);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 30, 631, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(40);
        label->setFont(font);
        m1 = new QPushButton(verfication);
        m1->setObjectName("m1");
        m1->setGeometry(QRect(70, 40, 75, 71));
        m1->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 5;\n"
"border-image: url(:/images/img/left-arrow.png) 0 0 0 0 stretch stretch;\n"
"width: 50px;\n"
"height: 50px;"));
        label_2 = new QLabel(verfication);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, 150, 641, 531));
        label_3 = new QLabel(verfication);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, 140, 641, 531));
        label_4 = new QLabel(verfication);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(360, 140, 641, 531));
        label_5 = new QLabel(verfication);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(360, 130, 641, 531));

        retranslateUi(verfication);

        QMetaObject::connectSlotsByName(verfication);
    } // setupUi

    void retranslateUi(QDialog *verfication)
    {
        verfication->setWindowTitle(QCoreApplication::translate("verfication", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("verfication", "Purchased Successfully", nullptr));
        m1->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class verfication: public Ui_verfication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERFICATION_H
