#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>

class MyVector
{

public:

    MyVector();
    MyVector(int capacity);

    ~MyVector();

    int getSize() const;
    int getCapacity() const;

    void setCapacity(int capacity);


    void PushBack(int value);
    void PushFront(int value);
    void Clear();
    bool IsEmpty();
    void Print();

private:

    void EnsureCapacity(int value);

    int _size;
    int _capacity;
    int* _data;

};

#endif // MYVECTOR_H
