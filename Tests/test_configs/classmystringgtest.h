#ifndef CLASSMYSTRINGGTEST_H
#define CLASSMYSTRINGGTEST_H


#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "mystring.h"


using namespace testing;

class ClassMyStringGtest : public ::testing::Test
{
    virtual void SetUp()
    {
        stringMock = new MyString();
    }

    virtual void TearDown()
    {
        delete stringMock;
    }

public:

    MyString* stringMock;
};

TEST_F(ClassMyStringGtest, firstTest)
{

    stringMock->Concat("test");

    //EXPECT_EQ('t', Const(stringMock->GetCharAt(1)));

}






#endif // CLASSMYSTRINGGTEST_H
