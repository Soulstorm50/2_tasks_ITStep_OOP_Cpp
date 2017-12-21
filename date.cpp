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

    char* result = (char*)"";

    switch (dayNumbFromDate % 7)
    {
    case 0 : result = (char*)"Wednesday";
        break;

    case 1 : result = (char*)"Thursday";
        break;

    case 2 : result = (char*)"Friday";
        break;

    case 3 : result = (char*)"Saturday";
        break;

    case 4 : result = (char*)"Sunday";
        break;

    case 5 : result = (char*)"Monday";
        break;

    case 6 : result = (char*)"Tuesday";
        break;
    }

    return result;
}

void Date::PrintDate()
{
    printf("%u-%u-%u", _day, _month, _year);
}

int Date::operator-(const Date& date)
{
    return getTotalDays() - date.getTotalDays();
}

void Date::operator+(unsigned int days)
{
    struct std::tm date = {0, 0, 0, (int)_day, (int)_month - 1, (int)_year - 1900};

    const std::time_t ONE_DAY = 24 * 60 * 60 ;

    std::time_t date_seconds = std::mktime(&date) + ((int)days * ONE_DAY) ;

    date = *localtime(&date_seconds);

    _day = date.tm_mday;
    _month = date.tm_mon + 1;
    _year = date.tm_year + 1900;
}

void Date::operator++(int)
{
    struct std::tm date = {0, 0, 0, (int)_day, (int)_month - 1, (int)_year - 1900};

    const std::time_t ONE_DAY = 24 * 60 * 60 ;

    std::time_t date_seconds = std::mktime(&date) + ONE_DAY ;

    date = *localtime(&date_seconds);

    _day = date.tm_mday;
    _month = date.tm_mon + 1;
    _year = date.tm_year + 1900;
}

void Date::operator --(int)
{
    struct std::tm date = {0, 0, 0, (int)_day, (int)_month - 1, (int)_year - 1900};

    const std::time_t ONE_DAY = 24 * 60 * 60 ;

    std::time_t date_seconds = std::mktime(&date) - ONE_DAY ;

    date = *localtime(&date_seconds);

    _day = date.tm_mday;
    _month = date.tm_mon + 1;
    _year = date.tm_year + 1900;
}

bool Date::operator >(const Date& date)
{
    bool result = false;

    if(getTotalDays() > date.getTotalDays())
    {
        result = true;
    }

    return result;
}

bool Date::operator <(const Date &date)
{
    bool result = false;

    if(getTotalDays() < date.getTotalDays())
    {
        result = true;
    }

    return result;
}

bool Date::operator ==(const Date& date)
{
    bool result = false;

    if(getTotalDays() == date.getTotalDays())
    {
        result = true;
    }

    return result;
}

bool Date::operator !=(const Date& date)
{
    bool result = false;

    if(getTotalDays() != date.getTotalDays())
    {
        result = true;
    }

    return result;
}

Date::operator double()
{
    return (double)getTotalDays();
}

Date::operator int()
{
    return getTotalDays();
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

    struct std::tm date = {0, 0, 0, (int)_day, (int)_month - 1, (int)_year - 1900};
    std::time_t sec = std::mktime(&date);

    if( sec != (std::time_t)(-1))
    {
        result = sec / (60 * 60 * 24);
    }

    return result;

}




