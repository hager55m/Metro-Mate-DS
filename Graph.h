#pragma once
#include<unordered_map>
#include<vector>
#include<map>
#include"Station.h"
using namespace std;
class Graph
{
	std::unordered_map<Station, std::vector<Station>>adjStation;
	std::map< Station, bool>stationIncluded;
public:
	void addStation(string name, int line, Station preStation, Station nextStation);
	void editStation(Station certainStation);
	void deleteStation(Station certainStation);
	void allPossiblePaths(Station starPoint, Station endPoint);
};

