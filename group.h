#ifndef GROUP_H
#define GROUP_H

#include "student.h"
#include <iostream>
#include <string.h>

class Group
{
public:
    Group();
    Group(unsigned int total);
    Group(const Group& group);

    void show();
    void add(const Student& student);
    void merge(Group& group);
    void moveStudent(  const char* lastName
                     , const char* firstName
                     , const Group& group
                      );
    void dismissAllNotPassedStudents();
    void dismissMostUnsuccesfulStudent();

    Student** getStudentArray() const;
    void setStudentArray(Student** studentArray);

    int getTotalStudents() const;
    void setTotalStudents(int totalStudents);

    char* getGroupName() const;
    void setGroupName(char* groupName);

    char* getGroupType() const;
    void setGroupType(char* groupType);

    int getCourseNumber() const;
    void setCourseNumber(int courseNumber);

private:

    void sort();

    Student** _studentArray;
    int _totalStudents;
    char* _groupName;
    char* _groupType;
    int _courseNumber;
};

#endif // GROUP_H
