#pragma once

#include<string>
#include<vector>

class Station
{
    static void readstations();
public:
	std::string name;
	std::vector<int >lines;
	Station();
	Station(std::string name, std::vector< int> lines);
	std::vector<int >getLines();
	void setName(std::string name);
	std::string getName() const;
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
