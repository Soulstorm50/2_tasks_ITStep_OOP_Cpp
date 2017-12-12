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
    //TODO:метод изменения даты на заданное количество дней (перегруженный бинарный оператор «+»);
    void PrintDate(); //TODO:метод вывода даты на экран
    //TODO:перегруженные операции «++», «--», «>», «<», «==», «!=».
    int operator-(const Date& date);


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
