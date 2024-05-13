#include "Station.h"
#include <QFile>
#include <QTextStream>
#include "Graph.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <QDebug>
using namespace std;

QVector<Station> Station::stations;
Station::Station()
{
    //lines = 0;
}

Station::Station(std::string name, int line)
    : name(name), lines(line) {}

Station::Station(std::string name, std::vector<int> lines){
    this->name = name;
    for (int i = 0; i < stations.size(); ++i) {
        lines.emplace_back(stations[i].lines);
    }
    this->line = lines;
}
int Station::getLines()
{

    return lines_;
}
/*
void Station::setName(std::string Nname)
{
	name = Nname;
}
*/
std::string Station::getName()const
{
    return name;
}

void Station::Read_Staion()
{
    ifstream file ("D:/QT/main/Metro-Mate-DS/img/stations_name.txt");
    if (!file.is_open()){
        qDebug()<<"error the file is open";
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string Name_str,Line_str;
        getline(ss, Name_str, ',');
        getline(ss, Line_str, ',');
        int line_int=std::stoi(Line_str);
        stations.push_back(Station(Name_str,line_int));
    }
    file.close();
}

void Station::Write_Staion()
{
    ofstream outFile("D:/QT/main/Metro-Mate-DS/img/stations_name.txt");

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        //return 1; // Return an error code
    }
    for(const auto& it :stations){

        outFile<<it.name<<','<<it.lines_<<endl;
    }
outFile.close();
}

void Station::readstations(){
    QFile file("D:/QT/main/Metro-Mate-DS/img/stations_name.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open the file:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(",");
        if (parts.size() == 2) {
            QString stationName = parts[0];
            int lineNumber = parts[1].toInt(); // Convert the string to an integer
            // Now you can store the stationName and lineNumber in your data structure
            // For example, you can create Station objects and store them in a vector
            Station newStation(stationName.toStdString(), lineNumber);
            stations.push_back(newStation);
        } else {
            //qDebug() << "Invalid line format:" << line;
        }
    }
    file.close();

    for(const auto& path : stations){
        //Graph::addStation(path.name, path.lines);
    }
    for (int i = 0; i < stations.size() -1; ++i) {
        if(Station::stations[i].lines == Station::stations[i+1].lines)
        Graph::addEdge(Station::stations[i], Station::stations[i+1]);
    }
}
