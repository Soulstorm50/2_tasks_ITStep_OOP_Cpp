#include "fraction.h"

Fraction::Fraction() : _numerator(1), _denominator(1)
{
    
}

Fraction::Fraction(double decimal)
{
    //TODO: possible data lost!!! Need test
    _denominator = 100000;
    _numerator = decimal * _denominator;
    reduction();
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
    if(_numerator / _denominator == 0)
    {
        std::cout << _numerator << '/' << _denominator << std::endl;
    }
    else
    {
        std::cout << _numerator / _denominator << ' ';

        if(_numerator - (_denominator * (_numerator / _denominator)) != 0)
        {
            std::cout << _numerator - (_denominator * (_numerator / _denominator))
            << '/' << _denominator;
        }
        std::cout << std::endl;
    }

}

double Fraction::getDecimal() const
{
    //TODO: need to try static_cast etc
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

bool Fraction::compare(Fraction fraction) const
{
    bool result = false;

    int commonDenomirator = findCommonDenominator(_denominator
                                                  , fraction.getDenominator());
    int firstFractionNumerator = _numerator * (commonDenomirator / _denominator);
    int secondFractionNumerator = fraction.getNumerator()
                        * (commonDenomirator / fraction.getDenominator());
    if(firstFractionNumerator == secondFractionNumerator)
    {
        result = true;
    }

    return result;
}

void Fraction::add(Fraction fraction)
{
    int commonDenomirator = findCommonDenominator(_denominator
                                                  , fraction.getDenominator()
                                                  );
    int secondNumerator = fraction.getNumerator()
                        * (commonDenomirator / fraction.getDenominator());
    _numerator *= (commonDenomirator / _denominator);
    _numerator += secondNumerator;
    _denominator = commonDenomirator;
    reduction();
}

void Fraction::deduct(Fraction fraction)
{
    int commonDenomirator = findCommonDenominator(_denominator
                                                  , fraction.getDenominator());
    int secondNumerator = fraction.getNumerator()
                        * (commonDenomirator / fraction.getDenominator());
    _numerator *= (commonDenomirator / _denominator);
    _numerator -= secondNumerator;
    _denominator = commonDenomirator;
    reduction();
}

void Fraction::multiply(Fraction fraction)
{
    _numerator *= fraction.getNumerator();
    _denominator *= fraction.getDenominator();
    reduction();
}

void Fraction::divide(Fraction fraction)
{
    _numerator *= fraction.getDenominator();
    _denominator *= fraction.getNumerator();
    reduction();
}

int Fraction::findCommonDenominator(int a, int b) const
{
    int result = 0;

    if(a % b == 0)
    {
        result = a;
    }
    else if(b % a == 0)
    {
        result = b;
    }
    else
    {
        result = a * b;
    }

    return result;
}
