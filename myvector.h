#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>
#include <time.h>

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
    bool IsEmpty() const;
    void Print();
    void PopFront();
    void PopBack();
    int IndexOf(int value) const;
    int LastIndexOf(int value) const;
    void Reverse();
    void TrimToSize();
    void RemoveAt(int index);
    void Remove(int value);
    bool Equals(const MyVector& vector) const;
    int GetElementAt(int index) const;
    void Insert(int value, int index);
    void SortAsc();
    void SortDesc();
    void Shuffle();

//    RandomFill (заполнение массива случайными значениями)
//    Clone (метод создаёт точную копию вектора).
//    конструктор копирования
//    перегрузка операции =
//    перегрузка операции [ ]
//    перегрузка операции ==
//    перегрузка >> и <<


private:

    void EnsureCapacity(int value);
    void quickSortAsc(int arr[], int left, int right);
    void swap(int first, int second);

    int _size;
    int _capacity;
    int* _data;

};

#endif // MYVECTOR_H
