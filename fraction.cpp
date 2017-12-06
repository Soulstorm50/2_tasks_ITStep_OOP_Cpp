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
