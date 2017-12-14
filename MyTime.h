#ifndef MYTIME_H
#define MYTIME_H

#include <ctime>
#include <iostream>

class MyTime
{

public:
    MyTime();
    MyTime(unsigned int sec, unsigned int min, unsigned int hour);


    //константный метод char *TimeOfDay() const;
    //конструктор по умолчанию Time() (текущее время);
    //конструктор с параметрами Time(int day, int month, int year);
    //необходимые сеттеры и геттеры для полей;
    //метод изменения времени на заданное количество секунд (перегруженный бинарный оператор «+»);
    //метод вывода времени на экран void PrintTime();
    //перегруженные операции «++», «--», «>», «<», «==», «!=».


private:

    unsigned int _seconds;
    unsigned int _minutes;
    unsigned int _hours;

};

#endif // MYTIME_H
