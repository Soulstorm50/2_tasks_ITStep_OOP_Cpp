#include "group.h"

Group::Group() : _totalStudents(0)
               , _groupName("Noname group")
               , _groupType("Noname type")
               , _courseNumber(0)

{
    init();
}

Group::Group(unsigned int total) : _totalStudents(total)
                                 , _groupName("Noname group")
                                 , _groupType("Noname type")
                                 , _courseNumber(0)
{
    init();
}

Group::Group(const Group& group) : _totalStudents(group.getTotalStudents())
                                 , _groupName(group.getGroupName())
                                 , _groupType(group.getGroupType())
                                 , _courseNumber(group.getCourseNumber())
{
    _studentArray = new Student*[_totalStudents];

    for(int i = 0; i < _totalStudents; i++)
    {
        _studentArray[i] = group.getStudentArray()[i];
    }

}

Group::~Group()
{
    for(int i = 0; i < _totalStudents; i++)
    {
        delete _studentArray[i];
    }
    delete[] _studentArray;
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

void Group::add(Student *student)
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

void Group::merge(const Group& group)
{
    for(int i = 0; i < group.getTotalStudents(); i++)
    {
        add(group.getStudentArray()[i]);
    }
}

void Group::moveStudent(const char* lastName
                        , const char* firstName
                        , Group& group
                        )
{
    for(int i = 0; i < _totalStudents; i++)
    {
        if((lastName == _studentArray[i]->getLastName())
            && firstName == _studentArray[i]->getFirstName())
        {
            group.add(_studentArray[i]);
        }
    }
}

void Group::dismissAllNotPassedStudents()
{
    int statusStud[_totalStudents];
    int newTotalStudents = _totalStudents;
    int count = 0;

    for(int i = 0; i < _totalStudents; i++)
    {
        if(!(isSessionPass(_studentArray[i])))
        {
            statusStud[i] = 0;
            newTotalStudents--;
        }
        else
        {
            statusStud[i] = 1;
        }
    }

    Student **tempStudentsArr = new Student*[newTotalStudents];
    for(int i = 0; i < _totalStudents; i++)
    {
        if(statusStud[i] == 1)
        {
            tempStudentsArr[count] = _studentArray[i];
            count++;
        }
        else if(statusStud[i] == 0)
        {
            delete _studentArray[i];
        }
    }
    _studentArray = tempStudentsArr;
    _totalStudents = newTotalStudents;
}

void Group::dismissMostUnsuccesfulStudent()
{
    //отчисления одного самого неуспевающего студента
    int minScore = 240;
    int mark = 0;
    int count = 0;
    for(int i = 0; i < _totalStudents; i++)
    {
        if(getAverageScore(_studentArray[i]) < minScore)
        {
            minScore = getAverageScore(_studentArray[i]);
        }
    }
    for(int i = 0; i < _totalStudents; i++)
    {
        if(getAverageScore(_studentArray[i]) == minScore)
        {
            mark = i;
        }
    }

    Student **tempStudentsArr = new Student*[_totalStudents - 1];
    for(int i = 0; i < _totalStudents; i++)
    {
        if(i == mark)
        {
            delete _studentArray[i];
        }
        else
        {
            tempStudentsArr[count] = _studentArray[i];
            count++;
        }
    }
    _studentArray = tempStudentsArr;
    _totalStudents--;
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

const std::string Group::getGroupName() const
{
    return _groupName;
}

void Group::setGroupName(const std::string& groupName)
{
    _groupName = groupName;
}

const std::string Group::getGroupType() const
{
    return _groupType;
}

void Group::setGroupType(const std::string& groupType)
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
    char* word1;
    char* word2;
    for(int i = 0 ; i < _totalStudents; i++)
    {
        for(int j = i + 1; j < _totalStudents; j++)
        {
            word1 = const_cast<char*>(_studentArray[i]->getLastName().c_str());
            word2 = const_cast<char*>(_studentArray[j]->getLastName().c_str());
            if(strcmp( word1, word2) > 0)
            {
                Student *tmpStudent = _studentArray[i];
                _studentArray[i] = _studentArray[j];
                _studentArray[j] = tmpStudent;
            }
        }
    }
}

void Group::init()
{
    _studentArray = new Student*[_totalStudents];

    for(int i = 0; i < _totalStudents; i++)
    {
        _studentArray[i] = new Student();
    }
}

bool Group::isSessionPass(Student *student)
{
    bool result = true;

    for(int i = 0; i < 10; i++)
    {
        if(student->getExams()[i] <= 5)
        {
            result = false;
            break;
        }
    }

    return result;
}

int Group::getAverageScore(Student *student)
{
    int total = 0;
    for(int i = 0; i < 20; i++)
    {
        total += student->getCredits()[i];
    }

    return total / 20;
}
