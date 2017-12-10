#ifndef GROUP_H
#define GROUP_H

#include "student.h"
#include <iostream>
#include <string.h>
#include <string>

//TODO: replace all char* to string!

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

    Student** _studentArray;
    int _totalStudents;
    std::string _groupName;
    std::string _groupType;
    int _courseNumber;
};

#endif // GROUP_H
