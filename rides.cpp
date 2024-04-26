#include "rides.h"


Rides::Rides() {

}

Rides::Rides(DateTime currentDate, float c, string start, string end,type_subscribtion s)
{

    date.year=currentDate.year;
    date.month=currentDate.month;
    date.day=currentDate.day;
    date.hour=currentDate.hour;
    date.minute=currentDate.minute;
    date.second=currentDate.second;
    Cost=c;
    First_station=start;
    End_station=end;
    sub=s;
}
