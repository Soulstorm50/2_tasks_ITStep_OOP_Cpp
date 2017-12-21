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
    Date date2(12, 12, 2016);



    cout << date;

    cout << "Test\n";


    cin >> date2;

    cout << date << "\n";


    date2.PrintDate();









    return 0;
}
