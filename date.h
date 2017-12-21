#ifndef DATE_H
#define DATE_H

#include <ctime>
#include <iostream>

class Date
{
public:
    Date();
    Date(unsigned int day, unsigned int month, unsigned int year);

    char* DayOfWeek() const;
    void PrintDate();

    int operator -(const Date& date);
    void operator +(unsigned int days);
    void operator ++(int);
    void operator --(int);
    bool operator >(const Date& date);
    bool operator <(const Date& date);
    bool operator ==(const Date& date);
    bool operator !=(const Date& date);

    operator int();
    operator double();

    friend std::istream& operator >>(std::istream& is, Date& date)
    {
        char* input = new char[11];

        char* year = new char[5];
        char* month = new char[3];
        char* day = new char[3];

        int dd;
        int mm;
        int yyyy;

        is >> input;

        day[0] = input[0];
        day[1] = input[1];
        day[2] = '\0';

        month[0] = input[3];
        month[1] = input[4];
        month[2] = '\0';

        year[0] = input[6];
        year[1] = input[7];
        year[2] = input[8];
        year[3] = input[9];
        year[4] = '\0';

        dd = atoi(day);
        mm = atoi(month);
        yyyy = atoi(year);

        date.setDate(dd, mm, yyyy);

        is.clear();
        delete[] input;
        delete[] year;
        delete[] month;
        delete[] day;

        return is;

    }
    friend std::ostream& operator <<(std::ostream& out, Date const& date)
    {
       return out << date.getDay() << "-" << date.getMonth() << "-" << date.getYear();
    }

    unsigned int getDay() const;
    unsigned int getMonth() const;
    unsigned int getYear() const;
    int getTotalDays() const;

    void setDate(unsigned int day, unsigned int month, unsigned int year);

private:

    unsigned int _day;
    unsigned int _month;
    unsigned int _year;
};

#endif // DATE_H
