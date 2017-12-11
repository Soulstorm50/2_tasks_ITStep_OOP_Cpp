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

    for(unsigned int i = 0; i < _capacity; i++)
    {
        _string[i] = buffer[i];
    }
}

const char* MyString::GetCharArray() const
{
    return _string;
}

int MyString::CompareTo(MyString str) const
{
    //TODO:сравнение нашей строки с какой-то другой строкой
    //Добавить версию int CompareTo(char*)
}

void MyString::Concat(MyString str)
{
    //TODO:присоединить к нашей строке переданную строку
}

void MyString::Concat(char *str)
{

}

void MyString::Concat(int value)
{

}

void MyString::Concat(double value)
{

}

int MyString::sizeOf() const
{
    return _capacity;
}
