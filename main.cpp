#include <iostream>
#include "student.h"
#include "group.h"
#include "mystring.h"

#include "soulstime.h"





using namespace std;

int main()
{
    cout << "Hello ITStep!" << endl;


    char* word = "helo";
    char* word2 = "hell";
    MyString str(word);
    MyString str2(word2);

    str.Concat(2.1134);

    str.PrintLn();


    SoulsTime time(23,20, 19);

    time.printTime();

    cout << endl;


    time + 65;

    cout << time.timeOfDay() << endl;






    return 0;
}
