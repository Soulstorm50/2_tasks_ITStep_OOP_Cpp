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


//    Insert (вставка одного элемента в массив по указанному индексу, с проверкой на выход за пределы массива)
//    SortAsc (быстрая сортировка значений элементов массива по возрастанию)
//    SortDesc (быстрая сортировка значений элементов массива по убыванию)
//    Shuffle (случайное перемешивание элементов массива)
//    RandomFill (заполнение массива случайными значениями)
//    Clone (метод создаёт точную копию вектора).
//    конструктор копирования
//    перегрузка операции =
//    перегрузка операции [ ]
//    перегрузка операции ==
//    перегрузка >> и <<


private:

    void EnsureCapacity(int value);

    int _size;
    int _capacity;
    int* _data;

};

#endif // MYVECTOR_H
