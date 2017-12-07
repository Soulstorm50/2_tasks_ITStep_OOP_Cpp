#include "group.h"

Group::Group() : _totalStudents(0)
               , _groupName((char*)"Noname group")
               , _groupType((char*)"Noname type")
               , _courseNumber(0)

{
    //_studentArray = new Student*[_totalStudents];

    for(int i = 0; i <= _totalStudents; i++)
    {
        _studentArray[i] = new Student();
    }
}

Group::Group(unsigned int total) : _totalStudents(total)
                                 , _groupName((char*)"Noname group")
                                 , _groupType((char*)"Noname type")
                                 , _courseNumber(0)
{
    for(int i = 0; i <= _totalStudents; i++)
    {
        _studentArray[i] = new Student("Ivanov", "Ivan", "01.01.2000");
    }
}

Group::Group(const Group& group)
{
    //TODO: Copy c-tor. Implement after getters and setters
}

void Group::show()
{
    //показ всех студентов группы
    //(сначала - название и специализация группы, затем - порядковые номера,
    //фамилии в алфавитном порядке и имена студентов)
}

void Group::add(const Student& student)
{
    //Сделать методы добавления студента в группу
}

void Group::merge(Group& group)
{
    //слияния двух групп
}

void Group::moveStudent(const char* lastName
                        , const char* firstName
                        , const Group& group
                        )
{
    //перевода студента из одной группы в другую
}

void Group::dismissAllNotPassedStudents()
{
    //отчисления всех не сдавших сессию студентов
}

void Group::dismissMostUnsuccesfulStudent()
{
    //отчисления одного самого неуспевающего студента
}
