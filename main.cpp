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
    ar.PushBack(12);
    ar.PushBack(18);
    ar.PushBack(16);
    ar.Print();
    ar.PushFront(14);
    ar.Print();
    ar.Clear();
    ar.Print();

    ar.PushBack(12);
    ar.PushBack(18);
    ar.PushBack(16);

    cout << ar.getCapacity() << endl;


    ar.setCapacity(100);

    ar.Print();
    cout << ar.getCapacity() << endl;




    return 0;
}
