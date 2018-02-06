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

//Пусть имеется арифметическое выражение, поддерживающее 4 вида скобок:
//(), [], {}, <>. Задача - проверить правильность расположения скобок в выражении
//Примеры:

//{(5-[3+<9>])-4} - правильное выражение {(>5-<[3+)9]-4} - неправильное выражение

//Задачу легко решить с помощью стека. Алгоритм следующий:
//необходимо выполнить проход по выражению слева направо. Если встречается
//открывающая скобка, то её нужно поместить в стек. Если встречается
//закрывающая скобка, то достаём элемент из стека, и поверяем форму скобки.
//Если формы разные или стек пуст, то это значит, что выражение неверное.
//Если к концу работы программы стек оказался не пуст, то это также означает,
//что выражение составлено неверно.

void checkForCorrection(const MyString& expression)
{
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

    // test for class MyStack

    MyString correctExpr("{(5-[3+<9>])-4}");
    MyString incorrectExpr("{(>5-<[3+)9]-4}");

    checkForCorrection(correctExpr);
    checkForCorrection(incorrectExpr);

    return 0;
}
