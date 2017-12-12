#include "date.h"

Date::Date()
{
    time_t t = time(0);
    struct tm * now = localtime( & t );

    _year = now->tm_year + 1900;
    _month = now->tm_mon + 1;
    _day = now->tm_mday;
}

Date::Date(  unsigned int day
           , unsigned int month
           , unsigned int year ) : _day(day)
                                 , _month(month)
                                 , _year(year)
{

}

char* Date::DayOfWeek() const
{
    unsigned int month = (_month + 9) % 12;
    unsigned int year = _year - month / 10;
    unsigned long dayNumbFromDate = 365*year + year/4 - year/100 + year/400
                                   + (month*306 + 5)/10 + (_day - 1);

    char* result = "";

    switch (dayNumbFromDate % 7)
    {
    case 0 : result = "Wednesday";
        break;

    case 1 : result = "Thursday";
        break;

    case 2 : result = "Friday";
        break;

    case 3 : result = "Saturday";
        break;

    case 4 : result = "Sunday";
        break;

    case 5 : result = "Monday";
        break;

    case 6 : result = "Tuesday";
        break;
    }

    return result;
}

void Date::PrintDate()
{
    printf("%u-%u-%u", _year, _month, _day);
}

int Date::operator-(const Date& date)
{
    return getTotalDays() - date.getTotalDays();
}

unsigned int Date::getDay() const
{
    return _day;
}

unsigned int Date::getMonth() const
{
    return _month;
}

unsigned int Date::getYear() const
{
    return _year;
}

void Date::setDate(unsigned int day, unsigned int month, unsigned int year)
{
    _day = day;
    _month = month;
    _year = year;
}

int Date::getTotalDays() const
{
    int result = 0;

    struct std::tm date = {0, 0, 0, _day, _month - 1, _year - 1900};
    std::time_t sec = std::mktime(&date);

    if( sec != (std::time_t)(-1))
    {
        result = sec / (60 * 60 * 24);
    }

    return result;

}




