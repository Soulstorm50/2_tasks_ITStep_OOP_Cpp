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

    SoulsTime time1(16, 20, 30);

    time1.printTime();

    cout << endl;


    cin >> time1;

    time1.printTime();

    cout << endl;




    return 0;
}
