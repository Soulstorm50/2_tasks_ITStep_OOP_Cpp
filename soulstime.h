#ifndef SOULSTIME_H
#define SOULSTIME_H

#include <ctime>
#include <iostream>

class SoulsTime
{
public:
    SoulsTime();
    SoulsTime(unsigned int hours, unsigned int min, unsigned int sec);

    //константный метод char *TimeOfDay() const;
    //конструктор по умолчанию Time() (текущее время);
    //конструктор с параметрами Time(int sec, int min, int hour);
    //необходимые сеттеры и геттеры для полей;
    //метод изменения времени на заданное количество секунд (перегруженный бинарный оператор «+»);
    //метод вывода времени на экран void PrintTime();
    //перегруженные операции «++», «--», «>», «<», «==», «!=».


private:

    unsigned int _seconds;
    unsigned int _minutes;
    unsigned int _hours;

};

#endif // SOULSTIME_H
