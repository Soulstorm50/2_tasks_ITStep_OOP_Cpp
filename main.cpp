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

    SinglyLinkedList list2;

    for(int i = 0; i < 5; i++)
    {
        list2.AddTail(i);
    }

    list2.Print();

    list2 + list;

    list2.Print();


    return 0;
}
