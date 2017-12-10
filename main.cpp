#include <iostream>
#include "student.h"
#include "group.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;

    Student *student1 = new Student("Petrov", "Petr");
    Student *student2 = new Student("Sidorov", "Sidr");
    Student *student3 = new Student("Jackson", "Mikhael");
    for(int i=0; i<10; i++)
    {
        student2->getExams()[i] = 12;
    }
    for(int i=0; i<10; i++)
    {
        student1->getExams()[i] = 1;
    }
    for(int i=0; i<10; i++)
    {
        student3->getExams()[i] = 10;
    }

    Group group1;

    group1.add(student1);
    group1.add(student2);
    group1.add(student3);

    group1.dismissAllNotPassedStudents();


    group1.show();
    return 0;
}
