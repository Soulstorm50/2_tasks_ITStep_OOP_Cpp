#ifndef GROUP_H
#define GROUP_H

#include "student.h"


class Group
{
public:
    Group();

private:

    Student *_studentArray;
    int _totalStudents;
    char* _groupName;
    char* _groupType;
    int _courseNumber;
};

#endif // GROUP_H
