#include "singlylinkedlist.h"



SinglyLinkedList::SinglyLinkedList(): head(nullptr)
                                    , tail(nullptr)
                                    , count(0)
{

}

SinglyLinkedList::SinglyLinkedList(const SinglyLinkedList& list): head(nullptr)
                                                                , tail(nullptr)
                                                                , count(0)
{
    for(int i = 0; i < list.GetCount(); i++)
    {
        Node* newElem = new Node();
        newElem->data = list[i];
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
}

SinglyLinkedList::~SinglyLinkedList()
{
    Node* elem = head;
    for(int i = 0; i < count; i++)
    {
        Node* elemNext = elem->next;
        delete[] elem;
        elem = elemNext;
    }
}

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

bool SinglyLinkedList::operator <(const SinglyLinkedList& list)
{
    bool result = false;

    if(count < list.GetCount())
    {
        result = true;
    }

    return result;
}

bool SinglyLinkedList::operator >(const SinglyLinkedList& list)
{
    bool result = false;

    if(count > list.GetCount())
    {
        result = true;
    }

    return result;
}

bool SinglyLinkedList::operator <=(const SinglyLinkedList& list)
{
    bool result = false;

    if(count <= list.GetCount())
    {
        result = true;
    }

    return result;
}

bool SinglyLinkedList::operator >=(const SinglyLinkedList& list)
{
    bool result = false;

    if(count >= list.GetCount())
    {
        result = true;
    }

    return result;
}

bool SinglyLinkedList::operator ==(const SinglyLinkedList& list)
{
    bool result = false;

    if(count == list.GetCount())
    {
        result = true;
    }

    return result;
}

bool SinglyLinkedList::operator !=(const SinglyLinkedList& list)
{
    bool result = false;

    if(count != list.GetCount())
    {
        result = true;
    }

    return result;
}

SinglyLinkedList& SinglyLinkedList::operator =(const SinglyLinkedList& list)
{
    SinglyLinkedList tempList(list);

    Node* elem = head;
    for(int i = 0; i < count; i++)
    {
        Node* elemNext = elem->next;
        delete[] elem;
        elem = elemNext;
    }
    head = nullptr;
    tail = nullptr;
    count = 0;

    for(int i = 0; i < tempList.GetCount(); i++)
    {
        Node* newElem = new Node();
        newElem->data = tempList[i];
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

    return *this;
}

SinglyLinkedList& SinglyLinkedList::operator +(const SinglyLinkedList& list)
{
    for(int i = 0; i < list.GetCount(); i++)
    {
        this->AddTail(list[i]);
    }
    return *this;
}

SinglyLinkedList& SinglyLinkedList::operator +=(const SinglyLinkedList& list)
{
    for(int i = 0; i < list.GetCount(); i++)
    {
        this->AddTail(list[i]);
    }
    return *this;
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

void SinglyLinkedList::SortAsc()
{
    quickSortAsc(*this, 0, count - 1);
}

void SinglyLinkedList::SortDesc()
{
    quickSortAsc(*this, 0, count - 1);
    Reverse();
}

void SinglyLinkedList::SetAt(int index, int value)
{
    Node* tmpNode = head;

    int i = 0;

    while(i < count)
    {
        if(i == index)
        {
            tmpNode->data = value;
            break;
        }
        tmpNode = tmpNode->next;
        i++;
    }
}

void SinglyLinkedList::Shuffle()
{
    srand (time(NULL));

    for(int i = 0; i < count; i++)
    {
        swap(*this, i, rand() % count);
    }
}

bool SinglyLinkedList::Equals(const SinglyLinkedList* list) const
{
    bool result = true;

    Node* tmpNode = head;

    int i = 0;

    if(this->count == list->count)
    {
        while(i < count)
        {
            if(!(tmpNode->data == list->operator[](i)))
            {
                result = false;
                break;
            }
            tmpNode = tmpNode->next;
            i++;
        }
    }
    else if(this->count != list->count)
    {
        result = false;
    }

    return result;
}

SinglyLinkedList *SinglyLinkedList::Clone() const
{
    SinglyLinkedList* list = new SinglyLinkedList();

    Node* tmpNode = head;

    for(int i = 0; i < count; i++)
    {
        list->AddTail(tmpNode->data);
        tmpNode = tmpNode->next;
    }

    return list;
}

bool SinglyLinkedList::Contains(int value) const
{
    bool result = false;

    Node* temp = head;

    for(int i = 0; i < count; i++)
    {
        if(temp->data == value)
        {
            result = true;
            break;
        }
        temp = temp->next;
    }

    return result;
}

int* SinglyLinkedList::ToArray()
{
    int* array = new int[count];

    Node* temp = head;

    for(int i = 0; i < count; i++)
    {
        array[i] = temp->data;
        temp = temp->next;
    }

    return array;
}

void SinglyLinkedList::quickSortAsc(SinglyLinkedList& list, int left, int right)
{
    int i = left, j = right;

    int tmp;

    int pivot = list[(left + right) / 2];

    /* partition */

    while (i <= j) {

          while (list[i] < pivot)

                i++;

          while (list[j] > pivot)

                j--;

          if (i <= j) {

                tmp = list[i];

                list.SetAt(i, list[j]);

                list.SetAt(j, tmp);

                i++;

                j--;

          }

    };

    /* recursion */

    if (left < j)

          quickSortAsc(list, left, j);

    if (i < right)

        quickSortAsc(list, i, right);
}

void SinglyLinkedList::swap(SinglyLinkedList& list, int first, int second)
{
    int temp = list[first];
    list.SetAt(first, list[second]);
    list.SetAt(second, temp);
}
