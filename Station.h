#pragma once

#include<string>
#include<vector>
#include<QVector>

/*
class Station
{
    std::string name;
    int lines;
public:
    static std::vector<Station> stations;
    Station();
    Station(std::string name, int lines);
    int getLines();
    std::string getName() const;
    bool operator<(const Station& other) const {
        return(name < other.name);
    }
    bool operator==(const Station& other) const {
        // Implement comparison logic here
        // For example, compare relevant data members of Station class
        return name == other.name;
    }
    static void readstations();
*/

class Station
{
    public:
	std::string name;
	int lines;


	Station();
	Station(std::string name, int lines);
    static QVector<Station> All_stations;
	int getLines();
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
};

struct StationHash {
    std::size_t operator()(const Station& station) const {
        // You can implement your own hash function here
        return std::hash<std::string>()(station.getName());
        //return std::hash<std::string>{}(station.getName());

    }
};
