#include "Graph.h"
#include <iostream>
using namespace std;

Graph Graph::graph;
static Graph graph;

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

void Graph::allPossiblePathsFunctionality(Station starPoint, Station endPoint)
{
    map<Station, bool> visited;
    vector<string>paths;
    AllPossiblePaths(starPoint, endPoint, visited, paths);
}

void Graph::AllPossiblePaths(Station starPoint, Station endPoint, map<Station, bool>& visited, vector<string>& path)
{
    visited[starPoint] = true;
    path.emplace_back(starPoint.getName());
    vector<vector<string>>paths;
    if (starPoint.getName() == endPoint.getName())
    {
     /*   paths.emplace_back(path);
         for (auto x : paths[paths.size() - 1])
             std::cout << x << ' ';
         std::cout << '\n';*/

    }
    else
    {
        for (auto i = adjStation[starPoint].begin(); i != adjStation[starPoint].end(); i++)
        {
            if (!visited[*i])
                AllPossiblePaths(*i, endPoint, visited, path);
        }
    }
    path.pop_back();
    visited[starPoint] = false;
}
// for check only
void Graph::printGraph() {
    auto it = adjStation.begin();
    /* for (; it != adjStation.end(); it++) {
         Station s = it->first;
         std::cout << "Station: " << s.getName() << " -> ";
         auto itForSet = it->second.begin();
         for (; itForSet!=it->second.end(); itForSet++)
         {
             cout << itForSet->getName() << "\t";
         }

         cout << "\n";
     }*/
}

// https://www.youtube.com/watch?v=T_m27bhVQQQ
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


    return s;
}




