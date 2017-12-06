#include "fraction.h"

Fraction::Fraction() : _numerator(1), _denominator(1)
{
    
}

Fraction::Fraction(double decimal)
{
    //TODO:передаётся десятичная дробь
}

Fraction::Fraction(int numerator, int denominator): _numerator(numerator)
                                                  , _denominator(denominator)
{
    if(denominator == 0)
    {
        _numerator = 0;
    }
}

int Fraction::getNumerator() const
{
    return _numerator;
}

void Fraction::setNumerator(int numerator)
{
    _numerator = numerator;
}

int Fraction::getDenominator() const
{
    return _denominator;
}

void Fraction::setDenominator(int denominator)
{
    if(denominator != 0)
    {
        _denominator = denominator;
    }
}

void Fraction::show()
{
    std::cout << _numerator << '/' << _denominator << std::endl;

}

double Fraction::getDecimal()
{
    //TODO: возврат значения типа double на основании значений числителя и знаменателя дроби
    return ((double)_numerator) / ((double)_denominator);
}

void Fraction::reduction()
{
    if(_denominator % _numerator == 0)
    {
        _denominator /= _numerator;
        _numerator = 1;
    }
    else
    {
        for(int i = _numerator; i > 1; i--)
        {
            if((_denominator % i == 0) && (_numerator % i == 0))
            {
                _denominator /= i;
                _numerator /= i;
            }
        }
    }
}

bool Fraction::compare(Fraction fraction)
{
    bool result = false;
    //TODO: сравнение дробей

    return result;
}

void Fraction::add(Fraction fraction)
{
    //TODO: сложение
}

void Fraction::deduct(Fraction fraction)
{
    //TODO: вычитание
}

void Fraction::multiply(Fraction fraction)
{
    //TODO: умножение
}

void Fraction::divide(Fraction fraction)
{
    //TODO: деление
}
