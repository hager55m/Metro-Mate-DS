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
    std::unordered_set< Station, StationHash>stations;
public:
    static Graph graph;
    void addEdge(Station preStation, Station nextStation);
    void addStation(string name, int line);
    void editStation(Station certainStation);
    void deleteStation(Station certainStation);
   // void AllPossiblePaths(Station starPoint, Station endPoint, map<Station, bool>& visited, vector<string>& path);
    vector<vector<string>> AllPossiblePaths(Station starPoint, Station endPoint, map<Station, bool>& visited, vector<string>& path);
    void printGraph();

   // void allPossiblePathsFunctionality(Station starPoint, Station endPoint);
    vector<vector<string>> allPossiblePathsFunctionality(Station starPoint, Station endPoint);

    std::stack<Station> ShortestPathBFS(Station start, Station end);
    // all possible shotest path 
    vector<vector<Station>> dijkstra(Station start, Station end) {
        vector<vector<Station>> allPaths;
        vector<Station>path;
        map<Station, bool>visited;
        queue< vector<Station>> q;
        path.push_back(start);
        q.push(path);

        while (!q.empty()) {
            path = q.front();
            q.pop();
            Station lastStation = path.back();
            if (lastStation == end) {
                allPaths.push_back(path);
            }
            visited[lastStation] = true;

            // graph 
            auto it = adjStation[lastStation].begin();
            for (; it != adjStation[lastStation].end(); it++)
            {
                if (!visited[*it])
                {
                    vector<Station> newPath(path.begin(), path.end());
                    newPath.push_back(*it);
                    q.push(newPath);
                }


            }

        }

        for (int i = 0; i < allPaths.size(); i++)
        {
            for (int j = 0; j < allPaths[i].size(); j++)
            {
                std::cout << allPaths[i][j].getName() << "\t";
            }cout << "\n";
        }
        return allPaths;
    }
    // In Graph.cpp


    bool isInSubscriptionArea(subscriotion startSub, subscriotion endSub, Station startRide, Station endRide) {
        // Find all possible paths between startSub and endSub
      //  allPossiblePathsFunctionality(startRide, endRide);

        // Check if startRide and endRide are on any of these paths
        vector<vector<string>>Tpaths = allPossiblePathsFunctionality(startRide, endRide);
       
        for (const auto& path : Tpaths) {
            if (std::find(path.begin(), path.end(), startRide) != path.end() &&
                std::find(path.begin(), path.end(), endRide) != path.end()) {
                // Both startRide and endRide are on this path
                return true;
            }
        }

        // If no path contains both startRide and endRide, return false
        return false;
    }



};
