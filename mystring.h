#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

class MyString
{
public:
    MyString();
    explicit MyString(unsigned int capacity);
    explicit MyString(const MyString& word);
    explicit MyString(const char* word);


    char GetCharAt(unsigned int index) const;
    void Print();
    void PrintLn();
    void GetLine();
    const char* GetCharArray() const;
    int CompareTo(MyString str)const ;
    void Concat(MyString str);
    void Concat(char* str);
    void Concat(int value);
    void Concat(double value);

    int sizeOf() const;

private:

    char* _string;
    int _capacity;


};

#endif // MYSTRING_H
