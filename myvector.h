#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>
#include <time.h>

class MyVector
{

public:

    MyVector();
    explicit MyVector(int capacity);
    explicit MyVector(const MyVector& vector);

    ~MyVector();

    MyVector& operator =(const MyVector& vector);
    const int& operator [](int index) const;
    bool operator ==(const MyVector& vector);
    friend std::ostream& operator <<(std::ostream& out, MyVector const& vector)
    {
        for(int i = 0; i < vector.getSize(); i++)
        {
            out << vector.GetElementAt(i) << " ";
        }
        return out;
    }
    friend std::istream& operator >>(std::istream& is, MyVector& vector)
    {
        char* input = new char[256];

        is >> input;

        vector.PushBack(atoi(input));
        delete[] input;

        return is;

    }

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
    void RandomFill(int range = 0);
    void Clone(const MyVector& vector);

private:

    void EnsureCapacity(int value);
    void quickSortAsc(int arr[], int left, int right);
    void swap(int first, int second);

    int _size;
    int _capacity;
    int* _data;

};

#endif // MYVECTOR_H
