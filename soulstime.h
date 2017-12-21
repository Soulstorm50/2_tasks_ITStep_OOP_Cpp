#ifndef SOULSTIME_H
#define SOULSTIME_H

#include <ctime>
#include <iostream>

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

    operator int();
    operator double();

    friend std::istream& operator >>(std::istream& is, SoulsTime& time)
    {
        char* input = new char[9];

        char* hours = new char[3];
        char* min = new char[3];
        char* sec = new char[3];

        int hh;
        int mm;
        int ss;

        is >> input;

        hours[0] = input[0];
        hours[1] = input[1];
        hours[2] = '\0';

        min[0] = input[3];
        min[1] = input[4];
        min[2] = '\0';

        sec[0] = input[6];
        sec[1] = input[7];
        sec[4] = '\0';

        hh = atoi(hours);
        mm = atoi(min);
        ss = atoi(sec);

        time.setTime(hh, mm, ss);

        is.clear();
        delete[] input;
        delete[] hours;
        delete[] min;
        delete[] sec;

        return is;

    }
    friend std::ostream& operator <<(std::ostream& out, SoulsTime const& time)
    {
        return out << time.getHours() << ":"
                   << time.getMinutes() << ":"
                   << time.getSeconds();
    }

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
