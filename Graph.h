#pragma once
#include<map>
#include<vector>
#include <unordered_set>
#include<unordered_map>
#include"Station.h"
#include <stack>
#include <queue>
#include <iostream>
using namespace std;
class Graph
{
    std::unordered_map<Station, std::unordered_set<Station, StationHash>, StationHash>adjStation;
    void allPossiblePathsFunctionality(Station starPoint, Station endPoint);
public:
    static Graph graph;
    std::unordered_set< Station, StationHash>stations;
    void addEdge(Station preStation, Station nextStation);
    void addStation(string name, int line);
   // void editStation(Station certainStation);
   // void deleteStation(Station certainStation);
    void AllPossiblePaths(Station starPoint, Station endPoint, map<Station, bool>& visited, vector<string>& path);
    void printGraph();
    std::stack<Station> ShortestPathBFS(Station start, Station end);



};