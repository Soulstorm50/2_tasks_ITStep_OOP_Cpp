#include "myvector.h"

MyVector::MyVector() : MyVector(10)
{

}

MyVector::MyVector(int capacity) : _size(0)
{
    if (capacity < 10)
    {
        this->_capacity = 10;
    }
    else
    {
        this->_capacity = capacity;
    }
    _data = new int[_capacity];
}

MyVector::~MyVector()
{
    delete[] _data;
}

void MyVector::PushBack(int value)
{
    EnsureCapacity(_size + 1);

    _data[_size++] = value;
}

void MyVector::PushFront(int value)
{
    EnsureCapacity(_size + 1);
    for (int i = _size; i > 0; i--)
    {
        _data[i] = _data[i - 1];
    }
    _data[0] = value;
    _size++;
}

void MyVector::Clear()
{
    for(int i = 0; i < _size; i++)
    {
        _data[i] = 0;
    }
    _size = 0;
}

bool MyVector::IsEmpty()
{
    return _size == 0;
}

void MyVector::Print()
{
    if (IsEmpty())
    {
        std::cout << "Collection is empty.\n";
    }
    else
    {
        for (int i = 0; i < _size; i++)
        {
            std::cout << _data[i] << " ";
        }
        std::cout << std::endl;
    }
}

void MyVector::PopFront()
{
    for(int i = 0; i < _size; i++)
    {
        _data[i] = _data[i + 1];
    }
    _size--;
}

void MyVector::PopBack()
{
    _size--;
}

void MyVector::EnsureCapacity(int value)
{
    if(value > _capacity)
    {
        _capacity = ((_capacity * 3) / 2) + 1;
        int* tempData = new int[_capacity];
        for(int i = 0; i < _size; i++)
        {
            tempData[i] = _data[i];
        }

        delete[] _data;
        _data = tempData;

        EnsureCapacity(value);
    }
}

void MyVector::setCapacity(int capacity)
{
    int* tempData = new int[capacity];
    for(int i = 0; i < _size; i++)
    {
        tempData[i] = _data[i];
    }
    _capacity = capacity;
    delete[] _data;
    _data = tempData;
}

int MyVector::getSize() const
{
    return _size;
}

int MyVector::getCapacity() const
{
    return _capacity;
}
