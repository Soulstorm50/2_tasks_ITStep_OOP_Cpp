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
    MyVector ar2;

    for(int i = 0; i < 10; i++)
    {
        ar.PushBack(i);
    }

    for(int i = 0; i < 10; i++)
    {
        ar2.PushBack(i);
    }


    cout << ar.Equals(ar2) << endl;











    return 0;
}
