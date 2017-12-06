#ifndef FRACTION_H
#define FRACTION_H


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

private:

    int _numerator;
    int _denominator;
};

#endif // FRACTION_H
