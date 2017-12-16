#include <iostream>
#include "student.h"
#include "group.h"
#include "mystring.h"

#include "soulstime.h"





using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;


    Student student1;

    student1 += 10;

    student1.show();

    cout << endl;
    cout << student1.getAverageScore();


    return 0;
}
