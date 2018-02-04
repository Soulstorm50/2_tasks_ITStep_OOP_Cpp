#include <iostream>
#include "student.h"
#include "group.h"
#include "mystring.h"

#include "soulstime.h"
#include "date.h"
#include "myvector.h"

#include "string"
#include "singlylinkedlist.h"
#include "mystack.h"

using namespace std;

int main()
{

    // test for class MyStack
    MyStack stack;

    cout << stack.GetCount() << endl;
    cout << stack.IsEmpty() << endl;
    cout << stack.IsFull() << endl;
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    stack.Push(4);
    stack.Push(5);
    stack.Push(6);
    stack.Push(7);
    stack.Push(8);
    stack.Push(9);
    cout << stack.GetCount() << endl;
    cout << stack.IsEmpty() << endl;
    cout << stack.IsFull() << endl;
    cout << stack.Pop() << endl;
    stack.Push(10);
    stack.Push(11);
    cout << stack.GetCount() << endl;
    cout << stack.IsEmpty() << endl;
    cout << stack.IsFull() << endl;

    stack.Push(11);

    return 0;
}
