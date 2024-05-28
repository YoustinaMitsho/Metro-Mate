#pragma once
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <limits>
#include"userclass.h"

class Statistics
{
    public:
       static double calculateTotalIncome();
       static double calculateAverageIncome() ;
       static double calculateAverageUserCost() ;
       static double findMaxCost() ;
       static double findMinCost() ;
       static std::string findMostFrequentStartStation() ;
       static std::string findMostFrequentEndStation() ;

    
       
    
};

