#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

//5.6 В класс Student и Group добавить перегрузку >>, <<, ( ) и =.

//6.2 Добавить в класс Student пользовательские вектора для хранения оценок по экзаменам,
//зачётам и домашним заданиям (заменить векторами стандартные массивы типа int).

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

    Student& operator =(const Student& student);

    void operator +=(int credit);
    bool operator >(const Student& student);
    bool operator <(const Student& student);
    bool operator ==(const Student& student);
    bool operator !=(const Student& student);

    ~Student();

    void show();
    double getAverageScore() const;
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

    void init();

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
