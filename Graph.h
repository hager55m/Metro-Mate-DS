#pragma once
#include <map>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include "Station.h"
#include <stack>

using namespace std;

class Graph
{
    static std::unordered_map<Station, std::unordered_set<Station, StationHash>, StationHash> adjStation;
    static std::unordered_set<Station, StationHash> stations;

public:
    static Graph graph;
    static void addEdge(Station preStation, Station nextStation);
    static void addStation(string name, int line);
    void editStation(Station certainStation);
    void deleteStation(Station certainStation);
    static vector<vector<string>> AllPossiblePaths(Station starPoint, Station endPoint, map<Station, bool>& visited, vector<string>& path);
    void printGraph();
    static vector<vector<string>> allPossiblePathsFunctionality(string starPoint, string endPoint); // Modify function signature
    std::stack<Station> ShortestPathBFS(Station start, Station end);
    bool isInSubscriptionArea(string startSub, string endSub, Station startRide, Station endRide);

};
