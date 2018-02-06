#ifndef MYSTACK_H
#define MYSTACK_H

#include "singlylinkedlist.h"

class MyStack
{
public:
    MyStack();


    void Clear();
    bool IsEmpty();
    bool IsFull();
    int GetCount();
    void Push(int number);
    int Pop();
    int Peek();
    bool Contains(int value);
    void PushLessValue(int value);
    void PushUnique(int value);

private:
    enum {
             SIZE = 10
           , EMPTY = 0
         };
    SinglyLinkedList _data;
    int _top;

};

#endif // MYSTACK_H
