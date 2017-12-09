#include "student.h"

Student::Student() : _firstName("NoFirstName")
                   , _lastName("NoLastName")
                   , _middleName("NoMiddleName")
                   , _dateOfBirth("01.01.1900")
                   , _address("NoAddress")
                   , _phoneNumber("NoPhoneNumber")
                   , _credits(new int[20])
                   , _courseWorks(new int[10])
                   , _exams(new int[10])
{

}

Student::Student(  const std::string& lastName
                 , const std::string& firstName)
                                    : _firstName(firstName)
                                    , _lastName(lastName)
                                    , _middleName("NoMiddleName")
                                    , _dateOfBirth("01.01.1900")
                                    , _address("NoAddress")
                                    , _phoneNumber("NoPhoneNumber")
                                    , _credits(new int[20])
                                    , _courseWorks(new int[10])
                                    , _exams(new int[10])
{

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
                                     , _credits(new int[20])
                                     , _courseWorks(new int[10])
                                     , _exams(new int[10])
{

}

Student::Student(const Student& student)
                   : _firstName(student.getFirstName())
                   , _lastName(student.getLastName())
                   , _middleName(student.getMiddleName())
                   , _dateOfBirth(student.getDateOfBirth())
                   , _address(student.getAddress())
                   , _phoneNumber(student.getPhoneNumber())
                   , _credits(student.getCredits())
                   , _courseWorks(student.getCourseWorks())
                   , _exams(student.getExams())
{

}

Student::Student(const Student* student)
                   : _firstName(student->getFirstName())
                   , _lastName(student->getLastName())
                   , _middleName(student->getMiddleName())
                   , _dateOfBirth(student->getDateOfBirth())
                   , _address(student->getAddress())
                   , _phoneNumber(student->getPhoneNumber())
                   , _credits(student.getCredits())
                   , _courseWorks(student.getCourseWorks())
                   , _exams(student.getExams())
{

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

int *Student::getCredits() const
{
    return _credits;
}

void Student::setCredits(int *credits)
{
    _credits = credits;
}

int *Student::getCourseWorks() const
{
    return _courseWorks;
}

void Student::setCourseWorks(int *courseWorks)
{
    _courseWorks = courseWorks;
}

int *Student::getExams() const
{
    return _exams;
}

void Student::setExams(int *exams)
{
    _exams = exams;
}







