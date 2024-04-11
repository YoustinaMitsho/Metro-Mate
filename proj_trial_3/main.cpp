#include "loginpage.h"
#include "signuppage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginPage lp;
    SignupPage sp;

    QObject::connect(&lp, &LoginPage::SwitchTOSignup, [&](){
        sp.show();
        lp.hide();
    });

    QObject::connect(&sp, &SignupPage::SwitchToLogin, [&](){
        lp.show();
        sp.hide();
    });

    lp.show();
    return a.exec();
}
