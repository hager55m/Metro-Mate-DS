#include "Graph.h"
#include"Station.h"
using namespace std;
void Graph::addStation(string name, int line, Station preStation, Station nextStation)
{
	Station newStation(name, vector<int>{line});
    vector<int> insertedLines = newStation.getLines();
    if (!stationIncluded[newStation]) 
    {
        adjStation[newStation].push_back(preStation);
        adjStation[newStation].push_back(nextStation);
        stationIncluded[newStation] = true;
    }
    else  if (find(adjStation[newStation].begin(), adjStation[newStation].end(), preStation) == adjStation[newStation].end() &&
          find(adjStation[newStation].begin(), adjStation[newStation].end(), nextStation) == adjStation[newStation].end()) 
          {
            adjStation[newStation].push_back(preStation);
            adjStation[newStation].push_back(nextStation);
          }
    else if (find(insertedLines.begin(), insertedLines.end(), line) != insertedLines.end())
    {
        adjStation[newStation].push_back(preStation);
        adjStation[newStation].push_back(nextStation);
    }
}
