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
    cout << "Hello ITStep!" << endl;


    Date date(01, 6, 1971);

    date >> 01,01,1970;

    double a = (double)date;

    cout << a << endl;





    return 0;
}
