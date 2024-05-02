#include "userticket.h"

UserTicket::UserTicket() {}

UserTicket::UserTicket( float c, QString start, QString end)
{
    date=DateTime();
    Start_station=start;
    End_station=end;
}
