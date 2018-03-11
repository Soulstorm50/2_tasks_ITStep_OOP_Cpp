#ifndef MYPRIORITYINARRAYQUEUE_H
#define MYPRIORITYINARRAYQUEUE_H

#include <iostream>


class MyPriorityInArrayQueue
{
public:
    MyPriorityInArrayQueue(int size);
    ~MyPriorityInArrayQueue();

    void Clear();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(int number);
    int Dequeue();
    void Show();

private:

    void Shift(int pos);

    int* _ar;
    int _maxCount;
    int _count;

};

#endif // MYPRIORITYINARRAYQUEUE_H
