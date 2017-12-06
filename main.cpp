#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;


    Fraction *fraction = new Fraction(1, 10);

    fraction->show();

    cout << fraction->getDecimal() << endl;

    return 0;
}
