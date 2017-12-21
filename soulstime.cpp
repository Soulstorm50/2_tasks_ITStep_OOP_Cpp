#include "soulstime.h"

SoulsTime::SoulsTime()
{
    time_t t = time(0);
    struct tm * now = localtime( & t );

    _hours = now->tm_hour;
    _minutes = now->tm_min;
    _seconds = now->tm_sec;

}

SoulsTime::SoulsTime(unsigned int hours = 0
                     , unsigned int min = 0
                     , unsigned int sec = 0) : _hours(hours)
                                             , _minutes(min)
                                             , _seconds(sec)
{
}

void SoulsTime::operator -(unsigned int sec)
{
    int hour = sec / (60 * 60);
    int min = (sec - (hour*60*60)) / 60;
    int seconds = sec - (min*60) - (hour*60*60);

    _hours -= hour;

    if(min > _minutes)
    {
        _hours -= 1;
        _minutes -= min;
        _minutes += 60;
    }
    else
    {
        _minutes -= min;
    }

    if(seconds > _seconds)
    {
        _minutes -= 1;
        _seconds -= seconds;
        _seconds += 60;
    }
    else
    {
        _seconds -= seconds;
    }

    if(_hours < 0)
    {
        _hours += 24;
    }

    _hours = _hours%24;
    _minutes = _minutes%60;
    _seconds = _seconds%60;

}

void SoulsTime::operator +(unsigned int sec)
{
    int hour = sec / (60 * 60);
    int min = (sec - (hour*60*60)) / 60;
    int seconds = sec - (min*60) - (hour*60*60);

    _hours += hour;

    if(min > _minutes)
    {
        _hours += 1;
        _minutes += min;
        _minutes -= 60;
    }
    else
    {
        _minutes += min;
    }

    if(seconds > _seconds)
    {
        _minutes += 1;
        _seconds += seconds;
        _seconds -= 60;
    }
    else
    {
        _seconds += seconds;
    }

    _hours = _hours%24;
    _minutes = _minutes%60;
    _seconds = _seconds%60;
}

void SoulsTime::operator ++(int)
{
    _seconds++;

    if(_seconds >= 60)
    {
        _seconds = _seconds%60;
        _minutes++;

        if(_minutes >= 60)
        {
            _minutes = _minutes%60;
            _hours++;
            _hours = _hours%24;
        }
    }
}

void SoulsTime::operator --(int)
{
    _seconds--;

    if(_seconds < 0)
    {
        _seconds += 60;
        _minutes--;

        if(_minutes < 0)
        {

            _minutes += 60;
            _hours--;
            _hours += 24;
        }
    }
}

bool SoulsTime::operator ==(const SoulsTime& time)
{
    bool result = false;

    if(_hours == time.getHours()
            && _minutes == time.getMinutes()
            && _seconds == time.getSeconds() )
    {
        result = true;
    }

    return result;
}

bool SoulsTime::operator !=(const SoulsTime &time)
{
    bool result = false;

    if(_hours != time.getHours()
            && _minutes != time.getMinutes()
            && _seconds != time.getSeconds() )
    {
        result = true;
    }

    return result;
}

SoulsTime::operator double()
{
    int result = getSeconds() + (getMinutes() * 60) + (getHours() * 3600);

    return result;
}

SoulsTime::operator int()
{
    return getSeconds() + (getMinutes() * 60) + (getHours() * 3600);
}

char* SoulsTime::timeOfDay() const
{
    char* hours = new char[2];
    char* mins = new char[2];
    char* sec = new char[2];

    itoa(_hours, hours, 10);
    itoa(_minutes, mins, 10);
    itoa(_seconds, sec, 10);

    char* result = new char[9];

    result[0] = hours[0];
    result[1] = hours[1];
    if(result[1] == '\0')
    {
        result[1] = result[0];
        result[0] = '0';
    }
    result[2] = ':';
    result[3] = mins[0];
    result[4] = mins[1];
    if(result[4] == '\0')
    {
        result[4] = result[3];
        result[3] = '0';
    }
    result[5] = ':';
    result[6] = sec[0];
    result[7] = sec[1];
    if(result[7] == '\0')
    {
        result[7] = result[6];
        result[6] = '0';
    }
    result[8] = '\0';

    delete[] hours;
    delete[] mins;
    delete[] sec;

    return result;

}

void SoulsTime::printTime()
{
    printf("%s", timeOfDay());
}

int SoulsTime::getHours() const
{
    return _hours;
}

int SoulsTime::getMinutes() const
{
    return _minutes;
}

int SoulsTime::getSeconds() const
{
    return _seconds;
}

void SoulsTime::setTime(unsigned int hours = 0
                        , unsigned int min = 0
                        , unsigned int sec = 0)
{
    _hours = hours;
    _minutes = min;
    _seconds = sec;
}
