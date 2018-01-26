#include "singlylinkedlist.h"



const int& SinglyLinkedList::operator [](int index) const
{
    Node* tempElem = head;
    int i = 0;
    while(i < count)
    {
        if(i == index)
        {
            return tempElem->data;
        }
        tempElem = tempElem->next;
        i++;
    }
}

void SinglyLinkedList::AddHead(int data)
{
    Node* newElem = new Node();
    newElem->data = data;
    newElem->next = head;
    if (head == nullptr)
    {
        tail = newElem;
    }
    head = newElem;
    count++;
}

void SinglyLinkedList::AddTail(int data)
{
    Node* newElem = new Node();
    newElem->data = data;
    if (tail == nullptr)
    {
        head = newElem;
    }
    else
    {
        tail->next = newElem;
    }
    tail = newElem;
    count++;
}

void SinglyLinkedList::Insert(int data, int position)
{
    if (position >= count)
    {
        AddTail(data);
        return;
    }
    else if (position <= 0)
    {
        AddHead(data);
        return;
    }

    Node* newElem = new Node();
    newElem->data = data;
    int i = 1;
    Node* beforeNew = head;
    while (i++ != position)
    {
        beforeNew = beforeNew->next;
    }
    newElem->next = beforeNew->next;
    beforeNew->next = newElem;

    count++;
}

void SinglyLinkedList::DelHead()
{
    if (count == 0)
    {
        // cout << "Empty list!\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    count--;
    if (head == nullptr)
    {
        tail = nullptr;
    }
}

void SinglyLinkedList::DelTail()
{
    if (count == 0) {
        // cout << "Empty list!\n";
        return;
    }
    Del(count - 1);
}

void SinglyLinkedList::Del(int position)
{
    if (position <= 0)
    {
        DelHead();
        return;
    }

    if (position >= count)
    {
        position = count - 1;
    }

    int i = 1;
    Node* beforeDel = head;
    while (i++ != position)
    {
        beforeDel = beforeDel->next;
    }
    Node* sacrifice = beforeDel->next;
    beforeDel->next = sacrifice->next;
    delete sacrifice;
    count--;
    if (beforeDel->next == nullptr)
    {
        tail = beforeDel;
    }
}

void SinglyLinkedList::Clear()
{
    while (head != nullptr)
    {
        DelHead();
    }
}

void SinglyLinkedList::Print() const
{
    if (count == 0)
    {
        std::cout << "Empty list!\n";
        return;
    }
    Node* current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int SinglyLinkedList::GetCount() const
{
    return count;
}

int SinglyLinkedList::IndexOf(int data) const
{
    if (count == 0)
    {
        // cout << "Empty list!\n";
        return -1;
    }
    Node* temp = head;
    int i = 0;
    while (i < count)
    {
        if (data == temp->data)
        {
            return i;
        }
        i++;
        temp = temp->next;
    }

    return -1;
}

bool SinglyLinkedList::IsEmpty() const
{
    bool result = false;

    if(count == 0)
    {
        result = true;
    }

    return result;
}

int SinglyLinkedList::LastIndexOf(int data) const
{
    bool isDataFound = false;
    int index;

    if (count == 0)
    {
        // cout << "Empty list!\n";
        return -1;
    }
    Node* temp = head;
    int i = 0;
    while (i < count)
    {
        if (data == temp->data)
        {
            index = i;
            isDataFound = true;
        }
        i++;
        temp = temp->next;
    }

    if(isDataFound)
    {
        return index;
    }

    return -1;
}

void SinglyLinkedList::Reverse()
{
    Node* currNode = head;
    Node* prevNode = nullptr;
    Node* nextNode = nullptr;
    while(currNode != nullptr)
    {
      nextNode = currNode->next;
      currNode->next = prevNode;
      prevNode = currNode;
      currNode = nextNode;
    }
    head = prevNode;
}

void SinglyLinkedList::MergeWith(const SinglyLinkedList& list)
{
    int size = list.GetCount();
    for(int i = 0; i < size; i++)
    {
        this->AddTail(list[i]);
    }
}
