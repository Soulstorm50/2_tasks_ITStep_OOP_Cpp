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

    stack.Push(1);
    cout << stack.Peek() << endl;
    stack.Push(2);
    cout << stack.Peek() << endl;
    stack.Push(3);
    cout << stack.Peek() << endl;
    stack.Push(4);
    cout << stack.Peek() << endl;

    return 0;
}
