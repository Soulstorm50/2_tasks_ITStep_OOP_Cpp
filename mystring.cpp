#include "mystring.h"

MyString::MyString() : _string(""), _capacity(0)
{
}

MyString::MyString(unsigned int capacity) : _capacity(capacity)
{
    for(unsigned int i = 0; i < capacity; i++)
    {
        _string[i] = ' ';
    }
}

MyString::MyString(const MyString& word) : _capacity(word.sizeOf())
{
    _string = const_cast<char*>(word.GetCharArray());
}

MyString::MyString(const char* word)
{
    _string = const_cast<char*>(word);

    _capacity = 0;
    while (*word != '\0')
    {
        word++;
        _capacity++;
    }
}

char MyString::GetCharAt(unsigned int index) const
{
    return _string[index - 1];
}

void MyString::Print()
{
    printf(_string);
}

void MyString::PrintLn()
{
    printf(_string);
    printf("\n");
}

void MyString::GetLine()
{
    char buffer[160];

    gets(buffer);

    int index = 0;

    _capacity = 0;

    while (buffer[index] != '\0')
    {
        index++;
        _capacity++;
    }

    delete[] _string;

    _string = new char[_capacity];

    for(int i = 0; i < _capacity; i++)
    {
        _string[i] = buffer[i];
    }
    _string[_capacity] = '\0';
}

const char* MyString::GetCharArray() const
{
    return _string;
}

int MyString::CompareTo(const MyString& str) const
{
    int result = 0;

    if(_capacity > str.sizeOf())
    {
        result = 1;
    }
    else if(_capacity < str.sizeOf())
    {
        result = -1;
    }
    else
    {
        for(int i = 0; i < _capacity; i++)
        {
            if((_string[i] != str.GetCharAt(i + 1))
                    && (_string[i] < str.GetCharAt(i + 1)))
            {
                result = -1;
                break;
            }
            else if((_string[i] != str.GetCharAt(i + 1))
                    && (_string[i] > str.GetCharAt(i + 1)))
            {
                result = 1;
                break;
            }
        }
    }

    return result;
}

int MyString::CompareTo(const char* str) const
{
    int tempCapacity = 0;
    int index = 0;
    while (str[index] != '\0')
    {
        index++;
        tempCapacity++;
    }

    int result = 0;

    if(_capacity > tempCapacity)
    {
        result = 1;
    }
    else if(_capacity < tempCapacity)
    {
        result = -1;
    }
    else
    {
        for(int i = 0; i < _capacity; i++)
        {
            if((_string[i] != str[i])
                    && (_string[i] < str[i]))
            {
                result = -1;
                break;
            }
            else if((_string[i] != str[i])
                    && (_string[i] > str[i]))
            {
                result = 1;
                break;
            }
        }
    }

    return result;
}

void MyString::Concat(const MyString& str)
{
    int allCapacity = _capacity + str.sizeOf();
    char* tempStr = new char[allCapacity];

    for(int i = 0; i < allCapacity; i++)
    {
        if(i < _capacity)
        {
            tempStr[i] = _string[i];
        }
        else if(i >= _capacity)
        {
            tempStr[i] = str.GetCharAt(1 + i - _capacity);
        }
    }

    delete[] _string;
    _string = tempStr;
    _capacity = allCapacity;
    _string[allCapacity] = '\0';
}

void MyString::Concat(char *str)
{
    int indexStrLength = 0;
    while (str[indexStrLength] != '\0')
    {
        indexStrLength++;
    }

    int allCapacity = _capacity + indexStrLength;
    char* tempStr = new char[allCapacity];

    for(int i = 0; i < allCapacity; i++)
    {
        if(i < _capacity)
        {
            tempStr[i] = _string[i];
        }
        else if(i >= _capacity)
        {
            tempStr[i] = str[i - _capacity];
        }
    }

    delete[] _string;
    _string = tempStr;
    _capacity = allCapacity;
    _string[allCapacity] = '\0';
}

void MyString::Concat(int value)
{
    char txt[16];
    sprintf(txt, "%d", value);

    Concat(txt);
}

void MyString::Concat(double value)
{
    char txt[16];
    sprintf(txt, "%g", value);

    Concat(txt);
}

int MyString::sizeOf() const
{
    return _capacity;
}
