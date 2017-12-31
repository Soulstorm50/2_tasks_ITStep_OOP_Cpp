#include "student.h"

Student::Student() : _firstName("NoFirstName")
                   , _lastName("NoLastName")
                   , _middleName("NoMiddleName")
                   , _dateOfBirth("01.01.1900")
                   , _address("NoAddress")
                   , _phoneNumber("NoPhoneNumber")
                   , _credits(new MyVector(20))
                   , _courseWorks(new MyVector(10))
                   , _exams(new MyVector(10))
{
    init();
}

Student::Student(  const std::string& lastName
                 , const std::string& firstName)
                                    : _firstName(firstName)
                                    , _lastName(lastName)
                                    , _middleName("NoMiddleName")
                                    , _dateOfBirth("01.01.1900")
                                    , _address("NoAddress")
                                    , _phoneNumber("NoPhoneNumber")
                                    , _credits(new MyVector(20))
                                    , _courseWorks(new MyVector(10))
                                    , _exams(new MyVector(10))
{
    init();
}

Student::Student(  const std::string& lastName
                 , const std::string& firstName
                 , const std::string& dateOfBirth)
                                     : _firstName(firstName)
                                     , _lastName(lastName)
                                     , _middleName("NoMiddleName")
                                     , _dateOfBirth(dateOfBirth)
                                     , _address("NoAddress")
                                     , _phoneNumber("NoPhoneNumber")
                                     , _credits(new MyVector(20))
                                     , _courseWorks(new MyVector(10))
                                     , _exams(new MyVector(10))
{
    init();
}

Student::Student(const Student& student)
                   : _firstName(student.getFirstName())
                   , _lastName(student.getLastName())
                   , _middleName(student.getMiddleName())
                   , _dateOfBirth(student.getDateOfBirth())
                   , _address(student.getAddress())
                   , _phoneNumber(student.getPhoneNumber())
                   , _credits(new MyVector(20))
                   , _courseWorks(new MyVector(10))
                   , _exams(new MyVector(10))
{
    for(int i = 0; i < 20; i++)
    {
        _credits->PushBack(student.getCredits()->GetElementAt(i));
    }

    for(int i = 0; i < 10; i++)
    {
        _courseWorks->PushBack(student.getCourseWorks()->GetElementAt(i));
        _exams->PushBack(student.getExams()->GetElementAt(i));
    }
}

Student::Student(const Student* student)
                   : _firstName(student->getFirstName())
                   , _lastName(student->getLastName())
                   , _middleName(student->getMiddleName())
                   , _dateOfBirth(student->getDateOfBirth())
                   , _address(student->getAddress())
                   , _phoneNumber(student->getPhoneNumber())
                   , _credits(new MyVector(20))
                   , _courseWorks(new MyVector(10))
                   , _exams(new MyVector(10))
{
    for(int i = 0; i < 20; i++)
    {
        _credits->PushBack(student->getCredits()->GetElementAt(i));
    }

    for(int i = 0; i < 10; i++)
    {
        _courseWorks->PushBack(student->getCourseWorks()->GetElementAt(i));
        _exams->PushBack(student->getExams()->GetElementAt(i));
    }
}

Student &Student::operator=(const Student& student)
{
    Student tempStd(student);
    _firstName = tempStd.getFirstName();
    _lastName = tempStd.getLastName();
    _middleName = tempStd.getMiddleName();
    _dateOfBirth = tempStd.getDateOfBirth();
    _address = tempStd.getAddress();
    _phoneNumber = tempStd.getPhoneNumber();

    for(int i = 0; i < 20; i++)
    {
        _credits->PushBack(tempStd.getCredits()->GetElementAt(i));
    }

    for(int i = 0; i < 10; i++)
    {
        _courseWorks->PushBack(tempStd.getCourseWorks()->GetElementAt(i));
        _exams->PushBack(tempStd.getExams()->GetElementAt(i));
    }

    return *this;
}

void Student::operator +=(int credit)
{
    for(int i = 0; i < 20; i++)
    {
        if(_credits->GetElementAt(i) == 0)
        {
            _credits->Insert(credit, i);
            _credits->PopBack();
            break;
        }
    }
}

bool Student::operator >(const Student& student)
{
    bool result = false;

    if(getAverageScore() > student.getAverageScore())
    {
        result = true;
    }

    return result;
}

bool Student::operator <(const Student &student)
{
    bool result = false;

    if(getAverageScore() < student.getAverageScore())
    {
        result = true;
    }

    return result;
}

bool Student::operator ==(const Student &student)
{
    bool result = false;

    if(getAverageScore() == student.getAverageScore())
    {
        result = true;
    }

    return result;
}

bool Student::operator !=(const Student &student)
{
    bool result = false;

    if(getAverageScore() != student.getAverageScore())
    {
        result = true;
    }

    return result;
}

Student::~Student()
{
    delete _credits;
    delete _courseWorks;
    delete _exams;
}

void Student::show()
{
    std::cout << "---------------Student info--------------"
              << std::endl << std::endl
              << "Name:\t\t" << _firstName << std::endl
              << "Last name:\t" << _lastName << std::endl
              << "Middle name:\t" << _middleName << std::endl
              << "Date of birth:\t" << _dateOfBirth << std::endl
              << "Address:\t" << _address << std::endl
              << "Phone number:\t" << _phoneNumber << std::endl << std::endl;
}

double Student::getAverageScore() const
{
    int total = 0;

    for(int i = 0; i < 20; i++)
    {
        total += _credits->GetElementAt(i);
    }

    return (double)total / 20.0;
}

const std::string Student::getFirstName() const
{
    return _firstName;
}

void Student::setFirstName(const std::string& firstName)
{
    _firstName = firstName;
}

const std::string Student::getLastName() const
{
    return _lastName;
}

void Student::setLastName(const std::string& lastName)
{
    _lastName = lastName;
}

const std::string Student::getMiddleName() const
{
    return _middleName;
}

void Student::setMiddleName(const std::string& middleName)
{
    _middleName = middleName;
}

const std::string Student::getDateOfBirth() const
{
    return _dateOfBirth;
}

void Student::setDateOfBirth(const std::string& dateOfBirth)
{
    _dateOfBirth = dateOfBirth;
}

const std::string Student::getAddress() const
{
    return _address;
}

void Student::setAddress(const std::string& address)
{
    _address = address;
}

const std::string Student::getPhoneNumber() const
{
    return _phoneNumber;
}

void Student::setPhoneNumber(const std::string& phoneNumber)
{
    _phoneNumber = phoneNumber;
}

const MyVector* Student::getCredits() const
{
    return _credits;
}

const MyVector* Student::getCourseWorks() const
{
    return _courseWorks;
}

const MyVector* Student::getExams() const
{
    return _exams;
}

void Student::init()
{
    for(int i = 0; i < 20; i++)
    {
        _credits->PushBack(0);
    }
    for(int i = 0; i < 10; i++)
    {
        _courseWorks->PushBack(0);
        _exams->PushBack(0);
    }
}







