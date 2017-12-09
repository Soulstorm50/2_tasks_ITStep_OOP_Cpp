#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>


class Student
{
public:
    Student();
    Student(const std::string& lastName, const std::string& firstName);
    Student(  const std::string& lastName
            , const std::string& firstName
            , const std::string& dateOfBirth
            );
    Student(const Student& student);
    Student(const Student* student);
    Student& operator=(const Student& student)
    {

        Student tempStd(student);
        _firstName = tempStd.getFirstName();
        _lastName = tempStd.getLastName();
        _middleName = tempStd.getMiddleName();
        _dateOfBirth = tempStd.getDateOfBirth();
        _address = tempStd.getAddress();
        _phoneNumber = tempStd.getPhoneNumber();
        _credits = tempStd.getCredits();
        _courseWorks = tempStd.getCourseWorks();
        _exams = tempStd.getExams();

        return *this;
    }

    void show();

    const std::string getFirstName() const;
    const std::string getLastName() const;
    const std::string getMiddleName() const;
    const std::string getDateOfBirth() const;
    const std::string getAddress() const;
    const std::string getPhoneNumber() const;
    int *getCredits() const;
    int *getCourseWorks() const;
    int *getExams() const;

    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setMiddleName(const std::string& middleName);
    void setDateOfBirth(const std::string& dateOfBirth);
    void setAddress(const std::string& address);
    void setPhoneNumber(const std::string& phoneNumber);
    void setCredits(int* credits);
    void setCourseWorks(int* courseWorks);
    void setExams(int* exams);


private:
    std::string _firstName;
    std::string _lastName;
    std::string _middleName;
    std::string _dateOfBirth;
    std::string _address;
    std::string _phoneNumber;

    int *_credits;
    int *_courseWorks;
    int *_exams;
};

#endif // STUDENT_H
