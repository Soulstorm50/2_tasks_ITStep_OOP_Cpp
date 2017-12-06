#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;


    Fraction *fraction = new Fraction(50, 100);

    fraction->show();

    cout << fraction->getDecimal() << endl;

    fraction->reduction();

    fraction->show();

    return 0;
}
