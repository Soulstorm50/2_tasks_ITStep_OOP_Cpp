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




    MyString str("welcome");
    MyString str2("welcomee");
    char* cstr = (char*)str2;



    str.PrintLn();

    cout << str.Equals(str2) << endl;

















    return 0;
}
