#pragma once

#include<string>
#include<vector>
class Station
{
	std::string name;
	int lines;
public:

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
		return name == other.name ;
	}
};
/*
This error typically occurs when you're trying to use a type as a key
in an unordered_map that isn't directly supported by the default hashing mechanism.
In this case, it looks like you're using a custom type Station as a key in an unordered_map,
but there might be a missing or deleted copy constructor, assignment operator,
or comparison operator for the Station type.

To resolve this error, you should ensure that the Station type has appropriate implementations
for these operations. If Station is a user-defined type, you need to define a hash function for it
(if using a custom hash function), and ensure that it has copy constructors, assignment operators,
and comparison operators implemented as needed.

https://www.geeksforgeeks.org/how-to-create-an-unordered_map-of-user-defined-class-in-cpp/
*/

struct StationHash {
	std::size_t operator()(const Station& station) const {
		// You can implement your own hash function here
		return std::hash<std::string>()(station.getName());
		//return std::hash<std::string>{}(station.getName());

	}
};



