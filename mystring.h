#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>

class MyString
{

public:

    MyString();
    explicit MyString(unsigned int capacity);
    explicit MyString(const MyString& word);
    explicit MyString(const char* word);

    MyString& operator =(const MyString& word);
    bool operator ==(const MyString& word);
    bool operator >(const MyString& word);
    bool operator <(const MyString& word);
    bool operator <=(const MyString& word);
    bool operator >=(const MyString& word);
    bool operator !=(const MyString& word);
    //перегрузка () (повторная инициализация строки)
    operator char*();
    operator int();
    operator double();
    const char& operator [](int index) const;
    MyString& operator +=(const MyString& word);
    MyString& operator +=(const char* word);
    MyString& operator +(const MyString& word);
    MyString& operator +(const char* word);
    //перегрузка операции + (char* + String)
    //перегрузка операции + (String + char)
    //перегрузка операции + (char + String)
    friend std::ostream& operator <<(std::ostream& out, MyString const& word)
    {
       return out << word.GetCharArray();
    }
    friend std::istream& operator >>(std::istream& is, MyString& word)
    {
        char* input = new char[255];

        is >> input;

        int size = 0;

        while(input[size] != '\0')
        {
            size++;
        }

        delete[] word._string;

        word._string = new char[size + 1];

        word._capacity = size;

        for(int i = 0; i < size; i++)
        {
            word._string[i] = input[i];
        }

        word._string[size] = '\0';

        delete[] input;

        is.clear();

        return is;

    }




    ~MyString();

    char GetCharAt(unsigned int index) const;
    void Print();
    void PrintLn();
    void GetLine();
    const char* GetCharArray() const;
    int CompareTo(const MyString& str) const;
    int CompareTo(const char* str) const;
    void Concat(const MyString& str);
    void Concat(const char* str);
    void Concat(int value);
    void Concat(double value);
    bool Contains(const MyString& str) const;
    bool EndsWith(const MyString& str) const;   
    bool StartsWith(const MyString& str) const;
    bool Equals(const MyString& str) const;
    int IndexOf(char character) const;
    int LastIndexOf(char character) const;

    int IndexOf(const MyString& str) const;
    int LastIndexOf(const MyString& str) const;
    void Remove (int index);
    void Remove (int start, int count);
    void Replace(char R, char Z);
    void Replace(const MyString& substr, const MyString& rep);
    const MyString* Split(char separator, int& pieces) const;
    const MyString ToLower() const;
    const MyString ToUpper() const;
    void Trim();
    void TrimEnd();
    void TrimStart();
    void Reverse();
    void SortAZ();
    void SortZA();
    void Shuffle();
    void RandomFill();

    int sizeOf() const;  // correct way!

private:

    char* _string;
    int _capacity;


};

#endif // MYSTRING_H
