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


    SoulsTime time(0, 0, 0);
    SoulsTime time2(0, 0, 0);

    cout << "time1: " << time.timeOfDay() << endl;

    cout << "time2: " << time2.timeOfDay() << endl;

    bool res = time != time2;
    cout << res << endl;


    return 0;
}
