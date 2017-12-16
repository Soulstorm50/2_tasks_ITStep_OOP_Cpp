#include "soulstime.h"

SoulsTime::SoulsTime()
{
    time_t t = time(0);
    struct tm * now = localtime( & t );

    _hours = now->tm_hour;
    _minutes = now->tm_min;
    _seconds = now->tm_sec;

}

SoulsTime::SoulsTime(unsigned int hours, unsigned int min, unsigned int sec)
{
    _hours = hours;
    _minutes = min;
    _seconds = sec;
}
