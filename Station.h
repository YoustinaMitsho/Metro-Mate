#pragma once

#include<string>
#include<QVector>

class Station
{
public:
    std::string name;
    int lines;
    std::vector <int> line_vec;
    Station();
    Station(std::string name, int lines);
    static std::vector <int> CreateStationLineVec(std::string name, std::vector <int> vec_line);
    static QVector<Station> stations;
    std::vector<int> getLines();
    std::string getName() const;
    static void Read_Staion();
    static void Write_Staion();
    bool operator<(const Station& other) const {
        return(name < other.name);
    }
    bool operator==(const Station& other) const {
        // Implement comparison logic here
        // For example, compare relevant data members of Station class
        return name == other.name ;
    }
    static void readstations();
};

struct StationHash {
    std::size_t operator()(const Station& station) const {
        // You can implement your own hash function here
        return std::hash<std::string>()(station.getName());
        //return std::hash<std::string>{}(station.getName());

    }
};
