#include <iostream>
#include "student.h"
#include "group.h"
#include "mystring.h"

#include "soulstime.h"
#include "date.h"




#include <ctime>
using namespace std;

int main()
{   

    char* test = (char*)"test";
    MyString str("hell");
    MyString str2("Hello");
    MyString str3(test);





    str += test;

    str.PrintLn();












    return 0;
}
