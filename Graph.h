/*
#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include "Station.h"
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

class Graph
{
    static std::unordered_map<Station, std::unordered_set<Station, StationHash>, StationHash> adjStation;
    static std::unordered_set<Station, StationHash> stations;

public:
    static Graph graph;
    static void addEdge(Station preStation, Station nextStation);
    static void addStation(string name, std::vector <int> line);
    void editStation(Station certainStation, int choice);
    void deleteStation(Station certainStation);
    static vector<vector<string>> AllPossiblePaths(Station starPoint, Station endPoint, map<Station, bool>& visited, vector<string>& path);
    void printGraph();
    //static vector<vector<string>> allPossiblePathsFunctionality(string starPoint, string endPoint); // Modify function signature
    std::stack<Station> ShortestPathBFS(Station start, Station end);
    bool isInSubscriptionArea(string startSub, string endSub, Station startRide, Station endRide);
// all possible shotest path 
    //vector<vector<Station>> dijkstra(Station start, Station end) {
    //    vector<vector<Station>> allPaths;
    //    vector<Station>path;
    //    map<Station, bool>visited;
    //    queue< vector<Station>> q;
    //    path.push_back(start);
    //    q.push(path);

    //    while (!q.empty()) {
    //        path = q.front();
    //        q.pop();
    //        Station lastStation = path.back();
    //        if (lastStation == end) {
    //            allPaths.push_back(path);
    //        }
    //        visited[lastStation] = true;

    //        // graph 
    //        auto it = adjStation[lastStation].begin();
    //        for (; it != adjStation[lastStation].end(); it++)
    //        {
    //            if (!visited[*it])
    //            {
    //                vector<Station> newPath(path.begin(), path.end());
    //                newPath.push_back(*it);
    //                q.push(newPath);
    //            }


    //        }

    //    }

    //    for (int i = 0; i < allPaths.size(); i++)
    //    {
    //        for (int j = 0; j < allPaths[i].size(); j++)
    //        {
    //            cout << allPaths[i][j].getName() << "\t";
    //        }cout << "\n";
    //    }
    //    return allPaths;
    //}

};
*/

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
public:
    static std::unordered_map<Station, std::unordered_set<Station, StationHash>, StationHash> adjStation;
    static std::unordered_set<Station, StationHash> stations;
    static Graph graph;
    static void addEdge(Station preStation, Station nextStation);
    static void addStation(string name, int line);
    void editStation(Station certainStation);
    void deleteStation(Station certainStation);
    static vector<vector<string>> AllPossiblePaths(Station starPoint, Station endPoint, map<Station, bool>& visited, vector<string>& path);
    void printGraph();
    static vector<vector<string>> allPossiblePathsFunctionality(string starPoint, string endPoint); // Modify function signature
    static std::stack<Station> ShortestPathBFS(Station start, Station end);
    bool isInSubscriptionArea(string startSub, string endSub, Station startRide, Station endRide);

};
