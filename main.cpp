#include <iostream>
#include "student.h"
#include "group.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;

    Student student1("Petrov", "Petr");
    Student student2("Sidorov", "Sidr");

    student1 = student2;

    student1.show();

    return 0;
}
