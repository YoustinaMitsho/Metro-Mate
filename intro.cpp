#include "intro.h"
#include "ui_intro.h"
#include <QMovie>


intro::intro(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::intro)
{
    ui->setupUi(this);
    setWindowTitle("Metro");
    setWindowIcon(QIcon(":/images/img/download.png"));
    // adding pics
    QPixmap u(":/images/img/Cairo_2metro_logo2012.svg.png");
    ui->label->setPixmap(u.scaled(ui->label->width(), ui->label->height(),Qt::KeepAspectRatio));

    QMovie *movie = new QMovie(":/images/img/into.gif");
    ui->intro_vedio->setGeometry(0,0,1200,700);
    ui->intro_vedio->setMovie(movie);
    movie->start();
}

intro::~intro()
{
    delete ui;
}

void intro::on_start_clicked()
{
    emit SwitchToLogin();
}

