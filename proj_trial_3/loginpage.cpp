#include "loginpage.h"
#include "ui_loginpage.h"
#include <QPixmap>

LoginPage::LoginPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);

    // add metro pic
    QPixmap pix(":/images/img/16041_tn_eg-cairo-metro-line3-train-impression-hyundairotem.jpg");
    ui->pic->setPixmap(pix.scaled(ui->pic->width(), ui->pic->height(),Qt::KeepAspectRatio));

    // add user pic
    QPixmap pic(":/images/img/149071.png");
    ui->user->setPixmap(pic.scaled(ui->user->width(), ui->user->height(),Qt::KeepAspectRatio));
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_login_clicked()
{

}


void LoginPage::on_signup_clicked()
{
    emit SwitchTOSignup();
}

