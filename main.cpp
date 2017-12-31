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

    list.AddTail(1);
    list.AddTail(7);
    list.AddTail(1);
    list.AddTail(2);
    list.AddTail(7);
    list.AddTail(2);

    list.Print();

    cout << list.LastIndexOf(7) << endl;














    return 0;
}
