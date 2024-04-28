#include "Station.h"

Station::Station()
{
	lines;
}

Station::Station(std::string name, std::vector< int>line)
	: name(name), lines(line) {}

std::vector<int >Station::getLines() {
	return lines;
}

void Station::setName(std::string Nname)
{
	name = Nname;
}

std::string Station::getName()const
{
	return name;
}

