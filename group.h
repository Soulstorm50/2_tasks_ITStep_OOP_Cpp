#ifndef GROUP_H
#define GROUP_H

#include "student.h"


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

    //TODO: Add getters and setters

private:
    Student** _studentArray;
    int _totalStudents;
    char* _groupName;
    char* _groupType;
    int _courseNumber;
};

#endif // GROUP_H
