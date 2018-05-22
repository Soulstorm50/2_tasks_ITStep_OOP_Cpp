
#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "Tests/test_configs/classmystringgtest.h"
using namespace testing;

/*void checkForCorrection(const MyString& expression)
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
}*/

int main(int argc, char *argv[])
{

    ::testing::InitGoogleTest(&argc, argv);
    int runTest = RUN_ALL_TESTS();

    return 0;
}
