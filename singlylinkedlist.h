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

//- Clone (метод создаёт точную копию односвязного списка и возвращает указатель
//на эту копию c типом SinglyLinkedList)
//- Contains (булевский метод, проверяет, а есть ли вообще в списке переданное
//в качестве параметра значение)
//- ToArray (метод создаёт точную копию односвязного списка и возвращает указатель
//на эту копию, но не с типом SinglyLinkedList, а с типом int*)

//- перегрузка <, >, <=, >=, ==, !=
//- перегрузка =, конструктор копирования, деструктор

//- перегрузка + и += (конкатенация списков)
//- перегрузка операции явного преобразования в int*

//Каждый из вышеперечисленных методов должен быть хорошо протестирован!
//Коды всех тестов должны прилагаться в мейне.
#include <iostream>
#include <time.h>

class SinglyLinkedList
{
public:

    struct Node
    {
        int data = 0;
        Node* next = nullptr;
    };

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
    void MergeWith(const SinglyLinkedList& list);
    void SortAsc();
    void SortDesc();
    void SetAt(int index, int value);
    void Shuffle();
    bool Equals(const SinglyLinkedList* list) const;

private:

    Node* head = nullptr;
    Node* tail = nullptr;
    int count = 0;

    void quickSortAsc(SinglyLinkedList& list, int left, int right);
    void swap(SinglyLinkedList& list, int first, int second);

};

#endif // SINGLYLINKEDLIST_H
