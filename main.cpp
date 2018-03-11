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

#include "mypriorityinarrayqueue.h"

using namespace std;

void checkForCorrection(const MyString& expression)
{
    //Task 8.1
    MyStack stack;

    for(int i = 0; i < expression.sizeOf(); i++)
    {
            switch (expression[i])
            {
            case '(': stack.Push(1);
                break;

            case '{': stack.Push(2);
                break;

            case '[': stack.Push(3);
                break;

            case '<': stack.Push(4);
                break;

            case ')': if(stack.Contains(1)) stack.Pop();
                break;

            case '}': if(stack.Contains(2)) stack.Pop();
                break;

            case ']': if(stack.Contains(3)) stack.Pop();
                break;

            case '>': if(stack.Contains(4)) stack.Pop();
                break;

            default:
                break;
            }
    }

    if(stack.IsEmpty())
    {
        std::cout << "Correct expression!" << std::endl;
    }
    else
    {
        std::cout << "Incorrect expression!" << std::endl;
    }
}

int main()
{

    // test for class MyPriorityInArrayQueue


    MyPriorityInArrayQueue q(25);

    for (int i = 0; i < 10; i++)
        q.Enqueue(i);

    q.Show();

    q.Enqueue(3);
    q.Enqueue(99);

    q.Show();



    return 0;
}
