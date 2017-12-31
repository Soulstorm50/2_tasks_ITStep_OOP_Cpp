#include <iostream>
#include "student.h"
#include "group.h"
#include "mystring.h"

#include "soulstime.h"
#include "date.h"
#include "myvector.h"

#include "string"

using namespace std;

int main()
{

    // tests for refactored (task 6.2) class Student
    Student st1;
    Student st2("Willis", "Bruce");
    Student* st3 = new Student("Chan", "Jackie", "17.10.1987");
    st1.show();
    st2.show();
    st3->show();

    Student st4(st2);
    Student st5(st3);
    st4.show();
    st5.show();

    st1 = st2;
    st1.show();

    cout << st1.getCredits()->GetElementAt(0) << endl;
    st1 += 10;
    cout << st1.getCredits()->GetElementAt(0) << endl;

    cout << st1.getAverageScore() << endl;










    return 0;
}
