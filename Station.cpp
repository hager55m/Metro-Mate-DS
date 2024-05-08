#include "Station.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <QDebug>

using namespace std;
QVector<Station> Station::All_stations;
Station::Station()
{
	lines = 0;
}

Station::Station(std::string name, int line)
	: name(name), lines(line) {}

int Station::getLines()
{

	return lines;
}

std::string Station::getName()const
{
    return name;
}

void Station::Read_Staion()
{
    ifstream file ("C:/Users/user/Downloads/data_staion.txt");
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
        All_stations.push_back(Station(Name_str,line_int));
    }
    file.close();
}

void Station::Write_Staion()
{
    ofstream outFile("C:/Users/user/Downloads/data_staion.txt");

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        //return 1; // Return an error code
    }
    for(const auto& it :All_stations){

        outFile<<it.name<<','<<it.lines<<endl;
    }
outFile.close();
}

