/*
#include "Graph.h"
#include "Station.h"
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

Graph Graph::graph;
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

void Graph::addStation(string name, vector< int> line)
{
   // Station newStation(name, line);
    // check for the existance of the Station
    // if he didnot find it he will return it points to end
    //if (stations.find(newStation) != stations.end())
    //{

    //    // cout << "this station already exist
    //}
    //stations.insert(newStation);

}

void Graph::editStation(Station certainStation) {
//    vector<vector<string>> Graph::allPossiblePathsFunctionality(string starPoint, string endPoint);
//    int choice;
//    Station start(starPoint, 0); // Assuming line number is not used in the comparison
//    Station end(endPoint, 0); // Assuming line number is not used in the comparison
//    map<Station, bool> visited;
//    vector<string>paths;
//
//    //check number only 1 or 2
//    if (choice == 1)
//    {
//        // check that the name doesn`t exist for any station
//        cout << " New name \n";
//        string newName;
//        cin >> newName;
//        bool found = false;
//        for (auto it1 = Graph::graph.stations.begin(); it1 != Graph::graph.stations.end(); it1++)
//        {
//            if (it1->name == newName)
//            {
//                found = true;
//                break;
//            }
//        }
//        if (found)
//        {
//            //  cout << "this name already exist for another station\n";
//        }
//        else
//        {
//            auto it = stations.find(certainStation);
//            if (it != stations.end())
//            {
//                if (newName != certainStation.getName())
//                {
//                    Station s = *it;
//                    s.setName(newName);
//                    for (int i = 0; i < it->lines.size(); i++)
//                    {
//                        s.lines[i] = it->lines[i];
//                        cout << s.lines[i] << "\n";
//                    }
//                    for (auto it = adjStation[certainStation].begin(); it != adjStation[certainStation].end(); it++)
//                    {
//                        adjStation[s].insert(*it);
//                        adjStation[*it].insert(s);
//                    }
//                    deleteStation(certainStation);
//                    stations.insert(s);
//                    cout << certainStation.name << "\n";
//                }
//                else
//                {
//                    // cout << "this name already exist\n";
//                }
//
//            }
//            else
//            {
//                // cout << "this station doesn`t exist\n";
//            }
//        }
//    }
//    else
//    {
//        //  cout << "delete \n";
//        deleteStation(certainStation);
//    }
}

void Graph::deleteStation(Station certainStation)
{
    vector<Station>stl;
    if (adjStation[certainStation].size() == 1)
    {
        auto  temp = adjStation[certainStation].begin();
        adjStation[*temp].erase(certainStation);
        adjStation[certainStation].erase(*temp);
        Graph::graph.stations.erase(certainStation);
    }
    else if (adjStation[certainStation].size() == 2)
    {
        for (auto it = adjStation[certainStation].begin(); it != adjStation[certainStation].end(); it++)
        {
            adjStation[*it].erase(certainStation);
        }

        auto temp1 = adjStation[certainStation].begin();
        auto temp2 = std::next(temp1);
        addEdge(*temp1, *temp2);
        Graph::graph.stations.erase(certainStation);
        adjStation[certainStation].clear();
    }
    else
    {
       /* for (int i = 0; i < certainStation.getLines().size(); i++)
        {
            for (auto it = adjStation[certainStation].begin(); it != adjStation[certainStation].end(); it++)
            {
                if (it->lines.size() == 1)
                {
                    if (certainStation.getLines().at(i) == it->lines[0])
                    {
                        stl.emplace_back(*it);
                    }
                }
                else
                {
                    for (int j = 0; j < it->lines.size(); j++)
                    {
                        if (certainStation.getLines().at(i) == it->lines[j])
                        {
                            stl.emplace_back(*it);
                        }
                    }
                }
            }
            addEdge(stl.front(), stl.back());
            adjStation[stl.front()].erase(certainStation);
            adjStation[stl.back()].erase(certainStation);
            stl.clear();
        }*/
        Graph::graph.stations.erase(certainStation);
        adjStation[certainStation].clear();
    }
}

//vector<vector<string>> Graph::allPossiblePathsFunctionality(Station starPoint, Station endPoint)
//{
//    map<Station, bool> visited;
//    vector<string> path;
//    return AllPossiblePaths(starPoint, endPoint, visited, path);
//    //return AllPossiblePaths(start, end, visited, path);
//}

//vector<vector<string>> Graph::AllPossiblePaths(Station starPoint, Station endPoint, map<Station, bool>& visited, vector<string>& path)
//{
//    visited[starPoint] = true;
//    path.emplace_back(starPoint.getName());
//    vector<vector<string>> allPaths;
//
//    if (starPoint.getName() == endPoint.getName())
//    {
//        allPaths.emplace_back(path);
//    }
//    else
//    {
//        for (auto i = adjStation[starPoint].begin(); i != adjStation[starPoint].end(); i++)
//        {
//            if (!visited[*i])
//            {
//                vector<vector<string>> morePaths = AllPossiblePaths(*i, endPoint, visited, path);
//                allPaths.insert(allPaths.end(), morePaths.begin(), morePaths.end());
//            }
//        }
//    }
//
//    path.pop_back();
//    visited[starPoint] = false;
//
//    return allPaths;
//}





// for check only
void Graph::printGraph() {
    /* auto it = adjStation.begin();
      for (; it != adjStation.end(); it++) {
          Station s = it->first;
          std::cout << "Station: " << s.getName() << " -> ";
          auto itForSet = it->second.begin();
          for (; itForSet!=it->second.end(); itForSet++)
          {
              cout << itForSet->getName() << "\t";
          }

          cout << "\n";
      }
    for (auto it1 = Graph::graph.stations.begin(); it1 != Graph::graph.stations.end(); it1++) {
        Station currentStation = *it1;
        std::cout << "Station: " << currentStation.getName() << " -> ";

        auto adjStations = adjStation[currentStation]; // Get the set of adjacent stations for the current station

        for (auto it = adjStations.begin(); it != adjStations.end(); it++) {
            std::cout << it->getName() << "\t"; // Output the name of each adjacent station
        }

        std::cout << "\n";
    }

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

bool Graph::isInSubscriptionArea(string startSub, string endSub, Station startRide, Station endRide)
{
    // Find all possible paths between startSub and endSub
    //  allPossiblePathsFunctionality(startRide, endRide);

    // Check if startRide and endRide are on any of these paths
    //vector<vector<string>>Tpaths = allPossiblePathsFunctionality(startRide.getName(), endRide.getName());


    //for (const auto& path : Tpaths)
    //{
    //    if (std::find(path.begin(), path.end(), startRide.getName()) != path.end() &&
    //        std::find(path.begin(), path.end(), endRide.getName()) != path.end())
    //    {
    //        // Both startRide and endRide are on this path
    //        return true;
    //    }
    //}

    // If no path contains both startRide and endRide, return false
    return false;
}
*/

#include "Graph.h"
#include "Station.h"
#include <algorithm>
#include <stack>
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

std::stack<Station> Graph::ShortestPathBFS(Station start, Station end)
{
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

