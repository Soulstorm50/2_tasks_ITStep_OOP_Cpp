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

    for(int i = 0; i < 5; i++)
    {
        ar.PushBack(i);
    }

    ar.Print();
    cout << "Cap: " << ar.getCapacity() << endl;

    ar.TrimToSize();

    ar.Print();
    cout << "Cap: " << ar.getCapacity() << endl;











    return 0;
}
