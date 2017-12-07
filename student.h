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
