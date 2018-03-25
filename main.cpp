#include <iostream>
#include "student.h"
#include "group.h"
#include "mystring.h"

#include "soulstime.h"
#include "date.h"
#include "myvector.h"

#include "singlylinkedlist.h"
#include "mystack.h"

#include "mypriorityinarrayqueue.h"

#include "CounterStrikeSimulator/counterstrike.h"

#include <string>
#include "DataDeviceEditor/datadeviceeditor.h"
#include "DataDeviceEditor/idevice.h"
#include "DataDeviceEditor/cdvddrive.h"

using namespace std;

void checkForCorrection(const MyString& expression)
{
    //Task 8.1
    MyStack stack;

    for(int i = 0; i < expression.sizeOf(); i++)
    {
            switch (expression[i])
            {
            case '(': stack.Push(1);
                break;

            case '{': stack.Push(2);
                break;

            case '[': stack.Push(3);
                break;

            case '<': stack.Push(4);
                break;

            case ')': if(stack.Contains(1)) stack.Pop();
                break;

            case '}': if(stack.Contains(2)) stack.Pop();
                break;

            case ']': if(stack.Contains(3)) stack.Pop();
                break;

            case '>': if(stack.Contains(4)) stack.Pop();
                break;

            default:
                break;
            }
    }

    if(stack.IsEmpty())
    {
        std::cout << "Correct expression!" << std::endl;
    }
    else
    {
        std::cout << "Incorrect expression!" << std::endl;
    }
}

int main()
{

    // test for class DataDeviceEditor
    IDevice* dvd = new CDVDDrive();
    dvd->printDeviceProperties();

    DataDeviceEditor dde;
    dde.printDevices();

    dde.addDevice(dvd);
    dde.modifyDeviceVendorName(1, "LG");
    dde.modifyDeviceModel(1, "Digital");
    dde.modifyDeviceName(1, "DVD Drive 16x");
    dde.modifyDeviceCapacity(1, 4700);
    dde.printDevices();

    dde.removeDevice(100);
    dde.removeDevice(1);
    dde.printDevices();





    return 0;
}
