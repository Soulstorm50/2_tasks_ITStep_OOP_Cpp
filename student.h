#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>


class Student
{
public:
    Student();
    Student(char* lastName, char* firstName);
    Student(char* lastName, char* firstName, char* dateOfBirth);

    void show();

    char* getFirstName() const;
    void setFirstName(char* firstName);

    char* getLastName() const;
    void setLastName(char* lastName);

    char* getMiddleName() const;
    void setMiddleName(char* middleName);

    char* getDateOfBirth() const;
    void setDateOfBirth(char* dateOfBirth);

    char* getAddress() const;
    void setAddress(char* address);

    char* getPhoneNumber() const;
    void setPhoneNumber(char* phoneNumber);

    int *getCredits() const;
    void setCredits(int* credits);

    int *getCourseWorks() const;
    void setCourseWorks(int* courseWorks);

    int *getExams() const;
    void setExams(int* exams);

private:
    char* _firstName;
    char* _lastName;
    char* _middleName;
    char* _dateOfBirth;
    char* _address;
    char* _phoneNumber;

    int *_credits;
    int *_courseWorks;
    int *_exams;
};

#endif // STUDENT_H
