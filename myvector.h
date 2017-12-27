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
    void PopFront();
    void PopBack();
    int IndexOf(int value);
    int LastIndexOf(int value);
    void Reverse();
    void TrimToSize();
    void RemoveAt(int index);
    void Remove(int value);

//    Insert (вставка одного элемента в массив по указанному индексу, с проверкой на выход за пределы массива)
//    SortAsc (быстрая сортировка значений элементов массива по возрастанию)
//    SortDesc (быстрая сортировка значений элементов массива по убыванию)
//    Shuffle (случайное перемешивание элементов массива)
//    RandomFill (заполнение массива случайными значениями)
//    Equals (в качестве параметра передаётся указатель на другой вектор. Метод сравнивает массивы не только по количеству элементов, но и по их содержимому)
//    GetElementAt (возврат копии элемента массива по указанному индексу, с проверкой на выход за пределы массива)
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
