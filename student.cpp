#include "student.h"

Student::Student() : _firstName((char*)"NoFirstName")
                   , _lastName((char*)"NoLastName")
                   , _middleName((char*)"NoMiddleName")
                   , _dateOfBirth((char*)"01.01.1900")
                   , _address((char*)"NoAddress")
                   , _phoneNumber((char*)"NoPhoneNumber")
                   , _credits(new int[20])
                   , _courseWorks(new int[10])
                   , _exams(new int[10])
{

}

Student::Student(char* lastName
                 , char* firstName) : _firstName((char*)firstName)
                                    , _lastName((char*)lastName)
                                    , _middleName((char*)"NoMiddleName")
                                    , _dateOfBirth((char*)"01.01.1900")
                                    , _address((char*)"NoAddress")
                                    , _phoneNumber((char*)"NoPhoneNumber")
                                    , _credits(new int[20])
                                    , _courseWorks(new int[10])
                                    , _exams(new int[10])
{

}

Student::Student(char* lastName
                , char* firstName
                , char* dateOfBirth) : _firstName((char*)firstName)
                                     , _lastName((char*)lastName)
                                     , _middleName((char*)"NoMiddleName")
                                     , _dateOfBirth((char*)dateOfBirth)
                                     , _address((char*)"NoAddress")
                                     , _phoneNumber((char*)"NoPhoneNumber")
                                     , _credits(new int[20])
                                     , _courseWorks(new int[10])
                                     , _exams(new int[10])
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

char* Student::getFirstName() const
{
    return _firstName;
}

void Student::setFirstName(char *firstName)
{
    _firstName = firstName;
}

char* Student::getLastName() const
{
    return _lastName;
}

void Student::setLastName(char *lastName)
{
    _lastName = lastName;
}

char* Student::getMiddleName() const
{
    return _middleName;
}

void Student::setMiddleName(char *middleName)
{
    _middleName = middleName;
}

char* Student::getDateOfBirth() const
{
    return _dateOfBirth;
}

void Student::setDateOfBirth(char *dateOfBirth)
{
    _dateOfBirth = dateOfBirth;
}

char* Student::getAddress() const
{
    return _address;
}

void Student::setAddress(char *address)
{
    _address = address;
}

char* Student::getPhoneNumber() const
{
    return _phoneNumber;
}

void Student::setPhoneNumber(char *phoneNumber)
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







