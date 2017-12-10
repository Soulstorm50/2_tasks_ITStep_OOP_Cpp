#include "mystring.h"

MyString::MyString() : _string(new char[1])
{
    //TODO:
    _string[0] = '\0';
}

//TODO: применить в конструкторах инициализаторы / делегирование (вместо функции Initialize)
MyString::MyString(unsigned int capacity)
{
    //TODO:
}

char MyString::GetCharAt(unsigned int index)
{
    //TODO:добавить публичный метод char GetCharAt(unsigned int index),
    //который вернёт символ строки по указанной позиции
}

void MyString::Print()
{
    //TODO:показ строки на экран
}

void MyString::PrintLn()
{
    //TODO:показ строки на экран с переводом курсора на следующую строку
}

void MyString::GetLine()
{
    //TODO:ввод строки с клавиатуры
}

const char *MyString::GetCharArray() const
{
    //TODO:возврат константного указателя на массив символов строки
}

int MyString::CompareTo(MyString str)
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
