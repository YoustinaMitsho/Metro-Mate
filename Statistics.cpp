#include "Statistics.h"
#include "qdebug.h"
using namespace std;
double Statistics::calculateTotalIncome() 
{
    double totalIncome = 0.0;
    qDebug()<<"user in stat"<<UserClass::thisuser.Username;
    for (const auto& ride : UserClass::thisuser.user_tickets)
    {
        totalIncome += ride.Cost;
    }
    return totalIncome;
}

double Statistics::calculateAverageIncome() 
{
    assert(!UserClass::thisuser.user_tickets.empty());
        double totalIncome = calculateTotalIncome();
        return totalIncome / UserClass::thisuser.user_tickets.size();
    
}

double Statistics::calculateAverageUserCost() 
{
    assert(!UserClass::thisuser.user_tickets.empty());
    double totalFares = 0.0;
    for (const auto& ride : UserClass::thisuser.user_tickets)
    {
        totalFares += ride.Cost;
    }
    return totalFares / UserClass::thisuser.user_tickets.size();
}

double Statistics::findMaxCost() 
{
    if (UserClass::thisuser.user_tickets.empty())
        return 0.0;
    auto maxElement = std::max_element(UserClass::thisuser.user_tickets.begin(), UserClass::thisuser.user_tickets.end(),
        [](const UserTicket& a, const UserTicket& b)   // da class lazem a3rfah he3mal el akbr based on eh
        {
            return a.Cost < b.Cost;
        });
    return maxElement->Cost;
}

double Statistics::findMinCost() 
{
    if (UserClass::thisuser.user_tickets.empty())
        return 0.0;
    auto minElement = std::min_element(UserClass::thisuser.user_tickets.begin(), UserClass::thisuser.user_tickets.end(),
        [](const UserTicket& a, const UserTicket& b) 
        {
            return a.Cost < b.Cost;
        });
    return minElement->Cost;
}

// std::string Statistics::findMostFrequentStartStation()
// {
//    std::unordered_map<std::string, int> startStationCounts;
//    for ( auto& ride : UserClass::thisuser.user_tickets)
// {
//        startStationCounts[ride.Start_station]++;
//    }
//    auto maxStartStation = std::max_element(startStationCounts.begin(), startStationCounts.end(),
//        [](const auto& a, const auto& b)
// {
//            return a.second < b.second;
//        });
//    return maxStartStation->first;
// }

//std::string Statistics::findMostFrequentEndStation()
//{
//    std::unordered_map<std::string, int> endStationCounts;
//    for (const auto& ride : UserClass::thisuser.user_tickets) 
// {
//        endStationCounts[ride.End_station]++;
//    }
//    auto maxEndStation = std::max_element(endStationCounts.begin(), endStationCounts.end(),
//        [](const auto& a, const auto& b) 
// {
//            return a.second < b.second;
//        });
//    return maxEndStation->first;
//}

