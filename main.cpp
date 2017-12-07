#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;


    Fraction fraction(10, 90);

    Fraction fraction2(1, 9);

    cout << fraction.compare(fraction2) << endl;


    return 0;
}
