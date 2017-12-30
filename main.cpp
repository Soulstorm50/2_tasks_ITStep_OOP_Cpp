#include <iostream>
#include "student.h"
#include "group.h"
#include "mystring.h"

#include "soulstime.h"
#include "date.h"
#include "myvector.h"

#include "string"

using namespace std;

int main()
{

    // тесты работы с вектором:
    MyVector ar;

    for(int i = 0; i < 11; i++)
    {
        ar.PushBack(i);
    }

    ar.Print();

    MyVector ar2(ar);
    ar2.Shuffle();

    cout << (ar == ar2) << endl;






    return 0;
}
