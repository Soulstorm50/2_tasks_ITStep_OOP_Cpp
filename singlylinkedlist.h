#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

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

    SinglyLinkedList();
    explicit SinglyLinkedList(const SinglyLinkedList& list);

    ~SinglyLinkedList();

    const int& operator [](int index) const;
    bool operator <(const SinglyLinkedList& list);
    bool operator >(const SinglyLinkedList& list);
    bool operator <=(const SinglyLinkedList& list);
    bool operator >=(const SinglyLinkedList& list);
    bool operator ==(const SinglyLinkedList& list);
    bool operator !=(const SinglyLinkedList& list);
    SinglyLinkedList& operator =(const SinglyLinkedList& list);
    SinglyLinkedList& operator +(const SinglyLinkedList& list);
    SinglyLinkedList& operator +=(const SinglyLinkedList& list);
    operator int*();

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
    SinglyLinkedList* Clone() const;
    bool Contains(int value) const;
    int* ToArray();

private:

    Node* head;
    Node* tail;
    int count;

    void quickSortAsc(SinglyLinkedList& list, int left, int right);
    void swap(SinglyLinkedList& list, int first, int second);

};

#endif // SINGLYLINKEDLIST_H
