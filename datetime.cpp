#include "datetime.h"
#include <QString>
//#include "type_subscribtion.h"
#include <chrono>
#include <ctime>
#include <iostream>
DateTime::DateTime()
{
    //_CRT_SECURE_NO_WARNINGS;
    std::time_t currentTime = std::time(nullptr);
    std::tm* localTime = std::localtime(&currentTime);
    if (localTime != nullptr) {
        day = localTime->tm_mday;
        month = localTime->tm_mon + 1; // Month is 0-based
        year = localTime->tm_year + 1900; // Years since 1900
        hour = localTime->tm_hour;
        minute = localTime->tm_min;
        second = localTime->tm_sec;
    }
    else {
        // Handle error if local time retrieval fails
        std::cerr << "Error: Unable to get local time." << std::endl;
        // Initialize to default values
        day = 1;
        month = 1;
        year = 1970;
        hour = 0;
        minute = 0;
        second = 0;
    }

}
DateTime::DateTime(int day1, int month1, int year1, int hour1, int minute1, int second1)
{
    day = day1;
    month = month1;
    year = year1;
    hour = hour1;
    minute = minute1;
    second = second1;
}
DateTime DateTime::end_time(int sutype, DateTime start, bool pubtype)
{
    DateTime temp;
    temp = start;
    if (sutype == 0) {//add three months
        temp.addMonths(3);

    }
    else if (sutype == 1) {
        if (pubtype == 0) { //add 1 year
            temp.year += 1;
        }
        else {//add 1 month
            temp.addMonths(1);
        }
    }
    return temp;
}

void DateTime::addMonths(int numMonths)
{
    int totalMonths = year * 12 + month + numMonths;
    year = totalMonths / 12;
    month = totalMonths % 12;
    if (month == 0) {
        month = 12;
        year--;
    }
}
// Method to display the DateTime object
void DateTime::display() {
    std::cout << "Year: " << year << ", Month: " << month << ", Day: " << day << std::endl;
    std::cout << "Time: " << hour << ":" << minute << ":" << second << std::endl;
}
int DateTime::compare(const DateTime& other)  {

    // Compare years first
    if (year > other.year)
        return 1;
    else if (year < other.year)
        return -1;

    // If years are equal, compare months
    if (month > other.month)
        return 1;
    else if (month < other.month)
        return -1;

    // If months are equal, compare days
    if (day > other.day)
        return 1;
    else if (day < other.day)
        return -1;

    // If all components are equal, return 0
    return 0;
}
