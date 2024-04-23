#include "Station.h"

Station::Station()
{
	lines = 0;
}

Station::Station(std::string name, int line)
	: name(name), lines(line) {}

int Station::getLines()
{

	return lines;
}

std::string Station::getName()const
{
	return name;
}

