#ifndef MYSTACK_H
#define MYSTACK_H

#include "singlylinkedlist.h"


//Добавить в реализацию стека на списке метод Contains, который проверяет,
//содержится ли некое значение целого типа в стеке (без выгрузки и загрузки элементов).

//Добавить в реализацию стека на списке метод PushLessValue, который добавляет
//в стек элемент только в том случае, если его значение меньше, чем у «верхнего»
//элемента.

//Добавить в реализацию стека на списке метод PushUnique, который добавляет
//в стек элемент только в том случае, если его значение уникально
//(ещё не содержится в стеке).

//Пусть имеется арифметическое выражение, поддерживающее 4 вида скобок:
//(), [], {}, <>. Задача - проверить правильность расположения скобок в выражении
//Примеры:

//{(5-[3+<9>])-4} - правильное выражение {(>5-<[3+)9]-4} - неправильное выражение

//Задачу легко решить с помощью стека. Алгоритм следующий:
//необходимо выполнить проход по выражению слева направо. Если встречается
//открывающая скобка, то её нужно поместить в стек. Если встречается
//закрывающая скобка, то достаём элемент из стека, и поверяем форму скобки.
//Если формы разные или стек пуст, то это значит, что выражение неверное.
//Если к концу работы программы стек оказался не пуст, то это также означает,
//что выражение составлено неверно.

class MyStack
{
public:
    MyStack();


    void Clear();
    bool IsEmpty();
    bool IsFull();
    int GetCount();
    void Push(int number);
    int Pop();
    int Peek(); //который возвращает
    //значение «верхнего» элемента стека, но не извлекает его оттуда.

private:
    enum {
             SIZE = 10
           , EMPTY = 0
         };
    SinglyLinkedList _data;
    int _top;

};

#endif // MYSTACK_H
