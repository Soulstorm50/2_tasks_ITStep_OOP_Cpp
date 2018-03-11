#include "mypriorityinarrayqueue.h"

MyPriorityInArrayQueue::MyPriorityInArrayQueue(int size): _maxCount(size)
                                                        , _count(0)
{
    _ar = new int[_maxCount];
}

MyPriorityInArrayQueue::~MyPriorityInArrayQueue()
{
    delete[] _ar;
}

void MyPriorityInArrayQueue::Clear()
{
    _count = 0;
}

bool MyPriorityInArrayQueue::IsEmpty()
{
    return _count == 0;
}

bool MyPriorityInArrayQueue::IsFull()
{
    return _count == _maxCount;
}

void MyPriorityInArrayQueue::Enqueue(int number)
{
    if(IsEmpty())
    {
        _ar[0] = number;
        _count++;
    }
    else if(!IsFull())
    {
        for(int i = 0; i < _count; i++)
        {
            if(number >= _ar[i])
            {
                Shift(i);
                _ar[i] = number;
                _count++;
                break;
            }
        }
    }
}

int MyPriorityInArrayQueue::Dequeue()
{
    int result = -1;

    if (!IsEmpty())
    {
        int first = _ar[0];
        for (int i = 1; i < _count; i++)
        {
            _ar[i - 1] = _ar[i];
        }
        _count--;
        result = first;
    }

    return result;
}

void MyPriorityInArrayQueue::Show()
{
    std::cout << "-----------------------------------------------------\n";
    for (int i = 0; i < _count; i++)
    {
        std::cout << _ar[i] << "  ";
    }
    std::cout << "\n";
    std::cout << "-----------------------------------------------------\n";
}

void MyPriorityInArrayQueue::Shift(int pos)
{
    if (!IsEmpty())
    {
        for(int i = _count; i > pos; i--)
        {
            _ar[i] = _ar[i - 1];
        }
    }
}
