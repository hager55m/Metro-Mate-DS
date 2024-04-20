#include "Station.h"

Station::Station( std::string name,  std::vector<int> line)
	: name(name), lines(line) {}

const std::vector<int>& Station::getLines()
{
	return lines;
}

