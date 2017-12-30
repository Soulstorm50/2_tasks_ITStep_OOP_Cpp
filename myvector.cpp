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

bool MyVector::IsEmpty() const
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

int MyVector::IndexOf(int value) const
{
    int result = -1;

    for(int i = 0; i < _size; i++)
    {
        if(_data[i] == value)
        {
            result = i;
            break;
        }
    }

    return result;
}

int MyVector::LastIndexOf(int value) const
{
    int result = -1;

    for(int i = 0; i < _size ; i++)
    {
        if(_data[_size - i - 1] == value)
        {
            result = _size - i - 1;
            break;
        }
    }

    return result;
}

void MyVector::Reverse()
{
    int* tempData = new int[_capacity];
    for(int i = 0; i < _size ; i++)
    {
        tempData[i] = _data[_size - i - 1];
    }
    delete[] _data;
    _data = tempData;
}

void MyVector::TrimToSize()
{
    if(_capacity > _size)
    {
    int* tempData = new int[_size];
    for(int i = 0; i < _size ; i++)
    {
        tempData[i] = _data[i];
    }
    delete[] _data;
    _data = tempData;
    _capacity = _size;
    }
}

void MyVector::RemoveAt(int index)
{
    if(index < _size && index > -1)
    {
        for(int i = index; i < _size; i++)
        {
            _data[i] = _data[i + 1];
        }
        _size--;
    }
    else
    {
        std::cout << "Unreacheble index!" << std::endl;
    }
}

void MyVector::Remove(int value)
{
    for(int i = 0; i < _size; i++)
    {
        if(_data[i] == value)
        {
            RemoveAt(i);
            Remove(value);
            break;
        }
    }
}

bool MyVector::Equals(const MyVector& vector) const
{
    bool result = false;

    if(_size == vector.getSize())
    {
        result = true;

        for(int i = 0; i < _size; i++)
        {
            if(_data[i] != vector.GetElementAt(i))
            {
                result = false;
            }
        }
    }

    return result;
}

int MyVector::GetElementAt(int index) const
{
    int result = -1;

    if(index < _size && index > -1)
    {
        result = _data[index];
    }

    return result;
}

void MyVector::Insert(int value, int index)
{
    if(index < _size && index > -1)
    {
        _data[index] = value;
    }
}

void MyVector::SortAsc()
{
    quickSortAsc(_data, 0, _size - 1);
}

void MyVector::SortDesc()
{
    quickSortAsc(_data, 0, _size - 1);

    Reverse();
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

void MyVector::quickSortAsc(int arr[], int left, int right)
{
    int i = left, j = right;

    int tmp;

    int pivot = arr[(left + right) / 2];



    /* partition */

    while (i <= j) {

          while (arr[i] < pivot)

                i++;

          while (arr[j] > pivot)

                j--;

          if (i <= j) {

                tmp = arr[i];

                arr[i] = arr[j];

                arr[j] = tmp;

                i++;

                j--;

          }

    };



    /* recursion */

    if (left < j)

          quickSortAsc(arr, left, j);

    if (i < right)

          quickSortAsc(arr, i, right);
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
