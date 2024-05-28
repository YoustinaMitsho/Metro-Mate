#include "subscriptionlist.h"
#include <QList>

QList<SubscriptionList> SubscriptionList::adminSubscriptions;

SubscriptionList::SubscriptionList(){
    sub_name = "VIP";
    rides_no = "120";
    duration = "3";
}

SubscriptionList::SubscriptionList(QString Sub_name, QString Rides_no, QString Duration){
    sub_name = Sub_name;
    rides_no = Rides_no;
    duration = Duration;
}


void SubscriptionList::removeSubscription(const QString &subName) {
    for (int i = 0; i < adminSubscriptions.size(); ++i) {
        if (adminSubscriptions[i].sub_name == subName) {
            adminSubscriptions.removeAt(i);
            return;
        }
    }
}
