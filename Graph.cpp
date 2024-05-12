#include "Graph.h"
#include "Station.h"
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

static Graph graph;
std::unordered_map<Station, std::unordered_set<Station, StationHash>, StationHash> Graph::adjStation;
//std::vector<Station> Station::stations;
std::unordered_set<Station, StationHash> Graph::stations;

void Graph::addEdge(Station station1, Station station2)
{
    // check box to make sure that station already exsist
    stations.insert(station1);
    stations.insert(station2);

    // check for the existance of the Edge
    if (adjStation[station1].find(station2) != adjStation[station1].end())
    {

        //  cout << "this edge already exist";
    }

    // unique because of unordered_set and We need single element access ,O(1) worst case O(N)

    adjStation[station2].insert(station1); //
    adjStation[station1].insert(station2);
}

void Graph::addStation(string name, int line)
{
    Station newStation(name, line);
    // check for the existance of the Station
    // if he didnot find it he will return it points to end
    if (stations.find(newStation) != stations.end())
    {

        // cout << "this station already exist
    }
    stations.insert(newStation);

}

vector<vector<string>> Graph::allPossiblePathsFunctionality(string starPoint, string endPoint)
{
    Station start(starPoint, 0); // Assuming line number is not used in the comparison
    Station end(endPoint, 0); // Assuming line number is not used in the comparison
    map<Station, bool> visited;
    vector<string> path;
    return AllPossiblePaths(start, end, visited, path);
}

vector<vector<string>> Graph::AllPossiblePaths(Station starPoint, Station endPoint, map<Station, bool>& visited, vector<string>& path)
{
    visited[starPoint] = true;
    path.emplace_back(starPoint.getName());
    vector<vector<string>> allPaths;

    if (starPoint.getName() == endPoint.getName())
    {
        allPaths.emplace_back(path);
    }
    else
    {
        for (auto i = adjStation[starPoint].begin(); i != adjStation[starPoint].end(); i++)
        {
            if (!visited[*i])
            {
                vector<vector<string>> morePaths = AllPossiblePaths(*i, endPoint, visited, path);
                allPaths.insert(allPaths.end(), morePaths.begin(), morePaths.end());
            }
        }
    }

    path.pop_back();
    visited[starPoint] = false;

    return allPaths;
}

bool Graph::isInSubscriptionArea(string startSub, string endSub, Station startRide, Station endRide)
{
    // Find all possible paths between startSub and endSub
    //  allPossiblePathsFunctionality(startRide, endRide);

    // Check if startRide and endRide are on any of these paths
    vector<vector<string>>Tpaths = allPossiblePathsFunctionality(startRide.getName(), endRide.getName());

    for (const auto& path : Tpaths)
    {
        if (std::find(path.begin(), path.end(), startRide.getName()) != path.end() &&
            std::find(path.begin(), path.end(), endRide.getName()) != path.end())
        {
            // Both startRide and endRide are on this path
            return true;
        }
    }

    // If no path contains both startRide and endRide, return false
    return false;
}
 std::stack<Station> Graph::ShortestPathBFS(Station start, Station end) {


    if (start == end)
    {
        std::cout << "Start and end stations are the same." << std::endl;
        return {};
    }


    unordered_set<Station, StationHash>vis;
    unordered_map<Station, pair<Station, int>, StationHash> path;
    queue<Station>q;

    q.push(start);
    path[q.front()] = make_pair(start, 0);
    vis.insert(start);

    while (!q.empty())
    {
        Station temp = q.front();
        q.pop();
        if (temp == end)
            break;
        for (auto& child : adjStation.at(temp)) {

            if (vis.find(child) == vis.end()) {
                vis.insert(child);
                q.push(child);
                path[child] = make_pair(temp, path[temp].second + 1);
            }
        }
    }

    stack<Station>s{};
    s.push(end);
    while (end.getName() != start.getName())
    {
        s.push(path[end].first);
        end = path[end].first;
    }
    /*path.pop_back();
    visited[starPoint] = false;

    return allPaths;*/
}
