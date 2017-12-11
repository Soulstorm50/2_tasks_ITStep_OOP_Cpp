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

    int sizeOf() const;

private:

    char* _string;
    int _capacity;


};

#endif // MYSTRING_H
