#include "group.h"

Group::Group() : _totalStudents(0)
               , _groupName((char*)"Noname group")
               , _groupType((char*)"Noname type")
               , _courseNumber(0)

{
    _studentArray = new Student*[_totalStudents];

    for(int i = 0; i < _totalStudents; i++)
    {
        _studentArray[i] = new Student();
    }
}

Group::Group(unsigned int total) : _totalStudents(total)
                                 , _groupName((char*)"Noname group")
                                 , _groupType((char*)"Noname type")
                                 , _courseNumber(0)
{
    _studentArray = new Student*[_totalStudents];

    for(int i = 0; i < _totalStudents; i++)
    {

        _studentArray[i] = new Student("Ivanov"
                                       , "Ivan"
                                       , "01.01.2000"
                                       );
    }
}

Group::Group(const Group& group)
{
    //TODO: Copy c-tor. Implement after getters and setters
    _studentArray = group.getStudentArray();
    _totalStudents = group.getTotalStudents();
    _groupName = group.getGroupName();
    _groupType = group.getGroupType();
    _courseNumber = group.getCourseNumber();
}

void Group::show()
{
    sort();
    std::cout << "Group:\t\t" << _groupName << std::endl
              << "Specialization:\t" << _groupType << std::endl << std::endl;

    for(int i = 0; i < _totalStudents; i++)
    {
        std::cout << "Number:\t" << i << "\t"
                  << _studentArray[i]->getLastName() << " "
                  << _studentArray[i]->getFirstName() << std::endl;
    }
}

void Group::add(const Student& student)
{
    Student **tempStudentsArr = new Student*[_totalStudents + 1];

    for(int i = 0; i < _totalStudents; i++)
    {
        tempStudentsArr[i] = _studentArray[i];
    }

    tempStudentsArr[_totalStudents] = new Student(student);
    _studentArray = tempStudentsArr;
    _totalStudents++;
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

Student** Group::getStudentArray() const
{
    return _studentArray;
}

void Group::setStudentArray(Student** studentArray)
{
    _studentArray = studentArray;
}

int Group::getTotalStudents() const
{
    return _totalStudents;
}

void Group::setTotalStudents(int totalStudents)
{
    _totalStudents = totalStudents;
}

char* Group::getGroupName() const
{
    return _groupName;
}

void Group::setGroupName(char* groupName)
{
    _groupName = groupName;
}

char* Group::getGroupType() const
{
    return _groupType;
}

void Group::setGroupType(char* groupType)
{
    _groupType = groupType;
}

int Group::getCourseNumber() const
{
    return _courseNumber;
}

void Group::setCourseNumber(int courseNumber)
{
    _courseNumber = courseNumber;
}

void Group::sort()
{
    for(int i = 0 ; i < _totalStudents; i++)
    {
        for(int j = i + 1; j < _totalStudents; j++)
        {
            if(strcmp(  _studentArray[i]->getLastName()
                      , _studentArray[j]->getLastName()) > 0)
            {
                //Replace char* to Student. Need to implement copy c-tor Student
                Student *tmpStudent = _studentArray[i];
                _studentArray[i] = _studentArray[j];
                _studentArray[j] = tmpStudent;
//                char* tmp = _studentArray[i]->getLastName();
//                _studentArray[i]->setLastName(_studentArray[j]->getLastName());
//                _studentArray[j]->setLastName(tmp);
            }
        }
    }
}
