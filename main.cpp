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

    for(int i = 0; i < 10; i++)
    {
        ar.PushBack(i);
    }
    ar.PushBack(7);
    ar.PushFront(7);

    ar.Print();

    ar.Remove(7);

    ar.Print();











    return 0;
}
