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

MyString::~MyString()
{
    delete[] _string;
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

void MyString::Concat(const char* str)
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

bool MyString::Contains(const MyString& str) const
{
    //TODO:проверить, содержится ли в нашей строке переданная подстрока (в любой позиции)
}

bool MyString::EndsWith(const MyString& str) const
{
    //TODO:проверить, заканчивается ли наша строка текстом, который передан в параметре
}

bool MyString::StartsWith(const MyString& str) const
{

}

bool MyString::Equals(const MyString& str) const
{
    //TODO: проверить, соответствует ли лексикографически наша строка другой строке (аналогично CompareTo)
}

int MyString::IndexOf(char character) const
{
    //TODO:проверка на вхождение символа в строку,
    //в результате работы возвращает индекс первого найденного символа (от начала строки);
    //если ничего не найдено, возвращает -1
}

int MyString::LastIndexOf(char character) const
{
    //TODO: проверка на вхождение символа в строку,
    //в результате работы возвращает индекс последнего найденного символа (поиск с конца строки);
    //если ничего не найдено, возвращает -1
}

int MyString::IndexOf(const MyString& str) const
{
    //TODO:проверка на вхождение подстроки в строку,
    //в результате работы возвращает индекс начала вхождения;
    //если ничего не найдено, возвращает -1
}

int MyString::LastIndexOf(const MyString &str) const
{
    //TODO:проверка на вхождение подстроки в строку,
    //в результате работы возвращает индекс начала вхождения (но поиск идёт с конца строки);
    //если ничего не найдено, возвращает -1
}

void MyString::Remove(int index)
{
    //TODO:удаление всех символов до конца строки, начиная от переданного индекса
}

void MyString::Remove(int start, int count)
{
    //TODO: удаление count символов, начиная от индекса start
}

void MyString::Replace(char R, char Z)
{
    //TODO: меняет в строке все найденные символы R на переданный символ Z
}

void MyString::Replace(const MyString& substr, const MyString& rep)
{
    //TODO:заменяет найденную подстроку substr на строку rep
}

const MyString *MyString::Split(char separator, int& pieces) const
{
    //TODO:делит нашу строку на кусочки, разделённые символом separator.
    //Указатель на массив кусочков вернётся из функции.
    //В pieces запишется количество получившихся кусочков
}

const MyString MyString::ToLower() const
{
    //TODO: привод к нижнему регистру (в том числе и для русского текста)
}

const MyString MyString::ToUpper() const
{
    //TODO:привод к верхнему регистру (в том числе и для русского текста)
}

void MyString::Trim()
{
    //TODO:убирает лишние пробелы в начале и в конце строки
}

void MyString::TrimEnd()
{

}

void MyString::TrimStart()
{

}

void MyString::Reverse()
{
    //TODO: переворачивание строки
}

void MyString::SortAZ()
{
    //TODO: сортировка всех символов строки в алфавитном порядке от А до Я
}

void MyString::SortZA()
{
    //TODO: сортировка всех символов строки в алфавитном порядке от Я до А
}

void MyString::Shuffle()
{
    //TODO: случайное перемешивание символов строки
}

void MyString::RandomFill()
{
    //TODO: заполнение строки случайными символами (на весь capacity)
}

int MyString::sizeOf() const
{
    return _capacity;
}
