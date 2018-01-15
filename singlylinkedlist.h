#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

//7.1 Реализовать класс SinglyLinkedList, представляющий собой однонаправленный
//список для удобной работы с целыми числами типа int.

//В классе должно быть три поля:
//- указатель на начало списка (Node* head)
//- указатель на конец списка (Node* tail)
//- количество элементов списка (int count)

//Конструкторы:
//Не нужны.

//Методы (помимо уже существующих в примере):

//- SortAsc (сортировка значений элементов списка по возрастанию)
//- SortDesc (сортировка значений элементов списка по убыванию)
//- Shuffle (случайное перемешивание элементов списка)
//- Equals (в качестве параметра передаётся указатель на другой односвязный список.
//Метод сравнивает списки не только по количеству элементов, но и по их значениям)
//- Clone (метод создаёт точную копию односвязного списка и возвращает указатель
//на эту копию c типом SinglyLinkedList)
//- Contains (булевский метод, проверяет, а есть ли вообще в списке переданное
//в качестве параметра значение)
//- SetAt (метод устанавливает новое значение для элемента по указанному индексу)
//- ToArray (метод создаёт точную копию односвязного списка и возвращает указатель
//на эту копию, но не с типом SinglyLinkedList, а с типом int*)

//- перегрузка <, >, <=, >=, ==, !=
//- перегрузка =, конструктор копирования, деструктор

//- перегрузка + и += (конкатенация списков)
//- перегрузка операции явного преобразования в int*

//Каждый из вышеперечисленных методов должен быть хорошо протестирован!
//Коды всех тестов должны прилагаться в мейне.
#include <iostream>

class SinglyLinkedList
{
public:

    struct Node
    {
        int data = 0;
        Node* next = nullptr;
    };

    //- перегрузка [ ] – обращение к элементу по порядковому номеру
    const int& operator [](int index) const;

    void AddHead(int data);
    void AddTail(int data);
    void Insert(int data, int position);
    void DelHead();
    void DelTail();
    void Del(int position);
    void Clear();
    void Print() const;
    int GetCount() const;
    int IndexOf(int data) const;
    bool IsEmpty() const;
    int LastIndexOf(int data) const;
    void Reverse();
    void MergeWith(const SinglyLinkedList& list); //(метод присоединяет в конец текущего списка все элементы другого
    //списка, ссылка на который передаётся как параметр)

private:

    Node* head = nullptr;
    Node* tail = nullptr;
    int count = 0;

};

#endif // SINGLYLINKEDLIST_H
