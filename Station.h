#pragma once
#include<string>
#include<vector>
class Station
{
	std::vector<int>lines;
	std::string name;

public:
	Station(std::string name,std:: vector<int> lines);
	const std::vector<int>& getLines();
	
};

