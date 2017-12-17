#ifndef GROUP_H
#define GROUP_H

#include "student.h"
#include <iostream>
#include <string.h>
#include <string>

//TODO: replace all char* to string!

//5.4 В класс Group добавить перегрузку += Student,
//что добавляет студента в группу.
//А также перегрузить операции «>», «<», «==», «!=»
//для сравнения двух групп по количеству студентов.

//5.6 В класс Student и Group добавить перегрузку >>, <<, ( ) и =.

//5.7 В класc Group добавить перегрузку [ ] (возврат студента по индексу),
//предусмотреть конструктор преобразования из типа Student*,
//перегрузить операцию преобразования типа из Group в Student*.


class Group
{
public:
    Group();
    Group(unsigned int total);
    Group(const Group& group);

    ~Group();

    void show();
    void add(const Student& student);
    void add(Student *student);
    void merge(const Group& group);
    void moveStudent(  const char* lastName
                     , const char* firstName
                     , Group& group
                      );
    void dismissAllNotPassedStudents();
    void dismissMostUnsuccesfulStudent();

    Student** getStudentArray() const;
    int getTotalStudents() const;
    const std::string getGroupName() const;
    const std::string getGroupType() const;
    int getCourseNumber() const;

    void setStudentArray(Student** studentArray); 
    void setTotalStudents(int totalStudents);
    void setGroupName(const std::string& groupName);
    void setGroupType(const std::string& groupType);
    void setCourseNumber(int courseNumber);

private:

    void sort();
    void init();
    bool isSessionPass(Student *student);
    int getAverageScore(Student *student);

    Student** _studentArray;
    int _totalStudents;
    std::string _groupName;
    std::string _groupType;
    int _courseNumber;
};

#endif // GROUP_H
