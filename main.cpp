#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;


    Fraction fraction(24, 35);

    Fraction fraction2(25, 36);

    fraction.multiply(fraction2);

    fraction.show();


    return 0;
}
