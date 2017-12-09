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

    student1 = student2;

    //delete student2;
    student1->show();

    cout << endl << student1->getCredits()[0] << endl;
    return 0;
}
