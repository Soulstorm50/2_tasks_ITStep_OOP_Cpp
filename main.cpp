#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;


    Fraction fraction(3, 10);

    Fraction fraction2(1, 6);

    fraction.deduct(fraction2);

    fraction.show();


    return 0;
}
