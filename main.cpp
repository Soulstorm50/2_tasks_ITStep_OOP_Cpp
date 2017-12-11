#include <iostream>
#include "student.h"
#include "group.h"
#include "mystring.h"

using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;


    char* word = "hell2";
    MyString str(word);

    str.GetLine();

    cout << str.sizeOf() << endl;

    cout << str.GetCharAt(1) << endl;
    str.PrintLn();





//    Student *student1 = new Student("Petrov", "Petr");
//    Student *student2 = new Student("Sidorov", "Sidr");
//    Student *student3 = new Student("Jackson", "Mikhael");
//    for(int i=0; i<10; i++)
//    {
//        student2->getCredits()[i] = 12;
//    }
//    for(int i=0; i<10; i++)
//    {
//        student1->getCredits()[i] = 1;
//    }
//    for(int i=0; i<10; i++)
//    {
//        student3->getCredits()[i] = 10;
//    }

//    Group group1;

//    group1.add(student1);
//    group1.add(student2);
//    group1.add(student3);

//    group1.dismissMostUnsuccesfulStudent();


//    group1.show();
    return 0;
}
