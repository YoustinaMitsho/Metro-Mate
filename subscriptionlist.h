#ifndef SUBSCRIPTIONLIST_H
#define SUBSCRIPTIONLIST_H
#include <QString>

class SubscriptionList
{
public:
    QString sub_name; QString rides_no; QString duration;
    SubscriptionList();
    SubscriptionList(QString Sub_name, QString Rides_no, QString Duration);
    static QList<SubscriptionList> adminSubscriptions;
    static void removeSubscription(const QString &subName);
};

#endif // SUBSCRIPTIONLIST_H
