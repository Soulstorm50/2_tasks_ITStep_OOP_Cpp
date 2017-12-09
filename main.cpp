#include <iostream>
#include "student.h"
#include "group.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;


    Group group(10);

    group.getStudentArray()[0]->setLastName("Baggins");
    group.getStudentArray()[1]->setLastName("Arrahams");

    group.show();

    Student newStudent("Ceruba", "Oleks");

    group.add(newStudent);

    group.show();





    return 0;
}
