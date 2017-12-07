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







