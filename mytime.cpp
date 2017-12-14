#include "mytime.h"

MyTime::MyTime()
{
//    time_t t = time(0);
//    struct tm * now = localtime( & t );


//    _seconds = now->tm_sec;
//    _minutes = now->tm_min;
//    _hours = now->tm_hour;

}

MyTime::MyTime(unsigned int sec
           , unsigned int min
           , unsigned int hour) : _seconds(sec)
                                , _minutes(min)
                                , _hours(hour)
{

}
