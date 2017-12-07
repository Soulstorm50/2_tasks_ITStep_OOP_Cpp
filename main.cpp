#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;


    Fraction fraction(5, 9);

    Fraction fraction2(2, 1);

    fraction.divide(fraction2);

    fraction.show();


    return 0;
}
