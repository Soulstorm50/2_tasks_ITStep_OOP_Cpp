#ifndef DATE_H
#define DATE_H

#include <ctime>
#include <iostream>

//5.5 Добавить в класс Date и Time перегрузки: перегруженные операции >>, << и ( )

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
        char input[11];
        is >> input;
        scanf(input, "%04d-%02d-%02d", date.getYear(), date.getMonth(), date.getDay());

        is.clear();
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
