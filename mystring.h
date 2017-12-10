#ifndef MYSTRING_H
#define MYSTRING_H


class MyString
{
public:
    MyString();
    explicit MyString(unsigned int capacity);

    char GetCharAt(unsigned int index);
    void Print();
    void PrintLn();
    void GetLine();
    const char* GetCharArray() const;
    int CompareTo(MyString str);
    void Concat(MyString str);
    void Concat(char* str);
    void Concat(int value);
    void Concat(double value);

private:

    char* _string;


};

#endif // MYSTRING_H
