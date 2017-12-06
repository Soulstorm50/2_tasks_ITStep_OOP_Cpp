#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;


    Fraction fraction(29, 30);

    Fraction fraction2(44, 45);

    fraction.add(fraction2);

    fraction.show();


    return 0;
}
