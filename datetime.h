#ifndef DATETIME_H
#define DATETIME_H

class DateTime
{
public:
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;
    DateTime(int, int, int, int, int, int);
    DateTime();
    static DateTime end_time(int subType,DateTime,bool);//hta5od al start time w tdy al end time
    // Method to add months to the DateTime object
    void addMonths(int numMonths);
    void display();
    int compare(const DateTime& other);
};

#endif // DATETIME_H
