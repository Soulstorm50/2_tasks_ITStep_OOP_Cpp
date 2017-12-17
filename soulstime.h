#ifndef SOULSTIME_H
#define SOULSTIME_H

#include <ctime>
#include <iostream>

//5.5 Добавить в класс Date и Time перегрузки: перегруженные операции >>, << и ( )

class SoulsTime
{
public:
    SoulsTime();
    SoulsTime(unsigned int hours, unsigned int min, unsigned int sec);

    void operator -(unsigned int sec);
    void operator +(unsigned int sec);
    void operator ++(int);
    void operator --(int);
    void operator >(const SoulsTime& time);
    void operator <(const SoulsTime& time);
    bool operator ==(const SoulsTime& time);
    bool operator !=(const SoulsTime& time);

    char* timeOfDay() const;
    void printTime();

    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

    void setTime(unsigned int hours, unsigned int min, unsigned int sec);

private:

    int _seconds;
    int _minutes;
    int _hours;

};

#endif // SOULSTIME_H
