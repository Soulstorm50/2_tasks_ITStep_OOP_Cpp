#include <iostream>
#include "student.h"
#include "group.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;

    Student *student1 = new Student("Petrov", "Petr");
    Student *student2 = new Student("Sidorov", "Sidr");
    student2->getCredits()[0] = 99;

    Group group1;
    Group group2(10);

    group1.add(student1);
    group1.add(student2);

    group1.merge(group2);



    group1.show();
    return 0;
}
