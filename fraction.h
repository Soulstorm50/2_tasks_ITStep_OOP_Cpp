#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction
{
public:
    Fraction();
    Fraction(double decimal);
    Fraction(int numerator, int denominator);

    int getNumerator() const;
    void setNumerator(int numerator);

    int getDenominator() const;
    void setDenominator(int denominator);

    void show();

    double getDecimal() const;
    void reduction();
    bool compare(Fraction fraction) const;

    void add(Fraction fraction);
    void deduct(Fraction fraction);
    void multiply(Fraction fraction);
    void divide(Fraction fraction);

private:

    int findCommonDenominator(int a, int b) const;

    int _numerator;
    int _denominator;
};

#endif // FRACTION_H
