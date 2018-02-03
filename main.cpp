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

    bool one = list < list2;
    bool two = list > list2;
    bool three = list <= list2;
    bool four = list >= list2;
    bool five = list == list2;
    bool six = list != list2;

    cout << one << endl <<
            two << endl <<
            three << endl <<
            four << endl <<
            five << endl <<
            six << endl;


    return 0;
}
