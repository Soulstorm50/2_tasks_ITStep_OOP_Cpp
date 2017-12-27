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
    // EnsureCapacity(size + 1);
    // проверка, хватит ли места для нового элемента - делайте сами :)
    _data[_size++] = value;
}

void MyVector::PushFront(int value)
{
    // EnsureCapacity(size + 1);
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

void MyVector::EnsureCapacity(int value)
{
    if(value > _capacity)
    {
        _capacity = (value * 3) / 2;
        int* tempData = new int[_capacity];
        for(int i = 0; i < _size; i++)
        {
            tempData[i] = _data[i];
        }

        delete[] _data;
        _data = tempData;

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
