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

    stack.PushUnique(10);
    cout << stack.Peek() << endl;
    stack.PushUnique(20);
    cout << stack.Peek() << endl;
    stack.PushUnique(10);
    cout << stack.Peek() << endl;
    return 0;
}
