#include <iostream>
#include "student.h"
#include "group.h"
#include "mystring.h"

#include "soulstime.h"
#include "date.h"
#include "myvector.h"

#include "string"
#include "singlylinkedlist.h"

using namespace std;

int main()
{

    // test for class SinglyLinkedList

    SinglyLinkedList list;

    for(int i = 0; i < 10; i++)
    {
        list.AddTail(i);
    }

    list.Print();

    int* tempArr = list.ToArray();

    for(int i=0; i<10; i++)
    {
    cout << tempArr[i] << endl;
    }

    return 0;
}
