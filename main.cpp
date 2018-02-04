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

    cout << stack.Contains(1) << endl;
    stack.Push(1);
    cout << stack.Contains(1) << endl;
    return 0;
}
