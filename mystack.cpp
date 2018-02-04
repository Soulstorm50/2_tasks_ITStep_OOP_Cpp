#include "mystack.h"

MyStack::MyStack(): _top(EMPTY)
{

}

void MyStack::Clear()
{
    _top = EMPTY;
}

bool MyStack::IsEmpty()
{
    return _top == EMPTY;
}

bool MyStack::IsFull()
{
    return _top == SIZE;
}

int MyStack::GetCount()
{
    return _top;
}

void MyStack::Push(int number)
{
    if (!IsFull())
    {
        _data.AddTail(number);
        _top++;
    }

    else throw "Stack overflow!";
}

int MyStack::Pop()
{
    if (!IsEmpty())
    {
        return _data[--_top];
    }

    else throw "Stack is empty!";
}

int MyStack::Peek()
{
    if (!IsEmpty())
    {
        return _data[_top - 1];
    }

    else throw "Stack is empty!";
}

bool MyStack::Contains(int value)
{
    return _data.Contains(value);
}
